#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;


int main()
{
    freopen("/home/marc8165/Documents/git-repos/uva/testI.txt", "r", stdin);
	//freopen("/home/marc8165/Documents/git-repos/uva/testO.txt", "w", stdout);

    int N, P;
    while (cin >> N >> P){
        string blank;
        for (int i = 0; i < N+1; i++)
        {
            getline(cin, blank, '\n');
        }
        
        string names[P];
        double prices[P];
        int reqs[P];
        for (int i = 0; i < P; i++){
            cin >> names[i]; 
            cin >> prices[i];
            cin >> reqs[i];
            for (int j = 0; j < reqs[i]; j++)
            {
                getline(cin, blank, '\n');
            }
            
            
            
        }
        cout << *max_element(prices, prices+P);
        


    }
    



}
