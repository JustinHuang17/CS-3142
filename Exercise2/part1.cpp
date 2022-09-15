#include <iostream>
using namespace std;
int main(){

    int v1,v2;
    char op;
    
    cout << "Enter two Numbers:" << endl;
    cin >> v1 >> v2;
    cout << "Enter the Operation" << endl;
    cin >> op;

    switch(op){
        case '+':
            cout << "The sum of " << v1 <<" and " << v2 << " is " << v1 + v2 << endl;
            break;
        case '-':
            cout << "The remainder of " << v1 <<" and " << v2 << " is " << v1 - v2 << endl;
            break;        
        case '*':
            cout << "The product of " << v1 <<" and " << v2 << " is " << v1 * v2 << endl;
            break;
        case '/':
            cout << "The quotient of " << v1 <<" and " << v2 << " is " << v1 / v2 << endl;
            break;
    }

}