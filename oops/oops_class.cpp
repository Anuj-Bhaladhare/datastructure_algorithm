#include <iostream>
using namespace std;

class Fruit {
    public:
        string name;
        string color;
};

int main()
{
    Fruit apple;
    apple.name = "Apple";
    apple.color = "Red";

    cout << "Name: " << apple.name << "\nColor: " << apple.color << endl;
    
    Fruit *namgo = new Fruit();
    namgo->name = "Mango";
    namgo->color = "Yellow";
    cout << "Name: " << namgo->name << "\nColor: " << namgo->color << endl;

    return 0;
}

