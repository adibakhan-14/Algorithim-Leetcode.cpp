#include <iostream>

#include<string.h>
#include <stdio.h>
#include<bits/stdc++.h>


using namespace std;
  string reverseWords(string s) {

        int left=0;
        int right=0;

        while(left<s.size()){
            while(right<s.size() && s[right]!=' '){
                right++;
                reverse(s.begin()+left, s.begin()+right);
                left= right+1;
                right=left;
            }
        }
        return s;

    }

    int main(){
    string s="I love my life";
    cout<<reverseWords(s);

    }
