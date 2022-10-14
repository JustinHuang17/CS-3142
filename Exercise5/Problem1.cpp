#include <iostream>
#include <array>
using namespace std;

int Tsum(string word){
    char temp;
    int a = word.length();
    int nums[a];
    int total=0;

    for(int x=0;x<a;x++){
        //ASCII number starts at 48 (ex: char '1' = int 49)
        nums[x]=word.at(x)-48;
        cout<< word.at(x) <<" - "<<nums[x]<< endl;
    }

    for(int x=0;x<a;x++){
        total = total + nums[x];
    }
    
    return total;
}

int main()
{
    string number;
    cout << "Enter a number ";
    cin >> number;

    int temp=Tsum(number);

    cout << "The sum is "<< temp;
    return 0;
}
