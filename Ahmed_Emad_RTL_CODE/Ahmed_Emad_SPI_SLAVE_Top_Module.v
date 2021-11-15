`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Engineer: Ahmed Emad
// 
// Create Date:    13:24:32 10/12/2021 
// Design Name: 
// Module Name:    SPI_SLAVE 
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
module SPI_SLAVE(
    input MOSI,
    output MISO,
    input CS,
    input SCLK
    );

wire CNT_TICK;
wire CNT_EN;    
wire CMP_OUT; 
wire CNT_SIX_TICK;
wire IN_SHIFT_EN;
wire OUT_SHIFT_EN;
wire WRITE_EN;
wire DATA_LOAD_EN;
wire MUX_SEL;
wire CMP_EN;
wire ADD_INCREMENT;
wire ADD_WR_EN;

// Instantiate the control unit
SPI_SLAVE_CU ControlUnit (
    .CS(CS), 
    .SCLK(SCLK), 
    .CNT_TICK(CNT_TICK), 
    .CNT_SIX_TICK(CNT_SIX_TICK), 
    .CMP_OUT(CMP_OUT), 
    .CNT_EN(CNT_EN), 
    .IN_SHIFT_EN(IN_SHIFT_EN), 
    .OUT_SHIFT_EN(OUT_SHIFT_EN), 
    .WRITE_EN(WRITE_EN), 
    .DATA_LOAD_EN(DATA_LOAD_EN), 
    .MUX_SEL(MUX_SEL), 
    .CMP_EN(CMP_EN), 
    .ADD_WR_EN(ADD_WR_EN), 
    .ADD_INCREMENT(ADD_INCREMENT)
    );
// Instantiate the Data Path
SPI_SLAVE_DP data_Path (
    .MISO(MISO), 
    .CNT_TICK(CNT_TICK), 
    .CMP_OUT(CMP_OUT), 
    .CNT_SIX_TICK(CNT_SIX_TICK), 
    .CS(CS), 
    .MOSI(MOSI), 
    .SCLK(SCLK), 
    .CNT_EN(CNT_EN), 
    .IN_SHIFT_EN(IN_SHIFT_EN), 
    .OUT_SHIFT_EN(OUT_SHIFT_EN), 
    .WRITE_EN(WRITE_EN), 
    .DATA_LOAD_EN(DATA_LOAD_EN), 
    .MUX_SEL(MUX_SEL), 
    .CMP_EN(CMP_EN), 
    .ADD_WR_EN(ADD_WR_EN), 
    .ADD_INCREMENT(ADD_INCREMENT)
    );




endmodule
