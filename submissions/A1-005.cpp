#include <bits/stdc++.h>
using namespace std;

int main() {
       int month, day;
       cin >> month >> day;

       string season;

       if (month >= 1 && month <= 3)
              season = "winter";
       else if (month >= 4 && month <= 6)
              season = "spring";
       else if (month >= 7 && month <= 9)
              season = "summer";
       else
              season = "fall";

       if (day >= 21) {
              if (month == 3) season = "spring";
              else if (month == 6) season = "summer";
              else if (month == 9) season = "fall";
              else if (month == 12) season = "winter";
       }

       cout << season;
       return 0;
}
