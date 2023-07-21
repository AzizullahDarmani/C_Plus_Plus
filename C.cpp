#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a four-bit binary number: ";
    cin >> n;
    int reversed = ((n & 0x01) << 3) | ((n & 0x02) << 1) | ((n & 0x04) >> 1) | ((n & 0x08) >> 3);
    cout << "Original number: " << n << endl;
    cout << "Reversed number: " << reversed << endl;
    return 0;


    
}