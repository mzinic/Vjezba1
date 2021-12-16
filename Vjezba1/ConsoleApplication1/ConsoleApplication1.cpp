// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    string broj;
    cout << "Unesi troznamenkasti broj:\n";
    cin >> broj;
    string stotice = broj.substr(0, 1);
    string desetice = broj.substr(1, 1);
    string jedinice = broj.substr(2, 1);

    int rezultat = atoi(stotice.c_str()) + atoi(desetice.c_str()) + atoi(jedinice.c_str());
    cout << "rezultat je: " << rezultat;
}