#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string name;
    int age;
    ofstream file("user.txt");

    cout << "enter name: ";
    cin >> name;
    cout << "enter age: ";
    cin >> age;

    file << "name: " << name << "\n age: " << age << endl;
    file.close();
    return 0;
}