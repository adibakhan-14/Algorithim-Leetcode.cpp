#include <bits/stdc++.h>
using namespace std;

int isPrime(int n, int i){

if(n<=1){
    return 0;
}

    if (n % i == 0)
		return false;
	if (i * i > n)
		return true;


return isPrime(n, i+1);
}

int main(){
    int i=2;
int n;
	cout<< "Enter the number: ";
	cin>> n;
	if (isPrime(n, i)==1)
		cout << "yes";
	else
		cout << "no";

	return 0;
}
