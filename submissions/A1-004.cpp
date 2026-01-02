#include <bits/stdc++.h>

using namespace std;

int main(){
       int sc1,sc2,sc3;
       cin>>sc1>>sc2>>sc3;
       if(sc1>0&&sc1<11&&sc2>0&&sc2<41&&sc3>0&&sc3<51){
              if(sc1>=5&&sc2>=20&&sc3>=25){
                     cout<<"pass";
              }
              else{
                     cout<<"fail";
              }
       }
       return 0;
}