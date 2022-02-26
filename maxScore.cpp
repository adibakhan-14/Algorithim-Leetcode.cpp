#include<iostream>
#include<string>
#include<cmath>

using namespace std;
int main(){
    int input[50], maxScore,count, i;

    cout<< "enter the number of students: ";
    cin>> count;

    cout<< "enter the scores: ";

    for(i=0; i<count; i++){
        cin>> input[i];
    }
    maxScore=0;
        for(i=0; i<count; i++){
                if(maxScore<input[i]){
                    maxScore=input[i];
                }

        }

        cout<<"Max score is: "<<maxScore;

        return 0;

}
