# SysC 
> A System Monitor Application Project written in C

This is a project which main goal is to learn how C can interact with the operating system.  

## Project Goal
- To utilize C and learn how C can interact within the operating system.
- To learn manual memory management and resource lifetime management in C.
- To learn C# to create a native desktop application.

## Tech Stack
Language: C, C#  
Framework: Avalonia UI

## Core Feature
Main Platform: Windows
Monitor Usage: CPU, GPU & RAM  
Monitor Temperature: CPU, GPU  
Advanced Monitoring: Each Processor CPU/GPU + RAM Usage  

## Core Project Roadmap
Phase 1: Prove of Concept (Back-end Prototype)  
- Develop the backend and use console/terminal to showcase whether it works or not.  
- Backend: C, Win32 API, PDH (Performance Data Helper)  
  
Phase 2: Bridge (API)
- Compile the backend into a dll file so that the front-end can interact and call the required function to showcase the feature.

Phase 3: Application Prototype (C#)
- Utilize framework library (Avalonia UI) to create a native front-end desktop application.

## Project Phase  

| Phase  | Deliverable       | Learning Goals                   |
| -----  | -----------       | --------------                   | 
| 1      | Console Monitor   | Win32 API, PDH, Memory Management|
| 2      | Process Monitor   | Processes, Handles, Permissions  |
| 3      | Sampling Monitor  | Threads, Mutexes, Synchronization|
| 4      | DLL Bridge        | ABI, Linking, Interop            |
| 5      | Avalonia UI       | C# Interop, Architecture         |
| 6      | Advanced Sensors  | WMI, Hardware APIs               |


## Additional Roadmap
> This is just to sketch out whether if I want to do or not.
1. Cross-OS Compatibility (MacOs, Windows, Linux)  
2. Network Monitoring  
3. Disk Usage (Read, Write)  