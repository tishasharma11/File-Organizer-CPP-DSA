# 🚀 Quick Start Guide

## File Organizer - C++ Data Structures Project

---

## What is This Project?

A **console-based file organizer** tool built in C++ that demonstrates:
- Data Structures (Vector, Map, Array)
- STL Containers
- Sorting Algorithms
- Search Operations
- File Organization

---

## 📥 Getting Started (3 Minutes)

### Step 1: Extract Files
```bash
# Extract the ZIP file
unzip File-Organizer-CPP.zip
cd File-Organizer-CPP
```

### Step 2: Compile
```bash
# Using simple command
g++ -std=c++11 -o file_organizer src/main.cpp

# OR using Makefile
make
```

### Step 3: Run
```bash
# On Linux/Mac
./file_organizer

# On Windows
file_organizer.exe
```

---

## 🎯 What You'll See

```
========================================
FILE ORGANIZER - Using Data Structures & STL
Author: Tisha Sharma | LPU
========================================

MAIN MENU
----------------------------------------
1. Display All Files
2. Sort Files by Size
3. Sort Files by Name
4. Organize by File Type
5. Search File
6. File Statistics
7. Delete File
0. Exit
Enter choice: _
```

---

## 📝 Try These Features

### Feature 1: Display All Files
```
Choice: 1
Total Files: 8
1. Document1.pdf (2048 KB)
2. Image1.jpg (1024 KB)
...
```

### Feature 2: Sort by Size
```
Choice: 2
Code2.py - 96 KB
Code1.cpp - 128 KB
...
Video1.mp4 - 5120 KB
```

### Feature 3: Organize by Type
```
Choice: 4
[cpp] - 2 files
  → Code1.cpp
  → Code2.py
[jpg] - 2 files
  → Image1.jpg
  → Image2.png
...
```

### Feature 4: Search File
```
Choice: 5
Enter file name: Document1
[FOUND] Document1.pdf
Size: 2048 KB
Path: /documents/
```

### Feature 5: Statistics
```
Choice: 6
Total Files: 8
Total Size: 15584 KB
Average Size: 1948 KB
Largest File: Video1.mp4 (5120 KB)
Smallest File: Code2.py (96 KB)
```

---

## 💻 Technologies Used

- **Language**: C++11
- **Compiler**: GCC/G++
- **Data Structures**: Vector, Map
- **STL Containers**: Used extensively
- **Algorithms**: Sort, Search

---

## 📂 Project Structure

```
File-Organizer-CPP/
├── src/main.cpp          ← Main program
├── include/              ← Header files
│   ├── File.h
│   └── Organizer.h
├── docs/                 ← Documentation
│   ├── README.md
│   ├── COMPILE_GUIDE.md
│   └── DSA_EXPLANATION.md
├── Makefile              ← Build file
└── sample_files/         ← Sample data
```

---

## 🔧 Compilation Options

### Option 1: Simple (Recommended)
```bash
g++ -std=c++11 -o file_organizer src/main.cpp
```

### Option 2: With Warnings
```bash
g++ -std=c++11 -Wall -Wextra -o file_organizer src/main.cpp
```

### Option 3: Using Makefile
```bash
make         # Compile
make run     # Compile & run
make clean   # Remove build files
```

### Option 4: OnlineGDB
- Go to onlinegdb.com
- Select C++
- Copy main.cpp content
- Compile & Run

---

## 🎓 What You'll Learn

### Data Structures:
✓ Vectors (Dynamic Arrays)
✓ Maps (Binary Search Trees)
✓ STL Containers
✓ Sorting Algorithms
✓ Search Algorithms

### C++ Skills:
✓ Classes & Objects
✓ STL Usage
✓ Lambda Functions
✓ Function Overloading
✓ Algorithm Implementation

---

## 🐛 Troubleshooting

**Problem**: "g++ command not found"
- **Solution**: Install GCC compiler

**Problem**: Compilation fails
- **Solution**: Make sure you're in File-Organizer-CPP directory

**Problem**: Program won't run
- **Solution**: Try `./file_organizer` (with dot and slash)

---

## 📖 Next Steps

1. **Read** `docs/README.md` - Full documentation
2. **Understand** `docs/DSA_EXPLANATION.md` - Learn DSA concepts
3. **Follow** `docs/COMPILE_GUIDE.md` - Detailed compilation guide
4. **Modify** the code - Add new features
5. **Implement** improvements - Linked list, BST, etc.

---

## 💡 Ideas for Enhancement

- [ ] Add actual file system integration
- [ ] Implement binary search tree
- [ ] Add undo/redo with stack
- [ ] Create duplicate file detector
- [ ] Export results to CSV
- [ ] Add file size filter
- [ ] Implement date filtering
- [ ] Create GUI version

---

## 🚀 Portfolio Use

**Add to your resume:**
- "Built console-based file organizer in C++ using DSA"
- "Implemented vector and map STL containers"
- "Designed sorting algorithms (O(n log n))"
- "Demonstrated proficiency in data structures"

**GitHub Upload:**
- Create repo: File-Organizer-CPP
- Upload all files
- Add this README
- Share the link!

---

## 📧 Questions?

Refer to:
- `docs/README.md` - Overview & features
- `docs/COMPILE_GUIDE.md` - How to compile
- `docs/DSA_EXPLANATION.md` - Data structures explained
- Source code comments - Implementation details

---

**Good luck! 🎉**

*Created by Tisha Sharma | LPU*
*Project demonstrates DSA concepts and C++ STL usage*
