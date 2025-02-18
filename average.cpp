#include <iostream>
#include <cstdlib>
using namespace std;
int main (int argc, char* argv[]){
    if(argc==1){
        cout<< "Please input numbers to find average.\n";
    }else{
    int i = 0;
    int count = 0;
    int y = argc;
    double x = 0;
    if(i <= y){
        double num = atoi(argv[i+1]);
        x = x + num;
        count++;
    }
    cout << "---------------------------------\n";
    cout <<"Average of "<< count <<" numbers = "<< x/count << "\n";
    cout << "---------------------------------";
    return 0;}
}