#include <iostream>
using namespace std;

int main(){

    int v1,v2;
    
    cout << "Enter two Numbers:" << endl;
    cin >> v1 >> v2;
    cout << "Printing numbers between " << v1 << " and "<< v2 <<endl;
    
    for(int x=v1; x<=v2;x++){
        cout << x << endl;
    }
}