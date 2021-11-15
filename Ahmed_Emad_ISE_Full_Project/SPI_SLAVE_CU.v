`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Engineer: Ahmed Emad
// 
// Create Date:    13:31:10 10/12/2021 
// Design Name: 
// Module Name:    SPI_SLAVE_CU 
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
module SPI_SLAVE_CU(
    input CS,
    input SCLK,
    input CNT_TICK,
    input CNT_SIX_TICK, // used to increment address in case of multi read operation
    input CMP_OUT,
    output reg  CNT_EN,
    output reg  IN_SHIFT_EN,
    output reg  OUT_SHIFT_EN,
    output reg  WRITE_EN,
    output reg  DATA_LOAD_EN,
    output reg  MUX_SEL,
    output reg  CMP_EN,
    output reg  ADD_WR_EN,
    output reg  ADD_INCREMENT
    );

localparam [2:0] IDLE = 3'b000,
                 READ_COMMAND  = 3'b001,
                 READ_ADDRESS  = 3'b010,
                 READ_TRANSFER = 3'b011,
                 WRITE_TRANSFER = 3'b100;

reg [2:0]state_reg,state_next;

always @(posedge SCLK ,posedge CS) begin
    if (CS) 
        state_reg <= IDLE;
    else 
        state_reg <= state_next;
end


// combinantial 

always @(*) begin

//default values
state_next = state_reg;
CNT_EN = 0;
IN_SHIFT_EN = 0;
OUT_SHIFT_EN = 0;
WRITE_EN = 0;
DATA_LOAD_EN = 0;
MUX_SEL = 0;
CMP_EN = 0;
ADD_WR_EN = 0;
ADD_INCREMENT = 0;

case (state_reg)
    IDLE: begin
        if (CS==0) begin
            state_next = READ_COMMAND;
            IN_SHIFT_EN =1'b1; // to enable sample in the next rising CLK
        end
    end 
    READ_COMMAND:begin
        IN_SHIFT_EN = 1'b1; 
        CNT_EN = 1'b1;
        if (CNT_TICK == 1'b1) begin
            state_next = READ_ADDRESS;
            CMP_EN = 1'b1;
        end
    end
    READ_ADDRESS:begin
        IN_SHIFT_EN = 1'b1; 
        CNT_EN = 1'b1;
        if (CNT_TICK == 1 && CMP_OUT==1'b1 ) begin // Read operation
            state_next = READ_TRANSFER;
            ADD_WR_EN = 1'b1; // to be used if operation is multi Read /Write
            MUX_SEL = 1'b0; // to select input shift reg to be source of address of REG_FILE
            DATA_LOAD_EN = 1'b1 ; // to allow the output register to capture the data next falling edge
        end
        if (CNT_TICK == 1 && CMP_OUT==1'b0 ) begin // write operation
            state_next = WRITE_TRANSFER;
            ADD_WR_EN = 1'b1; // to be used if operation is multi Read /Write
        end
    end
    READ_TRANSFER:begin
        CNT_EN = 1'b1;
        MUX_SEL = 1'b1;
        if (CS==1'b1) begin
            state_next = IDLE;
        end
        else begin 
            if (CNT_TICK==1'b1) begin
                DATA_LOAD_EN =1'b1;
                OUT_SHIFT_EN = 1'b0;
            end
            else 
                OUT_SHIFT_EN = 1'b1;

            if (CNT_SIX_TICK==1'b1) begin
                ADD_INCREMENT= 1'b1;
            end
        end

    end
    WRITE_TRANSFER:begin
        CNT_EN = 1'b1;
        IN_SHIFT_EN = 1'b1;
        MUX_SEL = 1'b1;
        if (CS==1'b1) begin
            state_next = IDLE;
        end
        else begin 
            if (CNT_TICK==1'b1) begin
                WRITE_EN =1'b1;
                ADD_INCREMENT =1'b1;
            end
        end
    end
   default: 
        state_next = IDLE;
endcase


end

endmodule
