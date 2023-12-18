#include <iostream>
using namespace std;


void recursion(int src , int dest) {

        // base case :
        if (src==dest) {
            cout<<"waddup?\n"<<endl;
            return;
        }

        //processing :
        src=src+1;

        //recursice call :

        recursion(src , dest);

}

int main()

{
    int src = 1;
    int dest = 10;
    
    recursion(src , dest);

}