📅 Event Scheduling using Hash Table with Collision Handling in C

An efficient scheduling system built using C programming that utilizes a hash table to allocate events to time slots. The system handles scheduling conflicts using linear probing, ensuring no two events overwrite each other.

🎯 Objective
To implement a scheduling system that uses hashing for event placement and handles collisions using linear probing, simulating a real-world event scheduling mechanism.

🧠 Introduction
Efficient scheduling is essential in event management. This project uses a hash table to assign events to specific time slots based on a hash function. If a slot is already occupied, linear probing is used to find the next available time slot. This approach helps avoid conflicts and maintains an organized schedule.

🛠 Tools & Technologies
Language: C

Data Structure: Hash Table

Collision Resolution Technique: Linear Probing

💡 Code Explanation

Component	Description
struct hash	Defines each time slot with an integer n representing a scheduled event.
time[m]	Hash table array with m = 10 total slots.
create_time()	Initializes all time slots to 0 (empty).
insert()	Takes an event as input, calculates a hash, and attempts to place it in a slot.
collision()	If the hashed slot is occupied, finds the next empty slot using linear probing.
display()	Displays all scheduled events with their respective slots.
main()	Provides a user menu to insert events, view schedule, or exit.

🌟 Features (Current Phase)
Event insertion with auto-assigned time slot using hash function

Collision handling using Linear Probing

Hash Table-based efficient event lookup

Simple and clean Command Line Interface (CLI)

Reusable modular functions (insert, collision, display, etc.)

Real-time feedback for collision and successful scheduling

Predefined fixed-size hash table for simplicity and clarity

✅ Tech Stack
Language: C

Data Structure: Hash Table

Collision Handling: Linear Probing

Platform: Command Line (Terminal)

Compiler: GCC or any standard C compiler

Libraries Used: <stdio.h>, <stdlib.h> (Standard C libraries)



🤝 Team Collaboration

Team Member	Roll Number
Om Prakhar	2400032679
Aditya Shrivastava	2400032677
The duo worked closely on logic development, testing, and implementation to ensure accurate and optimized scheduling.

![image](https://github.com/user-attachments/assets/88bc1a79-801a-489d-999e-d17e84b5c597)
![image](https://github.com/user-attachments/assets/ebf8eb55-8503-4b23-9112-35f5243e8e48)
![image](https://github.com/user-attachments/assets/712f1763-f1fb-4593-8a8a-f592a2f0da50)


