#include <bits/stdc++.h>

using namespace std;

int main(){
       int number[3];
       cin>>number[0]>>number[1]>>number[2];

       int max = number[2];
       for(int i = 0;i<2;i++){
              if(number[i]>max){
                     max = number[i]; 
              }
       }
       cout<<max;
       return 0;
}