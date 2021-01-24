#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <bits/stdc++.h>


using namespace std;

int main()
{
    while (true){
        // initial input
        int duration, records;
        double down, amount, deprecations[101];
        cin >> duration >> down >> amount >> records;
        if (duration < 0){
            break;
        }

        int month;
        double deprecation;
        while (records--){
            cin >> month >> deprecation;
            for (int i = month; i < 101; i++){
                deprecations[i] = deprecation;
            }  
        }

        // initialize
        int now = 0;
        double monthly = amount / duration;
        double curVal = (amount + down) * (1 - deprecations[0]); 
        double curLoan = amount;
        
        while (curVal < curLoan){
            now++;
            curLoan -= monthly;
            curVal *= (1-deprecations[now]);
        }
        
        cout << now << " month";
        if (now != 1){
            cout << "s";
        }
        cout << endl;
    }
}

/*
Needed help for this one:
https://github.com/ackoroa/UVa-Solutions/blob/master/UVa%2010114%20-%20Loansome%20Car%20Buyer/src/UVa%2010114%20-%20Loansome%20Car%20Buyer.cpp
*/
