# 🔧 Implementation Guide

## How the Code Works

---

## Main Components

### 1. File Structure
```cpp
struct File {
    string name;
    string extension;
    int size;
    string path;
};
```

### 2. FileOrganizer Class
- Manages collection of files
- Provides sorting and organization
- Handles search operations

### 3. Key Methods

#### addFile()
```cpp
void addFile(string name, string extension, int size, string path) {
    File f(name, extension, size, path);
    files.push_back(f);  // Add to vector - O(1)
}
```

#### sortBySize()
```cpp
void sortBySize() {
    vector<File> sorted = files;
    sort(sorted.begin(), sorted.end(),
         [](const File& a, const File& b) {
             return a.size < b.size;  // Compare by size
         });
}
```

#### organizeByType()
```cpp
void organizeByType() {
    for (const auto& f : files) {
        organizedByType[f.extension].push_back(f);
        // Map automatically sorts by key (extension)
    }
}
```

#### searchFile()
```cpp
void searchFile(string searchName) {
    for (const auto& f : files) {  // Linear search - O(n)
        if (f.name == searchName) {
            cout << "Found!";
            return;
        }
    }
}
```

---

## Data Flow

### Adding Files:
```
User Input: addFile("Doc", "pdf", 2048, "/docs/")
    ↓
Create File object
    ↓
Push to files vector
    ↓
Vector: [..., {Doc, pdf, 2048, /docs/}]
```

### Organizing by Type:
```
Files Vector: [pdf, jpg, mp4, mp3, pdf, png, cpp, py]
    ↓
Iterate through each file
    ↓
Add to map[extension]
    ↓
Result Map:
{
  cpp: [cpp],
  jpg: [jpg],
  mp3: [mp3],
  mp4: [mp4],
  pdf: [pdf, pdf],
  png: [png],
  py: [py]
}
```

### Sorting Process:
```
Unsorted: [5120KB, 1024KB, 4096KB, 2048KB, ...]
    ↓
STL sort() applies comparator
    ↓
Sorted: [96KB, 128KB, 512KB, 1024KB, 2048KB, ...]
```

---

## Complexity Analysis

### Vector Operations
- Add: O(1) amortized
- Delete: O(n) worst case
- Access: O(1)

### Map Operations
- Insert: O(log n)
- Delete: O(log n)
- Search: O(log n)

### Sorting
- Best: O(n log n)
- Worst: O(n log n)
- Space: O(n)

---

## STL Containers Used

### vector<File>
```cpp
vector<File> files;
files.push_back(file);     // Add
files[0];                   // Access
files.erase(it);            // Delete
```

### map<string, vector<File>>
```cpp
map<string, vector<File>> organizedByType;
organizedByType["pdf"];     // Access
organizedByType.size();     // Count of keys
for (auto& pair : map) {}   // Iterate in order
```

---

## Code Execution Example

```cpp
// User selects option 4 (Organize by Type)
// Input: 4

organizeByType();
// Execution:
// 1. Clear organizedByType map
// 2. Loop through files vector
// 3. For each file, add to map[extension]
// 4. Map automatically maintains sorted order
// 5. Display all extensions and their files
```

Output:
```
[cpp] - 2 files
  → Code1.cpp (128 KB)
  → Code2.py (96 KB)

[jpg] - 2 files
  → Image1.jpg (1024 KB)
  → Image2.png (2560 KB)

...
```

---

## Memory Management

### Vector Allocation:
```
Initial: []
Add 1st file: allocated space for ~1
Add 2nd file: allocated space for ~2
Add 3rd file: allocated space for ~4
...
(Doubling strategy for efficiency)
```

### Map Allocation:
```
Every key is a new BST node
Each node contains:
- Key (extension)
- Vector of Files
```

---

## Performance Improvements

### Current: O(n) Search
```cpp
File* result = nullptr;
for (auto& f : files) {
    if (f.name == target) {
        result = &f;
        break;
    }
}
```

### Optimized: O(log n) Search (with sorted array + binary search)
```cpp
sort(files.begin(), files.end(), 
     [](const File& a, const File& b) {
         return a.name < b.name;
     });

auto it = lower_bound(files.begin(), files.end(), 
                      targetFile, comparator);
```

### Ultimate: O(1) Search (with hash map)
```cpp
unordered_map<string, File> fileMap;
File f = fileMap[fileName];  // Direct lookup
```

---

## Extension Ideas

### 1. Implement Linked List
```cpp
struct Node {
    File data;
    Node* next;
};
// Advantages: O(1) insertion/deletion at position
```

### 2. Binary Search Tree for Sorting
```cpp
struct BST {
    File data;
    BST* left;
    BST* right;
};
// Maintains sorted order automatically
```

### 3. Hash Map for Fast Search
```cpp
unordered_map<string, File> fileIndex;
// Constant time lookup: O(1)
```

### 4. Stack for Undo
```cpp
stack<Operation> undoStack;
// Undo last operation
```

---

## Testing

### Test Case 1: Add Files
```cpp
addFile("Doc1", "pdf", 1000, "/docs/");
addFile("Img1", "jpg", 2000, "/imgs/");
// Expected: 2 files in vector
```

### Test Case 2: Sort
```cpp
sortBySize();
// Expected: Smallest to largest by size
```

### Test Case 3: Search
```cpp
searchFile("Doc1");
// Expected: File found with details
```

---

## Debugging Tips

### Check Vector Content:
```cpp
cout << "Files in vector: " << files.size() << endl;
for (const auto& f : files) {
    cout << f.name << " ";
}
```

### Check Map Content:
```cpp
cout << "Types: " << organizedByType.size() << endl;
for (const auto& pair : organizedByType) {
    cout << pair.first << ": " << pair.second.size() << endl;
}
```

### Check Sort:
```cpp
vector<File> sorted = files;
sort(sorted.begin(), sorted.end(), comparator);
for (const auto& f : sorted) {
    cout << f.size << " ";
}
```

---

**Good luck with implementation! 🚀**
