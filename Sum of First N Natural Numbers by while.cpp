#include <iostream>
using namespace std;
int main() {
    int integer_num =0 ,  natural_num=0  ,  sum_integer=0  ;
    cin>>integer_num;
    while(  natural_num <= integer_num ) {
        sum_integer+=natural_num;
        natural_num ++;
         
    }
   cout<<"The sum is " <<  sum_integer <<endl;
    return 0;
}
