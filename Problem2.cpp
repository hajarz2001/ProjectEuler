#include<iostream>
using namespace std;
#include <vector>

/*
 * 1,2,3,5,8,13,21,34,55,89,...
 * f(0)=0
 * f(1)=1
 * f(n)=f(n-1) + f(n-2)
 * EX: f(2)=f(1)+f(0)
 *       3 =  2 +  1
 *
 */

int main () {
    vector<int> fib{0, 1};
    int fn;
    int n = 0;
    int sum = 0;

    cout << "Even fibonacci numbers less than 4 million: ";

    while (fib[n + 1] <= 4000000) {
        fn = fib[n + 1] + fib[n];
        fib.push_back(fn);

        if(fib[n+1]%2==0){
            sum=sum+fib[n+1];
            cout << fib[n+1] << " " ;
        sum=sum+fib[n+1];}


        n++;

    }
    cout << endl << "The sum of these terms is: " << sum;
}
