#include <iostream>
#include <iomanip>
#include<fstream>
#include<cstdlib>
#include <cmath>
#include <string>

using namespace std;

int main(){
    int count = 0 ;
    double sum = 0 ;
    double sum_squr = 0 ;
    string textline ;
    ifstream source("score.txt") ;
    while (getline(source,textline))
    {
        sum += atof(textline.c_str()) ;
        sum_squr += pow((atof(textline.c_str())),2) ;
        count++ ;
    }
    cout << "Number of data = " << count << endl;
    cout << setprecision(3);
    cout << "Mean = " << sum/count << endl;
    cout << "Standard deviation = " << sqrt((sum_squr/count) - pow(sum/count, 2)) ;
}