# SysC 
> A System Monitor Application Project written in C

This is a project which main goal is to learn how C can interact with the operating system.  

## Project Goal
- To utilize C and learn how C can interact within the operating system.
- To utilize C advantage on manipulating memory allocation to be as low memory consumption as possible.
- To learn C# to create a native desktop application.

## Tech Stack
Language: C, C#  
Framework: Avalonia UI

## Core Feature
Monitor Usage: CPU, GPU & RAM  
Monitor Temperature: CPU, GPU  
Advance Monitoring: Each Processor CPU/GPU + RAM Usage  

## Obstacle 
Monitor temperature does not exist in standard windows api.  
There is 3 Method to Solve this:  
1. Query WMI (Windows Management Instrumentation)
2. Hardware-sdk  # Nvidia - NVAPI (C-based SDK)  | Intel - Intel PCM (C++-based SDK)  |  LibreHardwareMonitor (dotnet C# based)
3. The "Raw" C Way (MSRs + WinRing0)  

## Core Project Roadmap
Phase 1: Prove of Concept  
- Develop the backend and use console/terminal to showcase whether it will works or not.
- Backend: C, Win32 API, PDH (Performance Data Helper)  
  
Phase 2: Bridge (API)
- Compile the backend into a dll file so that the front-end can interact and call the required function to showcase the feature.

Phase 3: Front-end (C#)
- Utilize framework library (Avalonia UI) to create a native front-end desktop application.

## Additional Feature (Future Roadmap)  
|     Name                   |     Priority       |
| -------------------------- | ------------------ |
| Disk Usage                 |        Yes         |
| Networking Usage           |        Yes         |
| Resource Usage Breakdown   |        Maybe       |