#include <vector>
#include <iostream>
using namespace std;

int main(){
    vector <int> primes;

    for(int x=3;x<101;x++){
        int temp=0;
        for(int y=1;y<=x;y++)
        {
        //   cout<< "comparing"<< x <<"and"<< y << endl;
            if(x%y==0){
                temp++;
        //       cout<< "No remainders and temp is "<<temp<< endl;
            }        
        } 
        if(temp==2){
            primes.push_back(x);
        //    cout<< "adding "<< x << " to the prime list"<< endl;
        }
    }

    for(int x: primes)
        cout << x << endl;

    return 0;
}