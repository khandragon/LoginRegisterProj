//
// Created by Saad Khan on 2021-12-29.
//

#ifndef UNTITLED_REGISTERMODE_H
#define UNTITLED_REGISTERMODE_H

#include <string>
#include <iostream>
#include <fstream>

using std::string;


class RegisterMode {
    string username;
    string password;

public:
    RegisterMode(){};

    void registerUser();
private:
    void writeFile(string username, string password);
};


#endif //UNTITLED_REGISTERMODE_H
