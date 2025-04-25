#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    // ======================================================
    // int num = 5;
    // int a = num;
    // cout << "1 before: " << num << endl;
    // a++;
    // cout << "1 After: " << num << endl;

    // int *p = &num;
    // cout << "before: " << num << endl;
    // (*p)++;
    // cout << "After: " << num << endl;

    // int *q = &num;
    // cout << p << " - " << q << endl;
    // cout << *p << " - " << *q << endl;
    // ======================================================

    const char* Name = "codeMite"; // only read only

    //Name[0] = "8"; // Not Possible

    cout << "First Value : " << Name << endl;
    
    Name = "Subscribe";

    cout << "Second Value : " << Name << endl;
    
    const char* anuj = "thi si ths the asdf";
    Name = anuj;
    
    cout << "Third Value : " << Name[4] << endl;

    return 0;
}