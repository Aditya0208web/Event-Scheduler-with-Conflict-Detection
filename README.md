# 🌐🔧 SMART EVENT SCHEDULER 📅

An efficient scheduling system built using C programming that utilizes a hash table to allocate events to time slots. The system handles scheduling conflicts using linear probing, ensuring no two events overwrite each other.

## 🛠 TOOLS & TECHNOLOGIES

**Language**: C  
**Data Structure**: Hash Table  
**Collision Resolution Technique**: Linear Probing

## 💡 CODE EXPLANATION

| Component     | Description                                                            |
|---------------|------------------------------------------------------------------------|
| struct hash   | Defines each time slot with an integer n representing a scheduled event. |
| time[m]       | Hash table array with m = 10 total slots.                               |
| create_time() | Initializes all time slots to 0 (empty).                               |
| insert()      | Takes an event as input, calculates a hash, and attempts to place it in a slot. |
| collision()   | If the hashed slot is occupied, finds the next empty slot using linear probing. |
| display()     | Displays all scheduled events with their respective slots.             |
| main()        | Provides a user menu to insert events, view schedule, or exit.        |

## 🌟 FEATURES (CURRENT PHASE)

- Event insertion with auto-assigned time slot using hash function
- Collision handling using Linear Probing
- Hash Table-based efficient event lookup
- Simple and clean Command Line Interface (CLI)
- Reusable modular functions (insert, collision, display, etc.)
- Real-time feedback for collision and successful scheduling
- Predefined fixed-size hash table for simplicity and clarity

## 🤝 TEAM COLLABORATION

**Om Prakhar**  
**Aditya Shrivastava**  

The duo worked closely on logic development, testing, and implementation to ensure accurate and optimized scheduling.

## 🖥️ OUTPUT:

![image](https://github.com/user-attachments/assets/712f1763-f1fb-4593-8a8a-f592a2f0da50)
