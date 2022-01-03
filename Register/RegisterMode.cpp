//
// Created by Saad Khan on 2021-12-29.
//
#include "bcrypt.h"
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
    remove("important.txt");
    std::ofstream myfile;
    myfile.open("important.txt");
    myfile <<username + ";"+password << std::endl;

    myfile.close();
}