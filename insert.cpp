
#include <bits/stdc++.h>
using namespace std;

void insertAlgo(int num[], int len){
    int i, j, key;
    for(int i=1; i<len; i++){
        key= num[i];
        j=i-1;
        while(j>=0 && num[j]>key){
            num[j+1]= num[j];
            j--;
        }
        num[j+1]=key;
    }

}
void printArr(int num[], int len){
int i;
	for (i = 0; i < len; i++)
		cout << num[i] << " ";
        cout << endl;
}

int main(){
    int arr[] = { 12, 11, 13, 5, 6 };
	int len = sizeof(arr) / sizeof(arr[0]);

	insertAlgo(arr, len);
	printArr(arr, len);

	return 0;
}
