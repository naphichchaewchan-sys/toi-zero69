#include <bits/stdc++.h>

using namespace std;

int main(){
       char c;
       int num;
       cin>>c>>num;
       if(c == 'H'){
              if(num == 4567){
                     cout<<"safe unlocked";
              }else{
                     cout<<"safe locked - change digit";
              }
       }else{
              if(num == 4567){
                     cout<<"safe locked - change char";
              }else{
                     cout<<"safe locked";
              }
       }
       return 0;
}