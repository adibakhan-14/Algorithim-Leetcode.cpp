#include<iostream>
#include<string>
using namespace std;

class Employee{
public:
    string name;
    string position;
    int age;

    Employee(string x, string y, int z){
    name=x;
    position=y;
    age=z;
    }
private:
    int salary;

public:
    void setSalary(int s){
    salary=s;
    }
    int getSalary(){
    return salary;
    }
};

int main(){
Employee myObj("Adiba", "Software Developer", 23);

myObj.setSalary(70000);
cout<<myObj.name<< "is a "<<myObj.position<<" and she gets "<<myObj.getSalary()<<"and her age is "<<myObj.age<< "\n";


return 0;

}
