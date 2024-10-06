#include<iostream>
using namespace std;

int main() {
    int a, b;
    float ans;

    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;

    try {
        if (b == 0) {
            throw 0;  
        }

        
        cout << "Answer: " << ans << a/b<< endl;
    }
    catch(int x) {
        cout << "ERROR: DIVISION BY ZERO" << endl;
    }

    return 0;
}
