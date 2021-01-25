/*

I give up for now. I realize, that I have misunderstood the assignment, and will not proceed any further.

*/


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

    int N, P, num=1;
    while (cin >> N >> P){
        if(!N){
            break;
        }
        string blank;
        for (int i = 0; i < N+1; i++)
        {
            getline(cin, blank, '\n');
            //cin >> blank;
        }
        string names[P];
        double prices[P];
        int reqs[P];
        for (int i = 0; i < P; i++){
            cin >> names[i];
            cin >> prices[i];
            cin >> reqs[i];
            for (int j = 0; j < reqs[i]+1; j++)
            {
                getline(cin, blank, '\n');
                //cin >> blank;
            }
                 
        }
        int index = distance(reqs, max_element(reqs, reqs+P));
        int max_req = reqs[index];

        vector<int> multiple;
        for (int i = 0; i < P; i++)
        {
            if(reqs[i] == max_req){
                multiple.push_back(i);
            }
        }
        
        double min_price = INT_MAX;
        for (int i = 0; i < multiple.size(); i++)
        {
            if(prices[multiple[i]] < min_price){
                
                min_price = prices[multiple[i]];
                index = multiple[i];
                //cout << "index: " << index << endl;
            }
        }
        //cout << "Latest index: " << index << endl;
        


        if(num > 1){
            cout << endl;
        }
        cout << "RFP #" << num << endl;
        cout << names[index] << endl;  
        num++;
    }
    



}
