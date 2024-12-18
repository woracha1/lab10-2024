#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
#include <string>
using namespace std;

int main(){
    int count = 0 ;
    float sum = 0 ;
    float sumsqrt = 0 ;

    string textline;
    ifstream source("score.txt") ;
    while(getline(source,textline)){
        float score = stof(textline) ;
        sum += score ;
        sumsqrt += pow(score,2) ;
        count++ ;
    }
    
    float mean = sum/count ;

    cout << "Number of data = " << count << "\n";

    cout << setprecision(3);

    cout << "Mean = " << sum/count << "\n";

    cout << "Standard deviation = " << sqrt((sumsqrt/count)-pow(mean,2)) ;

    return 0 ;
}