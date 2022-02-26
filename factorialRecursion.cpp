#include<cstdlib>
#include <bits/stdc++.h>
using namespace std;

int main(){
int factorial(int n);
int value, fact;

cout<<"Enter the number: ";
cin>>value;
fact= factorial(value);
cout<<"the factorial of "<<value<<" is: "<<fact;

return 0;
}

int factorial(int n){
for(int i=1; i<=n; i++){
    if(n<0){
    return -1;
}
else if(n==1){
    return 1;
}else{
    return (n*factorial(n-1));
}

}
}
