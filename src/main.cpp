// File Organizer - Main Program
// Author: Tisha Sharma, LPU
// Project: File Organizer using Data Structures & STL
// Date: June-July 2024

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <fstream>
#include <map>
#include <queue>
#include <stack>

using namespace std;

// Structure to store file information
struct File {
    string name;
    string extension;
    int size;  // in KB
    string path;

    File(string n, string e, int s, string p) {
        name = n;
        extension = e;
        size = s;
        path = p;
    }
};

// File Organizer Class
class FileOrganizer {
private:
    vector<File> files;
    map<string, vector<File>> organizedByType;

public:
    // Add file to the organizer
    void addFile(string name, string extension, int size, string path) {
        File f(name, extension, size, path);
        files.push_back(f);
        cout << "[+] File added: " << name << "." << extension << endl;
    }

    // Display all files
    void displayAllFiles() {
        cout << "\n" << string(70, '=') << endl;
        cout << "ALL FILES IN ORGANIZER" << endl;
        cout << string(70, '=') << endl;

        if (files.empty()) {
            cout << "No files found!\n";
            return;
        }

        cout << "\nTotal Files: " << files.size() << endl;
        cout << string(70, '-') << endl;

        for (int i = 0; i < files.size(); i++) {
            cout << i + 1 << ". " << files[i].name << "." << files[i].extension 
                 << " (" << files[i].size << " KB)\n";
        }
    }

    // Sort files by size (using Array/Vector)
    void sortBySize() {
        cout << "\n" << string(70, '=') << endl;
        cout << "FILES SORTED BY SIZE" << endl;
        cout << string(70, '=') << endl;

        vector<File> sortedFiles = files;
        sort(sortedFiles.begin(), sortedFiles.end(), 
             [](const File& a, const File& b) {
                 return a.size < b.size;
             });

        cout << "\nSmallest to Largest:\n";
        cout << string(70, '-') << endl;
        for (const auto& f : sortedFiles) {
            cout << f.name << "." << f.extension << " - " << f.size << " KB\n";
        }
    }

    // Sort files by name (using Array/Vector)
    void sortByName() {
        cout << "\n" << string(70, '=') << endl;
        cout << "FILES SORTED BY NAME (A-Z)" << endl;
        cout << string(70, '=') << endl;

        vector<File> sortedFiles = files;
        sort(sortedFiles.begin(), sortedFiles.end(),
             [](const File& a, const File& b) {
                 return a.name < b.name;
             });

        cout << "\nAlphabetical Order:\n";
        cout << string(70, '-') << endl;
        for (const auto& f : sortedFiles) {
            cout << f.name << "." << f.extension << "\n";
        }
    }

    // Organize files by type/extension (using Map - STL Container)
    void organizeByType() {
        cout << "\n" << string(70, '=') << endl;
        cout << "FILES ORGANIZED BY TYPE" << endl;
        cout << string(70, '=') << endl;

        organizedByType.clear();

        for (const auto& f : files) {
            organizedByType[f.extension].push_back(f);
        }

        cout << "\nTypes Found: " << organizedByType.size() << endl;
        cout << string(70, '-') << endl;

        for (const auto& pair : organizedByType) {
            cout << "[" << pair.first << "] - " << pair.second.size() << " files\n";
            for (const auto& f : pair.second) {
                cout << "  → " << f.name << "." << f.extension 
                     << " (" << f.size << " KB)\n";
            }
            cout << endl;
        }
    }

    // Search file by name (Linear Search)
    void searchFile(string searchName) {
        cout << "\n" << string(70, '=') << endl;
        cout << "SEARCH RESULTS FOR: " << searchName << endl;
        cout << string(70, '=') << endl;

        bool found = false;
        for (const auto& f : files) {
            if (f.name == searchName) {
                cout << "\n[FOUND] " << f.name << "." << f.extension << endl;
                cout << "Size: " << f.size << " KB\n";
                cout << "Path: " << f.path << endl;
                found = true;
                break;
            }
        }

        if (!found) {
            cout << "[NOT FOUND] File not in organizer.\n";
        }
    }

    // Get file statistics
    void showStatistics() {
        cout << "\n" << string(70, '=') << endl;
        cout << "FILE STATISTICS" << endl;
        cout << string(70, '=') << endl;

        if (files.empty()) {
            cout << "No files to analyze.\n";
            return;
        }

        int totalSize = 0;
        int largestSize = 0;
        int smallestSize = INT_MAX;
        string largestFile, smallestFile;

        for (const auto& f : files) {
            totalSize += f.size;
            if (f.size > largestSize) {
                largestSize = f.size;
                largestFile = f.name + "." + f.extension;
            }
            if (f.size < smallestSize) {
                smallestSize = f.size;
                smallestFile = f.name + "." + f.extension;
            }
        }

        cout << "\nTotal Files: " << files.size() << endl;
        cout << "Total Size: " << totalSize << " KB\n";
        cout << "Average Size: " << (totalSize / files.size()) << " KB\n";
        cout << "Largest File: " << largestFile << " (" << largestSize << " KB)\n";
        cout << "Smallest File: " << smallestFile << " (" << smallestSize << " KB)\n";
    }

    // Delete file by name
    void deleteFile(string fileName) {
        for (int i = 0; i < files.size(); i++) {
            if (files[i].name == fileName) {
                cout << "\n[-] Deleted: " << files[i].name << "." 
                     << files[i].extension << endl;
                files.erase(files.begin() + i);
                return;
            }
        }
        cout << "\n[ERROR] File not found!\n";
    }
};

// Main Menu
int main() {
    FileOrganizer organizer;
    int choice;

    cout << "\n" << string(70, '=') << endl;
    cout << "FILE ORGANIZER - Using Data Structures & STL" << endl;
    cout << "Author: Tisha Sharma | LPU" << endl;
    cout << string(70, '=') << endl;

    // Add sample files
    organizer.addFile("Document1", "pdf", 2048, "/documents/");
    organizer.addFile("Image1", "jpg", 1024, "/images/");
    organizer.addFile("Video1", "mp4", 5120, "/videos/");
    organizer.addFile("Music1", "mp3", 4096, "/music/");
    organizer.addFile("Document2", "docx", 512, "/documents/");
    organizer.addFile("Image2", "png", 2560, "/images/");
    organizer.addFile("Code1", "cpp", 128, "/source/");
    organizer.addFile("Code2", "py", 96, "/source/");

    while (true) {
        cout << "\n" << string(70, '-') << endl;
        cout << "MAIN MENU" << endl;
        cout << string(70, '-') << endl;
        cout << "1. Display All Files\n";
        cout << "2. Sort Files by Size\n";
        cout << "3. Sort Files by Name\n";
        cout << "4. Organize by File Type\n";
        cout << "5. Search File\n";
        cout << "6. File Statistics\n";
        cout << "7. Delete File\n";
        cout << "0. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        cin.ignore();

        switch(choice) {
            case 1:
                organizer.displayAllFiles();
                break;
            case 2:
                organizer.sortBySize();
                break;
            case 3:
                organizer.sortByName();
                break;
            case 4:
                organizer.organizeByType();
                break;
            case 5: {
                cout << "\nEnter file name to search: ";
                string searchName;
                getline(cin, searchName);
                organizer.searchFile(searchName);
                break;
            }
            case 6:
                organizer.showStatistics();
                break;
            case 7: {
                cout << "\nEnter file name to delete: ";
                string deleteFile;
                getline(cin, deleteFile);
                organizer.deleteFile(deleteFile);
                break;
            }
            case 0:
                cout << "\nThank you for using File Organizer!\n";
                return 0;
            default:
                cout << "[ERROR] Invalid choice!\n";
        }
    }

    return 0;
}
