#ifndef FILE_H
#define FILE_H

#include <string>
#include <vector>

using namespace std;

// File structure with metadata
struct File {
    string name;
    string extension;
    int size;  // in KB
    string path;
    string dateCreated;

    File();
    File(string n, string e, int s, string p);

    string getFullName();
    bool operator<(const File& other) const;
};

#endif
