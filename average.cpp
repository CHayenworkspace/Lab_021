#include <iostream>
#include <cstdlib>
using namespace std;
int main (int argc, char* argv[]){
    if(argc==1){
        cout<< "Please input numbers to find average.\n";
    }else{
    int i = 0;
    int y = argc;
    double x = 0;
    while(i < y){
        double num = atoi(argv[i]);
        x = x + num;
        i++;
    }
    cout << "---------------------------------\n";
    cout <<"Average of "<< i-1 <<" numbers = "<< x/(i-1) << "\n";
    cout << "---------------------------------";
    return 0;}
}