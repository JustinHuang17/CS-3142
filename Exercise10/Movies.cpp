#include <iostream>
#include <fstream>
#include <vector> 
#include <string>
#include <sstream>
#include <numeric>
using namespace std;

void Read_In(string File, vector <string> &row,vector <vector<string>> &Male_Oscar );
int Total_Age(vector <vector<string>> &Age);
bool Sort_Age(const vector <string> &x1, const vector <string> &x2);

int main(){
    vector <vector<string>> Male_Oscar;
    vector <string> row;
    string file = "oscar_age_male.csv";

    Read_In(file,row,Male_Oscar);

    ofstream output("output.txt");

    output<< "The total age is "<<Total_Age(Male_Oscar)<< endl<<"Here is what the vector looks like "<<endl;
    for(int x=0;x<Male_Oscar.size();x++){
        for(int y=0;y<Male_Oscar[x].size();y++)
            output<< Male_Oscar[x][y];
            output<<endl;
    }
    
 
    return 0;
}

void Read_In(string File, vector <string> &row,vector <vector<string>> &Male_Oscar ){
    fstream OscarList;
    OscarList.open("oscar_age_male.csv", ios::in);
    string line, section;
    row.clear();Male_Oscar.clear();
    int x=1;
   
    while(true){
    int count=1;
        getline(OscarList,line);
        stringstream Stream(line);

        while(getline(Stream,section,',')){
            row.push_back(section);    
        }

        Male_Oscar.push_back(row);
        row.clear();
        if( OscarList.eof()) break;
    }
}

int Total_Age(vector <vector<string>> &Age){
    int total = 0;
    for(int x=0; x<Age.size();x++){
        total = total + stod(Age[x].at(2));
    }
    return total;
}

bool Sort_Age(vector <string> &x1, vector <string> &x2){
    return stod(x1.at(2)) < stod(x2.at(2));
}

