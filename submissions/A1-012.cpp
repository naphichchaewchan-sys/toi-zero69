#include <bits/stdc++.h>

using namespace std;

int main(){
       int number;
       char c;
       cin>>number>>c;
       int tens = number / 10;     
       int ones = number % 10;     
       int rev = ones * 10 + tens;
       if(number>=10||number<=99){
              if(c =='+')cout<<number<<" "<<c<<" "<<rev<<" "<<"= "<<number+rev;
              else if(c =='*')cout<<number<<" "<<c<<" "<<rev<<" "<<"= "<<number*rev;

       }
       return 0;
}