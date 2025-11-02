# 📁 File Organizer - C++ Project

**Author:** Tisha Sharma  
**Institution:** Lovely Professional University (LPU)  
**Project Duration:** June - July 2024  
**Technologies:** C++, Data Structures, STL, File Handling

---

## 📋 Project Overview

A console-based file organizer tool built in C++ that efficiently manages files using fundamental data structures and Standard Template Library (STL) containers. The application demonstrates proficiency in arrays, linked lists, stacks, and binary search trees.

### Objectives:
✅ Build a console-based file organizer tool  
✅ Implement arrays and vectors for file storage  
✅ Use STL containers (map, vector, queue) for optimization  
✅ Implement sorting algorithms (by size, name, type)  
✅ Perform file search and retrieval operations  
✅ Add file metadata handling and statistics  

---

## 🎯 Data Structures Used

### 1. **Vector (Dynamic Array)**
- Store all files
- Fast random access
- Dynamic resizing as files are added

### 2. **Map (BST Implementation)**
- Organize files by type/extension
- Organize files by path
- Fast lookup: O(log n)

### 3. **Sorting Algorithms**
- Quick Sort / Merge Sort for files by size
- Lexicographic sort for files by name
- Implemented using STL sort()

### 4. **Search**
- Linear search for file lookup
- Binary search ready structure in sorted arrays

### 5. **STL Containers**
- `vector<File>` - File storage
- `map<string, vector<File>>` - Organization by type
- `queue<>` - File processing (future enhancement)
- `stack<>` - Undo/Redo operations (future enhancement)

---

## 📁 Project Structure

```
File-Organizer-CPP/
│
├── src/
│   ├── main.cpp           # Main program with menu
│   ├── file.cpp           # File struct implementation
│   └── organizer.cpp      # FileOrganizer class methods
│
├── include/
│   ├── File.h             # File structure header
│   └── Organizer.h        # FileOrganizer class header
│
├── docs/
│   ├── README.md          # Project overview
│   ├── COMPILE_GUIDE.md   # Compilation instructions
│   └── DSA_EXPLANATION.md # Data structures explained
│
├── sample_files/
│   └── sample_data.txt    # Sample file metadata
│
├── output/
│   └── (generated reports)
│
├── Makefile               # Build configuration
└── main.cpp               # Standalone version
```

---

## 🛠️ Compilation & Execution

### Method 1: Using g++ Compiler

```bash
# Compile main program
g++ -std=c++11 -o file_organizer src/main.cpp

# Run the program
./file_organizer
```

### Method 2: Using Makefile

```bash
# Build project
make

# Run program
make run

# Clean up
make clean
```

### Method 3: Online Compiler

- Use OnlineGDB.com
- Copy main.cpp content
- Compile and Run

---

## 🚀 Features

### 1. **Display All Files**
- Shows complete list of files in organizer
- Displays file name, extension, and size

### 2. **Sort by Size**
- Arranges files from smallest to largest
- Uses STL sort() algorithm
- Time Complexity: O(n log n)

### 3. **Sort by Name**
- Alphabetical ordering (A-Z)
- Lexicographic comparison
- Time Complexity: O(n log n)

### 4. **Organize by Type**
- Groups files by extension (.pdf, .jpg, .mp3, etc.)
- Uses Map (STL container)
- Shows count of each file type

### 5. **Search File**
- Find file by name
- Returns file details and path
- Time Complexity: O(n) for linear search

### 6. **File Statistics**
- Total number of files
- Total storage size
- Largest and smallest files
- Average file size

### 7. **Delete File**
- Remove file from organizer
- Verify deletion success

### 8. **Interactive Menu**
- Easy-to-use console interface
- Multiple options in loop
- Exit option

---

## 📊 Data Structures Visualization

### Vector Structure
```
files = [File1, File2, File3, File4, File5, ...]
Index:  [ 0  ,  1  ,  2  ,  3  ,  4  , ...]
```

### Map Structure (Organized by Type)
```
organizedByType = {
    "pdf"  → [File1(2MB), File2(1MB)],
    "jpg"  → [File3(1.5MB)],
    "mp3"  → [File4(4MB), File5(3MB)],
    "cpp"  → [File6(100KB)]
}
```

### Sorting Process
```
Unsorted: [5KB, 2KB, 8KB, 1KB]
    ↓ (Sort using STL sort)
Sorted:   [1KB, 2KB, 5KB, 8KB]
```

---

## 💻 Usage Example

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
Enter choice: 1

======================================
ALL FILES IN ORGANIZER
======================================

Total Files: 8
--------------------------------------
1. Document1.pdf (2048 KB)
2. Image1.jpg (1024 KB)
3. Video1.mp4 (5120 KB)
4. Music1.mp3 (4096 KB)
5. Document2.docx (512 KB)
6. Image2.png (2560 KB)
7. Code1.cpp (128 KB)
8. Code2.py (96 KB)
```

---

## 📈 Complexity Analysis

| Operation | Time Complexity | Space Complexity |
|-----------|-----------------|------------------|
| Add File | O(1) | O(1) |
| Delete File | O(n) | O(1) |
| Display All | O(n) | O(1) |
| Sort by Size | O(n log n) | O(n) |
| Sort by Name | O(n log n) | O(n) |
| Organize by Type | O(n log m) | O(n) |
| Search File | O(n) | O(1) |
| Statistics | O(n) | O(1) |

*n = number of files, m = number of file types*

---

## 🔧 Technologies & STL Containers

### Standard Template Library (STL) Used:

**Containers:**
- `vector<File>` - Dynamic array
- `map<string, vector<File>>` - Balanced BST
- `queue<>` - For potential batch operations

**Algorithms:**
- `sort()` - Sorting files
- `find()` - Finding elements
- `find_if()` - Conditional search

**Iterators:**
- Random access iterators (vector)
- Bidirectional iterators (map)

---

## 📋 Sample File Metadata

```csv
Name,Extension,Size(KB),Path
Document1,pdf,2048,/documents/
Image1,jpg,1024,/images/
Video1,mp4,5120,/videos/
Music1,mp3,4096,/music/
Document2,docx,512,/documents/
Image2,png,2560,/images/
Code1,cpp,128,/source/
Code2,py,96,/source/
```

---

## 🎓 Learning Outcomes

### Data Structures Knowledge:
✓ Arrays and Vectors
✓ Maps and Hash Tables
✓ Sorting Algorithms
✓ Search Algorithms
✓ STL Containers

### C++ Skills:
✓ Object-Oriented Programming
✓ Classes and Objects
✓ Pointers and References
✓ File I/O (future enhancement)
✓ Dynamic Memory Management

### Practical Skills:
✓ Algorithm Implementation
✓ Time/Space Complexity Analysis
✓ Menu-driven Programming
✓ Data Organization
✓ Software Design

---

## 🚀 Future Enhancements

- [ ] Add binary search tree implementation
- [ ] Implement linked list version
- [ ] Add file I/O (read from actual filesystem)
- [ ] Add undo/redo using stack
- [ ] Add duplicate file detection
- [ ] Implement hash table for faster search
- [ ] Add export to CSV/JSON
- [ ] Create GUI version with Qt

---

## 👩‍💻 About the Author

**Tisha Sharma**  
🎓 Student at Lovely Professional University (LPU)  

### Skills Demonstrated:
- C++ Programming
- Data Structures Implementation
- STL Containers Usage
- Algorithm Design
- OOP Concepts

---

## 📚 Resources

### Learning Resources:
- [C++ STL Documentation](https://cplusplus.com/reference/stl/)
- [GeeksforGeeks DSA](https://www.geeksforgeeks.org/data-structures/)
- [CPlusPlus Vector Guide](https://cplusplus.com/reference/vector/)

### Compilation Tools:
- GCC/G++ Compiler
- Makefile
- OnlineGDB.com

---

*Project demonstrates core DSA concepts and C++ STL usage for practical applications*
