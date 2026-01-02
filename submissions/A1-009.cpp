#include <bits/stdc++.h>

using namespace std;

int main(){
       int sc1, sc2;
       cin>>sc1>>sc2;
       if(sc1>0||sc1<51||sc2>0||sc2<51){
              int total = sc1+sc2;
              cout<<total<<endl;
              if(total>=50) cout<<"pass";
              else cout<<"fail";
       }
       return 0;
}