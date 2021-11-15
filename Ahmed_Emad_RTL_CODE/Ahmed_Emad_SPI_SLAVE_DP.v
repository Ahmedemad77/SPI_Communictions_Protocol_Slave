`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Engineer: Ahmed Emad
// 
// Create Date:    13:43:41 10/12/2021 
// Design Name: 
// Module Name:    SPI_SLAVE_DP 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module SPI_SLAVE_DP
    #(parameter DATA_WIDTH=8, ADDRESS_BUS =8 )( // Currently only support 8 bit address
    output MISO,
    output CNT_TICK,
    output reg CMP_OUT,
    output CNT_SIX_TICK, // used to increment address in case of multi read operation
    input CS,
	 input MOSI,
    input SCLK,
    input CNT_EN,
    input IN_SHIFT_EN,
    input OUT_SHIFT_EN,
    input WRITE_EN,
    input DATA_LOAD_EN,
    input MUX_SEL,
    input CMP_EN,
    input ADD_WR_EN,
    input ADD_INCREMENT
    );

///////////////////////// Reg file size of 256 Byte ////////
// creating regsister file
reg [DATA_WIDTH-1:0] RegFile [2**ADDRESS_BUS -1:0]; 
wire [ADDRESS_BUS-1:0]RegFileAddress;
wire [DATA_WIDTH-1:0]RegFile_DataOut;

assign  RegFile_DataOut = RegFile[RegFileAddress];

always @(negedge SCLK ) begin
    if(WRITE_EN)
    RegFile[RegFileAddress] <= IN_SHIFT_REG;
end


////////////////////////////Address Register /////////////

reg [ADDRESS_BUS-1:0]Address_reg,Address_Next; //@ data width =8

always @(posedge SCLK , posedge CS) begin
    if(CS)
        Address_reg <= {ADDRESS_BUS{1'b0}};
    else 
    Address_reg <= Address_Next;
end

// Next state logic
always @(*) begin
    Address_Next = Address_reg;
    if (ADD_WR_EN == 1'b1) begin
        Address_Next = IN_SHIFT_REG;
    end else if (ADD_INCREMENT==1'b1) begin
        Address_Next = Address_reg +1'b1;
    end
end

///////////////////////////Address Mux///////////////////
assign RegFileAddress = ( MUX_SEL ==1'b1 ? Address_reg : IN_SHIFT_REG);


// INput Shift register (MOSI input) , Output shift register (MISO output)

reg [DATA_WIDTH-1:0] IN_SHIFT_REG ,IN_SHIFT_NEXT;
reg [DATA_WIDTH-1:0] OUTPUT_SHIFT_REG ,OUTPUT_SHIFT_NEXT;


always @(posedge SCLK , posedge CS) begin
    if(CS) begin
    IN_SHIFT_REG <= {DATA_WIDTH{1'b0}};
	 end
    else begin
    IN_SHIFT_REG <= IN_SHIFT_NEXT;
	 end
end
always @(negedge SCLK , posedge CS) begin
    if(CS) begin
    OUTPUT_SHIFT_REG <= {DATA_WIDTH{1'b0}};
	 end
    else begin
    OUTPUT_SHIFT_REG <= OUTPUT_SHIFT_NEXT;
	 end
end


//Next State Logic
always @(*) begin
    //Default values
    IN_SHIFT_NEXT = IN_SHIFT_REG;
    OUTPUT_SHIFT_NEXT = OUTPUT_SHIFT_REG;
    if (IN_SHIFT_EN == 1'b1) begin
        IN_SHIFT_NEXT = { IN_SHIFT_REG[DATA_WIDTH-2:0] , MOSI };
    end

    if (OUT_SHIFT_EN == 1'b1) begin
        OUTPUT_SHIFT_NEXT = { OUTPUT_SHIFT_REG[DATA_WIDTH-2:0] , 1'b0 };
    end else if (DATA_LOAD_EN) begin
        OUTPUT_SHIFT_NEXT = RegFile_DataOut; //register ;
    end

end
assign MISO = OUTPUT_SHIFT_REG[7];

////////////////////// Counter ///////////////////////// 

reg [2:0]Counter_reg,Counter_Next; //@ data width =8

always @(posedge SCLK , posedge CS) begin
    if(CS)
        Counter_reg <= 3'b000;
    else 
    Counter_reg <= Counter_Next;
end

// Next state logic
always @(*) begin
    Counter_Next = Counter_reg;
    if (CNT_EN == 1'b1) begin
        Counter_Next = Counter_reg + 1'b1;
    end
end

assign CNT_TICK = (Counter_reg == 3'b111 ? 1'b1: 1'b0);
assign CNT_SIX_TICK = (Counter_reg == 3'b110 ? 1'b1: 1'b0);
////////////////////////////////////////////////////////

////////////////// comparator //////////
wire Cmp_Signal;


assign Cmp_Signal = (IN_SHIFT_REG == 2'b11 ? 1'b1: 1'b0);
always @(posedge SCLK ,posedge CS) begin
    if(CS)
        CMP_OUT <= 1'b0;
    else if (CMP_EN) begin
        CMP_OUT <= Cmp_Signal;
    end
end

endmodule
