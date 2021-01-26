#include <iostream>
#include <cmath>
#include <bits/stdc++.h>

#include <string>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
    //freopen("/home/marc8165/Documents/git-repos/uva/testI.txt", "r", stdin);
	//freopen("/home/marc8165/Documents/git-repos/uva/testO.txt", "w", stdout);

    int N,P,R,num=1;
    double price,bestCompliance,bestPrice;
    string name, bestName;
;

    string placeholder;
    while (scanf("%d %d\n", &N, &P), N || P){
        cin.ignore(1);

        for (int i = 0; i < N; i++){
            getline(cin,placeholder);
        }
        bestCompliance = 0.0;
        bestPrice = DBL_MAX;
        for (int i = 0; i < P; i++)
        {
            getline(cin, name);
            scanf("%lf %d\n", &price, &R);

            
            if(R > bestCompliance){
                bestCompliance = R;
                bestPrice = price;
                bestName = name;
            }
            else if(R == bestCompliance){
                if(price < bestPrice){
                    bestPrice = price;
                    bestName = name;
                }
            }

            for (int i = 0; i < R; i++){
                getline(cin,placeholder);
            }
        }
        if(num > 1){
            cout << endl;
        }
        cout << "RFP #" << num << endl;
        cout << bestName << endl;
        
        num++;


        
        



    }
    



}
