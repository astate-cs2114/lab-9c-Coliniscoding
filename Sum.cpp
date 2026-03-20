#include <iostream>
using namespace std;

int sum(int a, int b){
        return a+b ;
    }

int main() {
    int a ;
    int b ;
    cout << "Enter two integers" << endl;
    cin >> a ;
    cin >> b ;
    cout << "The sum is: " << sum(a, b) << endl;
    
}