#include <iostream>
using namespace std;

int main(){

double weight;
double killRatio = 5.0/35;
double sweetener = 35.0;
double sodaWeight = 350.0;
char exit='Y';

while( exit='Y'){
double sodaAmount=0.0;

cout << "What is your weight? (lbs) ";
cin >> weight;
//1 pound is 454 grams - Conver lbs to grams
weight= weight*454.0;

while ( ((sodaAmount*sweetener)/weight) <= killRatio )
{
    sodaAmount++;
}
cout << "This amount of soda will kill you " << sodaAmount << endl;;

cout << "Would you like to check another weight? (Y/N) ";
cin >> exit;

if(exit=='N'){
    return 0;
}

}



}