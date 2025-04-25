#include <iostream>
using namespace std;

class Rectangle{
    public:
        int length;
        int bredth;

        Rectangle() {  // Default Constructor - No argument passed
            length = 0;
            bredth = 0;
        }

        Rectangle(int x, int y) {  // Default Constructor - Passed Args
            length = x;
            bredth = y;
        }
};

int main(){
    
    Rectangle rrr1;
    cout << rrr1.length << ", " << rrr1.bredth << endl;
    
    Rectangle rrr2(55, 65);
    cout << rrr2.length << ", " << rrr2.bredth << endl;

    return 0;
}

