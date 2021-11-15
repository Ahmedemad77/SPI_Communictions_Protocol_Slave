`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Engineer: Ahmed Emad
//
// Create Date:   21:59:53 10/12/2021
// Design Name:   SPI_SLAVE
// Module Name:   F:/Si_VISION_INTERN/Assignment/Code/SPI_SLAVE/SPI_SLAVE_TEST.v
// Project Name:  SPI_SLAVE
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: SPI_SLAVE
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module SPI_SLAVE_TEST;

	// Inputs
	reg MOSI;
	reg CS;
	reg SCLK;

	// Outputs
	wire MISO;

	// Instantiate the Unit Under Test (UUT)
	SPI_SLAVE uut (
		.MOSI(MOSI), 
		.MISO(MISO), 
		.CS(CS), 
		.SCLK(SCLK)
	);
	
	 
	localparam [7:0] WRITE_COMMAND= 8'b00000010,
					 READ_COMMAND = 8'b00000011;
	integer i;
	integer j;
	integer Write_Num_operation;
	integer Read_Num_operation;
	reg Clk_start;
	reg clk;
	reg [7:0] command ;
	reg [7:0] readData;
	reg MULTI_RD_WR_PASS_FLAG ;
	//clock setup
	always #5 clk = ~clk;
	
	always #5 SCLK = (clk & Clk_start );

	initial begin
		// Initialize Inputs
		MOSI = 0;
		CS = 1;
		Clk_start =1'b0;
		clk = 1;
		// Wait 100 ns for global reset to finish
		#100;
      	///////////////////////////////////////////////////////////
		// Test Read /write OPeration
		// Test Scenario : 1- Write one byte(10101010) at address 0 
		// 				   2- Read one byte from address 0 
		//				   3- Check if data is received write and 
		//					  display result
		///////////////////////////////////////////////////////////

		//////////////// Write operation
    	$display ("*** TEST CASE 1 -> Write /Read Operation ***");
		CS =0;  
		#10
		Clk_start =1'b1;
		//1- send Command
		command = WRITE_COMMAND ;
		for ( i=0 ;i<8 ;i=i+1 ) begin
		MOSI = command[7-i];
		#10;
		end
		//2-Send Address
		for ( i=0 ;i<8 ;i=i+1 ) begin
		MOSI = 0;
		#10;
		end
		//3-Send Data
		for ( i=0 ;i<8 ;i=i+1) begin
		MOSI = ~MOSI;
		#10;
		end
		Clk_start =1'b0;
		CS=1;
		#10

		////////////////////////////  Read operation 
		command = READ_COMMAND;
		CS=0;
		#10
		Clk_start =1'b1;
		
		//1- send Command
		for ( i=0 ;i<8 ;i=i+1 ) begin
		MOSI = command[7-i];
		#10;
		end
		//2-Send Address
		for ( i=0 ;i<8 ;i=i+1 ) begin
		MOSI = 0;
		#10;
		end
		//Read Data 
		for ( i=0 ;i<8 ;i=i+1 ) begin
		readData={ readData[6:0] ,MISO } ;
		#10;
		end
		Clk_start =1'b0;
		CS=1;
		#10
		if (readData == 8'b10101010)
       	 $display ("Write and read are PASSED") ;
   		else
      	begin
        $display ("Write and read are FAILED") ;
      	end
   
		/////////////////////////////////////////////////////////////
		// Test Multi Read / write OPeration
		// Test Scenario : 1- Write Write_Num_operation bytes 
		//					  of data (10101010) starting from address 0 
		// 				   2- Read the written  bytes starting from 
		//					  address 0 and afer the byte received
		//					  check it 
		//				   3- Check if all data is received write and 
		//					  display result
		///////////////////////////////////////////////////////////
		
		////////////////////1- Multi Write operation
		CS = 0;
		#10
		Clk_start =1'b1;
		
		//1- send Command
		command = WRITE_COMMAND ;
		for ( i=0 ;i<8 ;i=i+1 ) begin
		MOSI = command[7-i];
		#10;
		end
		//2-Send Address
		for ( i=0 ;i<8 ;i=i+1 ) begin
		MOSI = 0;
		#10;
		end
		//3-Send Data
		Write_Num_operation = 256;
		for(j=0;j<Write_Num_operation;j=j+1) begin
		for ( i=0 ;i<8 ;i=i+1) begin
		MOSI = ~MOSI;
		#10;
		end
		end

		CS=1;
		Clk_start =1'b0;
		#10
		
		////////////////////////2-Multi Read operation
		command = READ_COMMAND;
		CS=0;
		#10;
		Clk_start =1'b1;
		//1- send Command
		for ( i=0 ;i<8 ;i=i+1 ) begin
		MOSI = command[7-i];
		#10;
		end
		//2-Send Address
		for ( i=0 ;i<8 ;i=i+1 ) begin
		MOSI = 0;
		#10;
		end
		MULTI_RD_WR_PASS_FLAG = 1'b1; 
		//3- read data
		Read_Num_operation = 256;
		for (j=0 ;j<Read_Num_operation ;j=j+1 ) begin

		for ( i=0 ;i<8 ;i=i+1 ) begin
		readData ={ readData[6:0] ,MISO } ;
		#10;
		end
		//check data 
		if (readData != 8'b10101010)
       	 MULTI_RD_WR_PASS_FLAG = 1'b0; 
      	end
		
		if (MULTI_RD_WR_PASS_FLAG == 1'b1)
       	 $display ("Multi Write and read are PASSED") ;
   		else
      	begin
        $display ("Multi Write and read are FAILED") ;
      	end
   
		CS=1;
		Clk_start =1'b0;
		#10;
	end
      
endmodule

//  function to send address
