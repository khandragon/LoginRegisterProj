//
// Created by Saad Khan on 2021-12-29.
//

#include "RegisterMode.h"

void RegisterMode::registerUser() {
    std::cout << "Welcome new User" << std::endl;
    std::cout << "Username?" << std::endl;
    std::cin >> username;
    std::cout << "Password?" << std::endl;
    std::cin >> password;
    writeFile(username, password);
    std::cout << "Thank you and Goodbye" << std::endl;
}

void RegisterMode::writeFile(string username, string password) {
    std::ofstream myfile;
    myfile.open("important.txt");
    myfile << "user: " + username + ";" << std::endl;
    myfile << "pass: " + password + ";" << std::endl;
    myfile.close();
}