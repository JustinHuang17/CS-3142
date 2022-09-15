#include <iostream>
using namespace std;

int main(){

    int v1,v2;
    
    cout << "Enter two Numbers:" << endl;
    cin >> v1 >> v2;
    cout << "Printing numbers between " << v1 << " and "<< v2 <<endl;
    while(v1<=v2){
        cout << v1++ << endl;
    }

}