`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:15:56 01/06/2022 
// Design Name: 
// Module Name:    adder_subtractor_4bit 
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
module adder_subtractor_4bit(
 S,
 A,
 B,
 Sum);
input S;
input [3:0] A;
input [3:0] B;
output [4:0] Sum;
wire [3:0] C;
assign C[0]=S;
full_adder f1(A[0],B[0]^S,C[0],C[1],Sum[0]);
full_adder f2(A[1],B[1]^S,C[1],C[2],Sum[1]);
full_adder f3(A[2],B[2]^S,C[2],C[3],Sum[2]);
full_adder f4(A[3],B[3]^S,C[3],Sum[4],Sum[3]);
endmodule
