#include <iostream>
#include <vector>
#include <string>
#include<bits/stdc++.h>
using namespace std;

int main(){

vector <string> Words (10);
string temp, temp2;

cout << "Enter " << Words.capacity() << " amount of words " << endl;

for(int i=0 ;i < Words.capacity();i++){
    cin >> temp;
    transform(temp.begin(), temp.end(), temp.begin(), ::toupper);
    Words[i]=temp;
}



for (int j = 0; j < Words.capacity(); j++)
{
    cout << Words[j]<< endl;
}

return 0;

}
