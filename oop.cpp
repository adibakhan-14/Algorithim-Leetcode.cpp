#include <stdio.h>
#include <iostream>
using std::string;

class AbstractEmployee{
    virtual void AskForPromotion()=0;
};

class Employee: AbstractEmployee{
private:
    string Name;
    string Company;
    int Age;

public:
    void setName(string name){
        Name=name;
    }
    string getName(){
        return Name;
    }
    void setCompany(string company){
        Company=company;
    }
    string getCompany(){
        return Company;
    }
    void setAge(){
        Age=age;
    }
    int getAge(){
        return Age;
    }
    void AskForPromotion(){
        if(Age>30)
            std::cout << Name << " got Promotion!!!!" << std::endl;
        else
            std::cout << Name << ", sorryy No promotion for you" << std::endl;
    }

};
int main(){
    Employee employee1= Employee("Adiba", "Era-Infotech", 25);

    Employee employee2= Employee("Sumaiya", "NASA", 29);
    employee1.AskForPromotion();
    employee2.AskForPromotion();
}
