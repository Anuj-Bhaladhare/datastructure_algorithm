#include<iostream>
using namespace std;

int main() {

    
    char grade;
    cout << "enter your grade : " << endl;
    cin >> grade;

    switch (grade) {
        case 'A':cout << "your mark : 80 to 100" << endl;
        break;
        case 'B':cout << "your mark : 60 to 80" << endl;
        break;
        case 'C':cout << "your mark : 40 to 60" << endl;
        break;
        case 'D':cout << "your mark : 20 to 40" << endl;
        break;
        case 'E':cout << "your mark : 0 to 20" << endl;
        break;
        default: cout << "NOTTT" << endl;


    }

    return 0;
}