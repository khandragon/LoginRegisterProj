//
// Created by Saad on 2021-12-23.
//

#include <iostream>
#include "LoginMode.h"

bool LoginMode::loginUser() {
    std::cout << "Username?" << std::endl;
    std::cin >> username;
    std::cout << "Password?" << std::endl;
    std::cin >> password;
    std::cout << "Thank you for your patience." << std::endl;
    LoginModeOn = true;
    return true;
}

void LoginMode::userInfo() {
    std::cout << username << std::endl;
    std::cout << password << std::endl;
    return;
}

void LoginMode::logout() {
    std::cout << "Goodbye" << std::endl;
    LoginModeOn = false;
    return;
}

void LoginMode::startSystem() {
    while(LoginModeOn) {
        std::cout << "Welcome " + username << std::endl;
        std::cout << "Print User Information or Logout? (1 or 2)" << std::endl;
        std::cin >> systemChoice;
        if (systemChoice == "1") {
            userInfo();
        } else if (systemChoice == "2") {
            logout();
        }
    }
}
