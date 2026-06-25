/*
 * Name: sys_ram.h
 * Purpose: Define Header file for RAM Tracking 
 * 
 */

// Use to convert bytes
#define TO_MB (1024 * 1024)

#define TO_GB (1024 * 1024 * 1024)

// Specify the width of the field in which to print the numbers. 
// The asterisk in the format specifier "%*I64d" takes an integer 
// argument and uses it to pad and right justify the number.
#define WIDTH 7