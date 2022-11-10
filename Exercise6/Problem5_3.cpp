//find slope using 1st point of list with mean x & y vals
//get intercept
//get linear regression model?
#include <iostream>
#include <array>
#include <vector>
using namespace std;

//X and Y points used
vector <float> X = {30.0, 40.0, 70.0, 60.0, 80.0, 50.0};
vector <float> Y = {8.0, 11.0, 12.0, 10.0, 15.0, 13.0};

float Xmean=0.0, Ymean=0.0;


float Slope(float Xmean, float Ymean){

    float slope=0.0, Xsum=0.0, Ysum=0.0;
    
    float denom = 0.0;
    float numer = 0.0;
    //Denominator
    for (int a=0; a < X.size(); a++){
        denom += (X.at(a)-Xmean)*(X.at(a)-Xmean);
    }
    //Numerator
        for (int a=0; a < X.size(); a++){
        numer += (X.at(a)-Xmean)*(Y.at(a)-Ymean);
    }

    slope = numer/denom;

    return slope;
}

float Mean(vector <float> point){

    float temp=0.0;
    float size=(float)point.size();
    for(int i=0; i<point.size(); i++){
        temp += point[i];
    }

    return temp/size;
}
// Calls Mean , Slope Function
float Linear(){

    Xmean = Mean(X);
    Ymean = Mean(Y);
    //Means are correct
    float slope = Slope(Xmean,Ymean);

    float Intercept = Ymean - (slope*Xmean);

    cout << "The linear regresssion model is Y = " << (float)Intercept << " + " << (float)slope <<"X" << endl;


    return 0;
}


int Problem5_3(){

Linear();

return 0;
}