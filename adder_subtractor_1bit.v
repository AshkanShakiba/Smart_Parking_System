`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:47:34 01/06/2022 
// Design Name: 
// Module Name:    adder_subtractor_1bit 
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
module adder_subtractor_1bit(
 S,
 A,
 B,
 Sum);
input S;
input A;
input B;
output [1:0] Sum;
wire C;
assign C=S;
full_adder f1(A,B^S,C,Sum[1],Sum[0]);
endmodule
