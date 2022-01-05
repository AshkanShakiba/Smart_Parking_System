`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:29:19 01/05/2022
// Design Name:   entry_checker
// Module Name:   E:/University/LC Lab/Codes/LC_Project/test_entry_checker.v
// Project Name:  LC_Project
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: entry_checker
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_entry_checker;

	// Inputs
	reg entry;
	reg [7:0] parking_capacity;

	// Outputs
	wire enable;

	// Instantiate the Unit Under Test (UUT)
	entry_checker uut (
		.entry(entry), 
		.parking_capacity(parking_capacity), 
		.enable(enable)
	);

	initial begin
		entry = 1; parking_capacity = 8'b11111111; #200; // enable = 1
		entry = 0; parking_capacity = 8'b11111111; #200; // enable = 0
		entry = 1; parking_capacity = 8'b10101100; #200; // enable = 1
		entry = 1; parking_capacity = 8'b00000000; #200; // enable = 0
		entry = 1; parking_capacity = 8'b10000000; #200; // enable = 1
	end
      
endmodule

