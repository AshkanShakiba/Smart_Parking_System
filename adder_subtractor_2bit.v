`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:15:31 01/06/2022 
// Design Name: 
// Module Name:    adder_subtractor_2bit 
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
module adder_subtractor_2bit(
 S,
 A,
 B,
 Sum);
input S;
input [1:0] A;
input [1:0] B;
output [2:0] Sum;
wire [1:0] C;
assign C[0]=S;
full_adder f1(A[0],B[0]^S,C[0],C[1],Sum[0]);
full_adder f2(A[1],B[1]^S,C[1],Sum[2],Sum[1]);
endmodule
