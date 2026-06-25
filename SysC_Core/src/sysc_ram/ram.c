/*
 * Name: main.c
 * Purpose: To test and run the logic for RAM Tracking
 * 
 */

#include <stdio.h>
#include <windows.h>
#include <sysc_ram.h>

int main(){

    // RAM Tracking
    MEMORYSTATUSEX statex;
    statex.dwLength = sizeof(statex);
    GlobalMemoryStatusEx(&statex);

    printf("%*ld%% of memory in use. \n", WIDTH,statex.dwMemoryLoad);
    printf("%*lld total GB of physical memory. \n", WIDTH, statex.ullTotalPhys/TO_GB);
    printf("%*lld total GB of virtual memory. \n", WIDTH, statex.ullTotalVirtual/TO_GB);

}
