#include <bits/stdc++.h>

using namespace std;

int main(){
       int cost;
       cin>>cost;
       cout<<"10 = "<<cost/10<<endl;
       cost = cost%10;

       cout<<"5 = "<<cost/5<<endl;
       cost = cost%5;

       cout<<"2 = "<<cost/2<<endl;
       cout<<"1 = "<<cost%2;
       return 0;
}