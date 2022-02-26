#include<cstdlib>
#include <bits/stdc++.h>
using namespace std;

int main(){
int fibonacciRecursion(int val);
int value, i=0;

cout<< "Enter the number: ";
cin>>value;

while(i<value){
    cout<<fibonacciRecursion(i)<<", ";
    i++;

}

return 0;
}

int fibonacciRecursion(int x){
    if((x==1)||(x==0)) {
      return(x);
   }else {
      return(fibonacciRecursion(x-1)+fibonacciRecursion(x-2));
   }
}
