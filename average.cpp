#include <iostream>
#include <cstdlib>
using namespace std;
int main (int argc, char* argv[]){
    if(argc==1){
        cout<< "Please input numbers to find average.";
    }
    int i = 1;
    int count = 0;
    double x = 0;
    if(i>=argc){
        double num = atoi(argv[i]);
        x = x + num;
        count++;
    }
    cout << "---------------------------------";
    cout <<"Average of "<< count <<" numbers = "<< x/count;
    cout << "---------------------------------";
    return 0;
}
