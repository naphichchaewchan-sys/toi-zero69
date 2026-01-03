#include <bits/stdc++.h>

using namespace std;

int main(){
       int n[3];
       cin>>n[0]>>n[1]>>n[2];
       int min = n[0];
       for(int i=1;i<=2;i++){
              if(n[i]<min){
                     min = n[i];
              }
       }
       cout<<min;
       return 0;
}