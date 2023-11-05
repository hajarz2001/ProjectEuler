#include<iostream>
using namespace std;


int main () {

    int n=2;
    unsigned long long val =600851475143;

    do  {
        if (val % n == 0) {      
            cout << n <<endl;
            val =val/n;}
        else{ n++;}
    } while(val != 1);


}
