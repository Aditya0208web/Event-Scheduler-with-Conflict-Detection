Title: 
Event Scheduling using Hash Table with Collision Handling in C

Objective:
To design and implement an efficient event scheduling system using hash tables to assign events to time slots, handling collisions using linear probing.

Introduction:
In an event management scenario, it's crucial to assign events to specific time slots efficiently. This project simulates such a system using a hash table to manage and organize events by their scheduled time. The hash function distributes events into slots, and in case of conflicts (collisions), linear probing is used to find the next available slot.

Tools & Technologies:
Programming Language: C
Data Structure Used: Hash Table
Collision Resolution: Linear Probing
            
Code Explanation:
Structure hash: Holds one integer per slot representing the event.
Hash Table time[m]: Stores scheduled events using hashing (modulo m).
Function insert(): Schedules an event. If collision occurs, calls collision().
Function collision(): Handles collisions using linear probing.
Function display(): Displays scheduled events.
Function create_time(): Initializes time slots. 

Conclusion:
This project demonstrates how hashing and collision resolution can be effectively used in event management systems to avoid time conflicts. Although simple, the design offers a strong foundation for developing more advanced scheduling systems.
