#include <iostream>

using std::string;

bool running = true;
bool loggedIn = false;
string mode;

int main() {
    while (running) {
        if (!loggedIn) {
            std::cout << "Welcome to Login Service" << std::endl;
            std::cout << "Login or Register?" << std::endl;
            running = false;
            std::cin >> mode;
            if (mode == "Login") {
                std::cout << "Login mode" << std::endl;
            } else if (mode == "Register") {
                std::cout << "Register mode" << std::endl;
            } else {
                std::cout << "Sorry could  you try say that again?" << std::endl;
            }
        }
    }
}
