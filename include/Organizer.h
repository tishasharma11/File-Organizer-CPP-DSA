#ifndef ORGANIZER_H
#define ORGANIZER_H

#include <vector>
#include <map>
#include <string>
#include "File.h"

using namespace std;

class FileOrganizer {
private:
    vector<File> files;
    map<string, vector<File>> organizedByType;
    map<string, vector<File>> organizedByPath;

public:
    FileOrganizer();

    // File management
    void addFile(string name, string extension, int size, string path);
    void deleteFile(string fileName);
    void displayAllFiles();

    // Sorting operations
    void sortBySize();
    void sortByName();
    void sortByPath();

    // Organization
    void organizeByType();
    void organizeByPath();

    // Search
    void searchFile(string fileName);
    File* findFile(string fileName);

    // Statistics
    void showStatistics();
    int getTotalSize();
    int getFileCount();
};

#endif
