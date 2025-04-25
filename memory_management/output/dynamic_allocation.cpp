#include <iostream>
using namespace std;

int sumOfArray(int *arr, int n)
{
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
    };
    return sum;
};

int main()
{
    // =====================================================
    // char ch = 'A';
    // cout << sizeof(ch) << endl;
    
    // char* c = &ch;
    // cout << sizeof(c) << endl;
    
    // =====================================================
    int n;
    cin >> n;

    // variable size of array
    int* arr = new int[n];

    // get array input
    for(int i = 0; i < n; i++){
       cin >> arr[i];
    }
    
    int ans = sumOfArray(arr, n);

    cout << "the sum is: " << ans << endl;

    return 0;
}


