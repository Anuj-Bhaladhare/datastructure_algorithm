#include <iostream>
using namespace std;

int& function(int number) 
{
    // int num = number;
    int& ans = number;
    return ans;
}

// Pass By Referance
void update1(int& number){
    number++;
}

// Pass By Value
void update2(int number){
    number++;
}

// Pointer
int *pointer_Func(int number) {
    int* ptr = &number;
    return ptr;
}

int main()
{
    
    // Referenc Variable
    int i = 5; 
    cout << "before: " << i << endl;
    // update1(i); // Pass By Referance
    // update2(i); // Pass By Value
    cout << "After: " << i << endl;

    int number = 52;
    function(number);

    return 0;
}