#include <iostream>
#include <thread>   
#include <chrono>   

using namespace std;

void displayTrafficLight(int state) {
    switch (state) {
        case 0:
            cout << "\n*** RED LIGHT ***\n";
            cout << "STOP" << endl;
            break;
        case 1:
            cout << "\n*** GREEN LIGHT ***\n";
            cout << "GO" << endl;
            break;
        case 2:
            cout << "\n*** YELLOW LIGHT ***\n";
            cout << "CAUTION" << endl;
            break;
        default:
            cout << "\nINVALID STATE" << endl;
            break;
    }
}

int main() {
    int state = 0; // 0 Red, 1 Green, 2 Yellow
    const int cycleDuration[] = {5, 5, 2}; // Seconds for red, green, and yellow

    while (true) {
        displayTrafficLight(state);
        std::this_thread::sleep_for(std::chrono::seconds(cycleDuration[state]));

        
        state = (state + 1) % 3;
    }

    return 0;
}
