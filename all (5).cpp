#include <iostream>
using namespace std;

int main() {
    int a, p, sum = 0, temp;
    cout << "enter the number:" << endl;
    cin >> a;
    
    temp = a;
    
    do {
        p = a % 10;         
        sum = sum * 10 + p; 
        a = a / 10;         
    } while (a > 0);
    
    if (sum == temp) {
        cout << "its a palindrome";
    }
    else {
        cout << "its not a palindrome";
    }
    
    return 0;
}
