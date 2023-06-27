#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <msclr/marshal_cppstd.h>
#include <string>
#include <ctime>
using namespace System;
using namespace System::Windows::Forms;
using namespace System::IO;
using namespace std;

class Registration {
public:
    bool checkLoginPassword(String^ login, String^ password, bool& isLoginValid, bool& isPasswordValid);
    void saveDataToFile(const string& login, const string& password);
    int generateRandomPassword();
    string encrypt(string text, int key);
    bool checkDataFromFile(const std::string& login, const std::string& password);
    string GetCurrentDateAsString();
};
