#include <iostream>
#include "Login/LoginMode.h"
#include "Register/RegisterMode.h"

using std::string;

bool running = true;
bool loginStatus = false;
string mode;

int main() {
    while (running) {
        std::cout << "Welcome to Login Service" << std::endl;
        std::cout << "Login or Register?" << std::endl;
        std::cin >> mode;
        if (mode == "Login") {
            std::cout << "Login mode" << std::endl;
            LoginMode *LM = new LoginMode;
            loginStatus = LM->loginUser();
            if (loginStatus) {
                LM->startSystem();
            }
            running = false;
            delete LM;
        } else if (mode == "Register") {
            std::cout << "Register mode" << std::endl;
            RegisterMode *RM = new RegisterMode;
            RM->registerUser();
        } else {
            std::cout << "Sorry could  you try say that again?" << std::endl;
        }
    }
}
