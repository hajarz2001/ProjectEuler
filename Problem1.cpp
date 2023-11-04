#include<iostream>
using namespace std;
/* Sum of Multiples of 5: 5,10,15,20,...,995.
 * Sum of Multiples of 3: 3,6,9,12,15,...,999.
 * Common Multiples of both sets: 15,30,45,60,...990
 *
 * Thus the sum of all multiples of 3 and 5 less than 1000 are
 * Sum = Sum of multiples of 5 + Sum of Multiples of 3 - Sum of multiples of 15
 *
 * Equation for Arithmetic Series: number of terms/2 * ( first term + last term)
 * Sum of multiples of 5= 199/2 *(5+995)=99500
 * Sum of multiples of 3 =333/2 *(3+999)=166833
 * Sum of multiples of 15 =66/2 *(15+990)=33165
 *
 * Sum= 99500+166833 -33165=233,168
 */

int main () {
int i=1;
int j=1;
int k=1;
int sum3=0;
int sum5=0;
int sum15=0;

    while (5*j <1000){
        sum5 =sum5 +(5*j);
        j++;}

    while (3*i <1000){
        sum3 =sum3 +(3*i);
        i++;}

    while (15*k <1000){
        sum15 =sum15 +(15*k);
        k++;}

    cout << sum3 + sum5 -sum15 << endl;
}
