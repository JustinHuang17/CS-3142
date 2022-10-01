#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector <int> Numbers = {1,2,3,4,5,6,7,8,9,10};
    for(int i=0;i<Numbers.capacity();i++){
        Numbers[i]=Numbers[i]*2;
    }
    for(int i=0;i<Numbers.capacity();i++){
        cout << Numbers[i] << endl;
    }

    return 0;
}