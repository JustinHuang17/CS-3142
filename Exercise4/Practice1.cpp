#include <iostream>
using namespace std;

int amount, years;
double currentp, futurep;
float inflation, temp;

void Info(){
    // Getting basic info
    cout << "Enter amount of pencils set to purchase ";
    cin >> amount;
    cout <<"What is the current price for a pencil? ";
    cin >> currentp;
    cout <<"How many years in the future do you want to check? ";
    cin >> years;
    cout <<"What is the expected inflation rate? (in %) ";
    cin >> temp;
    inflation = 1+(temp/100);
}

double FutureEstimate(){
    futurep=currentp;
    for(int i=0; i < years; i++){
    futurep=( futurep* inflation);
    }
    return futurep*amount;
}


int main(){
    double Total;
    Info();
    Total = FutureEstimate();
    cout << "This is the expected cost in " << years << " years: "<<Total <<endl;  


    return 0;
}

