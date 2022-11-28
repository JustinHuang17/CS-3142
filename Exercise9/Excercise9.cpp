#include <iostream>
#include <fstream>
#include <vector> 
#include <string>
#include <sstream>
using namespace std;

void Read_In(vector <string> &row){
    fstream File;
    File.open("weather.cvs", ios::in);

    string line, word, temp;
    row.clear();
    while (true) {

        getline(File, line);
        stringstream Stream(line);

        while (getline(Stream, word, ',')) {
            row.push_back(word);
        }       
        if( File.eof()) break;
    }
}

double Avg_Temp(vector <string> const &row){
    double y= 0.0;
    int x = 3;
    int count=0;
    int size = row.size();
    while(x<=size){
        y += stod(row.at(x));
        x=x+2;
        count++;
    }
    return (y/count);
}

void print(vector<string> const &row ){
    for(string x: row){
        cout << x << endl;
    }
}

int Month_Select(string &month){
    if(month == "Jan")
        return 3;
    if(month == "Feb")
        return 5;
    if(month == "Mar")
        return 7;
    if(month == "Apr")
        return 9;
    if(month == "May")
        return 11;
    if(month == "Jun")
        return 13; 
    if(month == "Jul")
        return 15;               
    if(month == "Aug")
        return 17;
    if(month == "Sep")
        return 19;
return 0;
}

double Moving_Avg(string &month, vector<string> const &row ){
    int start = Month_Select(month);
    double total=0.0;

    for(int x=0; x<3; x++){
        total = total + stod(row.at(start));
        start+=2;
    }
    return (total/3);
}

double Weighted_Moving_Avg(string &month, vector<string> const &row ){
    int start = Month_Select(month);
    double total=0.0;

    for(int x=0; x<3; x++){
        total = total + stod(row.at(start));
        start+=2;
    }
    return (total/6);
}

int main(){
    ofstream output("output.txt");
    string month = "Jan";
    vector <string> row;
    Read_In(row);
    output <<"This is the Average Temp- " <<Avg_Temp(row) << endl;
    output <<"Thus is the Moving Average of "<< month<<" "<<Moving_Avg(month,row) << endl;
    output <<"Thus is the Weighted Moving Average of "<< month<<" "<< Weighted_Moving_Avg(month,row) << endl;
return 0;
}