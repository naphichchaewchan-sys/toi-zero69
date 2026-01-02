#include <bits/stdc++.h>

using namespace std;

int main(){
       int age;
       char c;
       cin>>age>>c;
       if(age<18) cout<<"20";
       else{
              if(c == 's'||c == 'S') cout<<"20";
              else cout<<"50";
       }
       return 0;
}