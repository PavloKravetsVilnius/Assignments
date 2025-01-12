#include <iostream>
#include <vector>
#include <string>

struct Entry {
    std::string date;
    std::string content;
};

class Diary {
private:
    std::vector<Entry> entries;

public:
    void addEntry(std::string date, std::string content) {
        entries.push_back(Entry{ date, content });
        std::cout << "Entry added!" << std::endl;
    }

    void viewEntries() {
        if (entries.empty()) {
            std::cout << "No entries!" << std::endl;
            return;
        }
        for (const auto& entry : entries) {
            std::cout << "Date: " << entry.date << "\nContent: " << entry.content << "\n---" << std::endl;
        }
    }

    void deleteEntry(std::string date) {
        for (auto it = entries.begin(); it != entries.end(); ++it) {
            if (it->date == date) {
                entries.erase(it);
                std::cout << "Entry deleted!" << std::endl;
                return;
            }
        }
        std::cout << "Entry not found!" << std::endl;
    }
};

int main() {
    Diary diary;
    int choice;
    std::string date, content;

    while (true) {
        std::cout << "1. Add Entry\n2. View Entries\n3. Delete Entry\n4. Exit\n";
        std::cout << "Enter choice: ";
        std::cin >> choice;
        std::cin.ignore();

        if (choice == 1) {
            std::cout << "Enter date: ";
            std::getline(std::cin, date);
            std::cout << "Enter content: ";
            std::getline(std::cin, content);
            diary.addEntry(date, content);
        }
        else if (choice == 2) {
            diary.viewEntries();
        }
        else if (choice == 3) {
            std::cout << "Enter date to delete: ";
            std::getline(std::cin, date);
            diary.deleteEntry(date);
        }
        else if (choice == 4) {
            break;
        }
    }
    return 0;
}