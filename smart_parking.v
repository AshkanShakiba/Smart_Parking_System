/*--  *******************************************************
--  Computer Architecture Course, Laboratory Sources 
--  Amirkabir University of Technology (Tehran Polytechnic)
--  Department of Computer Engineering (CE-AUT)
--  https://ce[dot]aut[dot]ac[dot]ir
--  *******************************************************
--  All Rights reserved (C) 2021-2022
--  *******************************************************
--  Student ID  : 
--  Student Name: 
--  Student Mail: 
--  *******************************************************
--  Additional Comments:
--
--*/

/*-----------------------------------------------------------
---  Module Name: smart_parking
-----------------------------------------------------------*/
`timescale 1 ns/1 ns
module smart_parking(
input entry,
input [7:0] parking_capacity,
input exit,
input [2:0] pattern,
input [7:0] time_out,
input [7:0] time_in,
output [7:0] new_capacity,
output [7:0] time_total,
output [3:0] parked,
output [3:0] empty
);

wire [2:0] token;
wire [2:0] park_number;
wire [7:0] park_location;
wire [7:0] parking_capacity_new;

entry_park m1(entry, parking_capacity, park_number);
token_production m2(park_number, pattern, token);
exit_park m3_1(exit, token, pattern, park_location);
calculate_new_capacity m3_2(park_location, parking_capacity_new, new_capacity);
time_calculate m4(time_out, time_in, time_total);
parking_capacity_counter m5(new_capacity, parked, empty);
update_capacity m6(entry, parking_capacity, parking_capacity_new);

endmodule
