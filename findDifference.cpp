#include<iostream>
#include<string>
#include<math.h>

using namespace std;

int main(){
//        int n;
//cout<< "give a number: ";
//cin>> n;
//cout<< "result= " ;
//cout<< n/2<< "\n";

//string firstName="Adiba";
//string lastName="Khan";
//string fullName= firstName.append(lastName);

//cout << fullName<< "\n";

//int x = 10;
//int y = 20;
//int z = x + y;
//cout<< z<< "\n";

//string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
//std::cout << "The length of the txt string is: " << txt.size()<<"\n";
cout << sqrt(64)<<"\n";
cout << round(2.6)<<"\n";
cout << log(2)<<"\n";
cout<< max(5, 9)<<"\n";

int time= 20;
string result= (time<18)? "Good evening": "Good Night!!";
cout<<result<<"\n";
int day = 4;
switch (day) {
  case 1:
    cout << "Monday";
    break;
  case 2:
    cout << "Tuesday";
    break;
  case 3:
    cout << "Wednesday";
    break;
  case 4:
    cout << "Thursday";
    break;
  case 5:
    cout << "Friday";
    break;
  case 6:
    cout << "Saturday";
    break;
  case 7:
    cout << "Sunday";
    break;

}


for (int i = 0; i < 10; i++) {
  if (i == 4) {
    continue;
  }
  cout << i << "\n";
}

string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
for(int i = 0; i <4; i++) {
  cout << i+1 << ": " << cars[i] << "\n";
}



string food = "Pizza";
string* ptr= &food;

*ptr= "humburg";

cout<<food;


std::string fullname;
getline(std::cin, fullname);
std::cout<< fullname;
return 0;


}
