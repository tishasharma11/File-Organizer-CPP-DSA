# 📚 Data Structures & Algorithms Explanation

## File Organizer - DSA Concepts

---

## 1. VECTOR (Dynamic Array)

### What is a Vector?
A vector is a dynamic array that can resize automatically.

### Code Implementation:
```cpp
vector<File> files;  // Dynamic array of files

// Add files
files.push_back(file1);  // O(1) amortized
files.push_back(file2);

// Access files
File f = files[0];       // O(1)

// Iterate
for (const auto& f : files) {
    cout << f.name << endl;
}
```

### Time Complexity:
| Operation | Complexity |
|-----------|------------|
| Access | O(1) |
| Insert at end | O(1) amortized |
| Insert at position | O(n) |
| Delete | O(n) |
| Search | O(n) |

### Advantages:
✓ Random access O(1)
✓ Cache friendly
✓ Easy to use
✓ Dynamic resizing

### Disadvantages:
✗ Insertion/Deletion in middle is slow
✗ May waste memory

### Visual Representation:
```
Vector: [File1] [File2] [File3] [File4] [____]
Index:   [  0 ] [  1 ] [  2 ] [  3 ] [  4 ]
         ↑ Memory allocated for future files
```

---

## 2. MAP (Binary Search Tree)

### What is a Map?
A map stores key-value pairs in sorted order (using BST).

### Code Implementation:
```cpp
map<string, vector<File>> organizedByType;

// Add files by type
organizedByType["pdf"].push_back(file1);
organizedByType["jpg"].push_back(file2);

// Access
vector<File>& pdfFiles = organizedByType["pdf"];

// Iterate in sorted order
for (const auto& pair : organizedByType) {
    cout << pair.first << ": ";  // Extension
    for (const auto& f : pair.second) {
        cout << f.name << " ";   // Files
    }
}
```

### Time Complexity:
| Operation | Complexity |
|-----------|------------|
| Insert | O(log n) |
| Delete | O(log n) |
| Search | O(log n) |
| Access | O(log n) |
| Iterate | O(n) |

### Advantages:
✓ Automatic sorting
✓ Fast search O(log n)
✓ No duplicates possible
✓ Range queries

### Disadvantages:
✗ Slower than hash map
✗ Memory overhead for tree

### Internal Structure (BST):
```
        pdf
       /   \
      cpp  jpg
     /      \
   cpp     png
```

---

## 3. SORTING ALGORITHMS

### Sorting by Size:
```cpp
vector<File> sortedFiles = files;
sort(sortedFiles.begin(), sortedFiles.end(),
     [](const File& a, const File& b) {
         return a.size < b.size;
     });
```

### Algorithm: Intro Sort (used by STL)
- Hybrid of QuickSort, HeapSort, and InsertionSort
- Best case: O(n log n)
- Worst case: O(n log n)
- Space: O(log n)

### Sorting Process Example:
```
Original: [5KB, 2KB, 8KB, 1KB]
     ↓
Partition: [1KB | 5KB, 2KB, 8KB]
     ↓
Recursively sort left and right
     ↓
Sorted: [1KB, 2KB, 5KB, 8KB]
```

### Lexicographic Sort (By Name):
```cpp
sort(sortedFiles.begin(), sortedFiles.end(),
     [](const File& a, const File& b) {
         return a.name < b.name;
     });
```

### Comparison:
```
Before: [Code1, Image1, Document1, Music1]
After:  [Code1, Document1, Image1, Music1]
        (Alphabetical order A-Z)
```

---

## 4. SEARCH ALGORITHMS

### Linear Search:
```cpp
void searchFile(string searchName) {
    for (const auto& f : files) {
        if (f.name == searchName) {
            // Found!
            return f;
        }
    }
    // Not found
    return nullptr;
}
```

### Complexity Analysis:
- Best case: O(1) - found at first position
- Worst case: O(n) - not found or at last position
- Average case: O(n/2) = O(n)

### Binary Search (on sorted array):
```cpp
// Only works on sorted data
auto it = binary_search(sortedFiles.begin(), 
                        sortedFiles.end(), 
                        targetFile);
```

### Comparison:
| Search Type | Unsorted | Sorted |
|------------|----------|---------|
| Linear | O(n) | O(n) |
| Binary | - | O(log n) |

### Visual:
```
Linear Search:
Vector: [A][B][C][D][E][F][G]
        Check each: A→B→C→D→E (found at D)
Steps: 4

Binary Search (if sorted):
Vector: [A][B][C][D][E][F][G]
        Check middle: D? (Yes!)
Steps: 1
```

---

## 5. ORGANIZATION BY TYPE (Map Application)

### Process:
```cpp
for (const auto& f : files) {
    organizedByType[f.extension].push_back(f);
}
```

### Result Structure:
```
organizedByType = {
    "cpp" → {File: Code1.cpp},
    "jpg" → {File: Image1.jpg, File: Image2.jpg},
    "mp3" → {File: Music1.mp3},
    "pdf" → {File: Document1.pdf},
    "py"  → {File: Code2.py}
}
```

### Tree Visualization:
```
           pdf
          /   \
        cpp   jpg
        / \     \
      cpp  py  png
```

### Advantages:
- Groups related files together
- Quick access by type
- Sorted keys (extensions)

---

## 6. STATISTICS CALCULATION

### Finding Maximum/Minimum:

```cpp
int maxSize = 0;
string largestFile;

for (const auto& f : files) {
    if (f.size > maxSize) {
        maxSize = f.size;
        largestFile = f.name;
    }
}
```

### Complexity: O(n)
- Must check every element
- Can't do better than linear time

### Average Calculation:
```cpp
int totalSize = 0;
for (const auto& f : files) {
    totalSize += f.size;
}
int average = totalSize / files.size();
```

### Complexity: O(n)

---

## 7. COMPLETE COMPLEXITY TABLE

| Feature | Operation | Time | Space |
|---------|-----------|------|-------|
| Add File | push_back | O(1) | O(1) |
| Delete File | erase | O(n) | O(1) |
| Display All | iterate | O(n) | O(1) |
| Sort by Size | sort | O(n log n) | O(n) |
| Sort by Name | sort | O(n log n) | O(n) |
| Organize Type | map insert | O(n log m) | O(n) |
| Search File | linear | O(n) | O(1) |
| Statistics | iterate | O(n) | O(1) |

*n = number of files, m = number of types*

---

## 8. ADVANCED CONCEPTS (Future Enhancement)

### Linked List for Files:
```cpp
struct Node {
    File data;
    Node* next;
};

// Advantages: O(1) insertion/deletion at position
// Disadvantages: O(n) access time
```

### Binary Search Tree for Sorting:
```cpp
struct BST_Node {
    File data;
    BST_Node* left;
    BST_Node* right;
};

// Advantages: Maintains sorted order
// Disadvantages: Unbalanced trees can be slow
```

### Stack for Undo/Redo:
```cpp
stack<File> undoStack;
stack<File> redoStack;

// Undo operation
if (!undoStack.empty()) {
    File f = undoStack.top();
    undoStack.pop();
}
```

### Queue for Batch Processing:
```cpp
queue<File> processingQueue;
processingQueue.push(file1);
processingQueue.push(file2);
```

---

## 9. STL FUNCTIONS USED

| Function | Purpose | Complexity |
|----------|---------|------------|
| `push_back()` | Add to end | O(1) |
| `sort()` | Sort array | O(n log n) |
| `find()` | Find element | O(n) |
| `count()` | Count occurrences | O(n) |
| `erase()` | Remove element | O(n) |
| `map[]` | Access map | O(log n) |

---

## 10. LEARNING RESOURCES

### Key Concepts to Master:
1. Vector and Dynamic Arrays
2. Sorting Algorithms (QuickSort, MergeSort)
3. Binary Search Trees
4. Hash Maps and Balanced Trees
5. Time/Space Complexity Analysis

### Practice Questions:
1. How would you optimize search if you had 1 million files?
2. What data structure would you use for duplicate detection?
3. How would you implement file deletion efficiently?
4. Can you implement a BST from scratch?

---

**Good luck with DSA! 🚀**
