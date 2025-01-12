#include <iostream>
#include <thread>
#include <chrono>

void displayTime(int hours, int minutes) {
    std::cout << (hours < 10 ? "0" : "") << hours << ":"
        << (minutes < 10 ? "0" : "") << minutes << std::endl;
}

void updateClock(int& hours, int& minutes) {
    while (true) {
        displayTime(hours, minutes);
        std::this_thread::sleep_for(std::chrono::seconds(1));
        minutes++;
        if (minutes == 60) {
            minutes = 0;
            hours++;
            if (hours == 24) {
                hours = 0;
            }
        }
    }
}

int main() {
    int hours = 0, minutes = 0;
    updateClock(hours, minutes);
    return 0;
}