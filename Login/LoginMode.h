//
// Created by Saad Khan on 2021-12-26.
//

#ifndef UNTITLED_LOGINMODE_H
#define UNTITLED_LOGINMODE_H

#include <string>
#include <iostream>
#include <fstream>

using std::string;

class LoginMode { ;
    bool LoginModeOn = false;
    string systemChoice;
    string username;
    string password;

public:
    LoginMode() {};

    bool loginUser();

    void startSystem();

private:
    void userInfo();

    void logout();

    bool readFile(string username, string password);
};

#endif //UNTITLED_LOGINMODE_H
