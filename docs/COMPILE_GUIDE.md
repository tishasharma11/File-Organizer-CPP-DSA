# 🛠️ Compilation & Execution Guide

## Getting Started with File Organizer C++

---

## Prerequisites

Make sure you have:
- **C++ Compiler** (GCC/G++, Clang, or MSVC)
- **Text Editor** (VS Code, Sublime, CodeBlocks)
- **Terminal/Command Prompt**
- **Basic C++ Knowledge**

### Check if G++ is Installed

```bash
g++ --version
```

If not installed:
- **Windows**: Download MinGW or Visual Studio
- **Mac**: Install Xcode Command Line Tools (`xcode-select --install`)
- **Linux**: `sudo apt-get install g++`

---

## Method 1: Simple Compilation (Recommended)

### Step 1: Navigate to Project Directory
```bash
cd File-Organizer-CPP
```

### Step 2: Compile
```bash
g++ -std=c++11 -o file_organizer src/main.cpp
```

### Step 3: Run
```bash
# On Windows
file_organizer.exe

# On Mac/Linux
./file_organizer
```

---

## Method 2: Compilation with All Files

If you have multiple source files:

```bash
# Compile all files together
g++ -std=c++11 -I include -o file_organizer src/main.cpp src/file.cpp src/organizer.cpp

# Run
./file_organizer
```

---

## Method 3: Using Makefile

### Step 1: Create Makefile (Already included)
```makefile
CXX = g++
CXXFLAGS = -std=c++11 -Wall
TARGET = file_organizer
SOURCES = src/main.cpp
OBJECTS = $(SOURCES:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJECTS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(OBJECTS) $(TARGET)

.PHONY: all run clean
```

### Step 2: Use Makefile
```bash
# Build project
make

# Run program
make run

# Clean build
make clean
```

---

## Method 4: Online Compiler

If you don't have a compiler installed:

1. Go to **OnlineGDB.com**
2. Select **C++** as language
3. Copy and paste `main.cpp` code
4. Click "Compile & Run"

---

## Compiler Flags Explained

```bash
g++ -std=c++11 -Wall -o file_organizer src/main.cpp
     └─────────  └──   └─────────────  └──────────────
        |        |          |                |
     C++11     Warnings   Output file    Source file
     version   enabled     name
```

### Useful Flags:

| Flag | Purpose |
|------|---------|
| `-std=c++11` | Use C++11 standard |
| `-std=c++17` | Use C++17 standard |
| `-Wall` | Show all warnings |
| `-g` | Include debug info |
| `-O2` | Optimize code |
| `-I` | Include directory |
| `-L` | Library directory |
| `-l` | Link library |

---

## Testing the Program

### Sample Menu Interactions:

**Input 1:**
```
Choice: 1
Output: Display all 8 sample files
```

**Input 2:**
```
Choice: 2
Output: Files sorted by size (smallest to largest)
```

**Input 3:**
```
Choice: 4
Output: Files organized by type (.pdf, .jpg, .mp3, etc.)
```

**Input 5:**
```
Choice: 5
Enter file name: Document1
Output: Found document with details
```

---

## Troubleshooting

### Error: "g++: command not found"
**Solution**: Install GCC compiler for your OS
- Windows: Download MinGW
- Mac: `xcode-select --install`
- Linux: `sudo apt-get install build-essential`

### Error: "No such file or directory"
**Solution**: Make sure you're in the correct directory
```bash
cd File-Organizer-CPP
```

### Error: "undefined reference to"
**Solution**: Make sure all source files are compiled together
```bash
g++ -std=c++11 -o file_organizer src/main.cpp src/file.cpp src/organizer.cpp
```

### Error: "Permission denied"
**Solution** (Mac/Linux):
```bash
chmod +x file_organizer
./file_organizer
```

---

## Code Quality Checks

### Compile with Strict Warnings:
```bash
g++ -std=c++11 -Wall -Wextra -Wpedantic -o file_organizer src/main.cpp
```

### Add Debugging:
```bash
g++ -std=c++11 -g -o file_organizer src/main.cpp
```

Then debug with gdb:
```bash
gdb ./file_organizer
```

---

## Different C++ Standards

### C++11 (Recommended for this project)
```bash
g++ -std=c++11 -o file_organizer src/main.cpp
```

### C++14
```bash
g++ -std=c++14 -o file_organizer src/main.cpp
```

### C++17
```bash
g++ -std=c++17 -o file_organizer src/main.cpp
```

---

## Platform-Specific Instructions

### Windows (MinGW)

1. Download MinGW from mingw-w64.org
2. Add MinGW to PATH
3. Compile:
```bash
g++ -std=c++11 -o file_organizer.exe src/main.cpp
file_organizer.exe
```

### Mac (Clang)

```bash
# Clang is default on Mac
clang++ -std=c++11 -o file_organizer src/main.cpp
./file_organizer
```

### Linux (GCC)

```bash
# Install GCC if needed
sudo apt-get install g++

# Compile
g++ -std=c++11 -o file_organizer src/main.cpp
./file_organizer
```

---

## IDEs That Work

### Visual Studio Code
1. Install C++ extension
2. Create `.vscode/tasks.json`:
```json
{
    "version": "2.0.0",
    "tasks": [
        {
            "label": "build",
            "command": "g++",
            "args": ["-std=c++11", "-o", "file_organizer", "src/main.cpp"],
            "group": {
                "kind": "build",
                "isDefault": true
            }
        }
    ]
}
```

### Code::Blocks
1. Create new C++ project
2. Add main.cpp
3. Build and Run (Ctrl+F9)

### Dev-C++
1. Create new project
2. Add main.cpp
3. Compile (F9)

---

## Performance Tips

### Optimize Compilation:
```bash
# With optimization level 2
g++ -std=c++11 -O2 -o file_organizer src/main.cpp
```

### Reduce File Size:
```bash
# Strip debug symbols
g++ -std=c++11 -O2 -s -o file_organizer src/main.cpp
```

---

## Quick Start Commands

```bash
# One-liner to compile and run
g++ -std=c++11 -o file_organizer src/main.cpp && ./file_organizer
```

---

**Happy Coding! 🚀**
