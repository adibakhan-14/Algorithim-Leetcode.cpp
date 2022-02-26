#include<iostream>
#include<string>
using namespace std;

class Car{
public:
    string brandName;
    int price;
    string chasisNo;
};

int main(){
Car myObj;
Car myObj2;

myObj.brandName="Audi";
myObj.chasisNo= "v8";
myObj.price= 20000000;

myObj2.brandName="Mercedes";
myObj2.chasisNo= "e6";
myObj2.price= 92300000;

cout<<myObj.brandName<<"\n";
cout<<myObj.price<<"\n";
cout<<myObj2.brandName<<"\n";
cout<<myObj2.price<<"\n";
return 0;
}
