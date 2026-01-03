#include <bits/stdc++.h>

using namespace std;

int main(){
       string s;
       cin >> s;  
       char a = s[0];
       int count = 1;
       if(s.length() == 5){
              for(int i =1;i<6;i++){
                     if(s[i]==a){
                            count++;
                     }else{
                            cout<<count<<a;
                            a = s[i];
                            count =1;
                     }

              }
       }
       return 0;
}