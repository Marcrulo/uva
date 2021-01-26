#include <iostream>
#include <cmath>
#include <bits/stdc++.h>

#include <string>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
    freopen("/home/marc8165/Documents/git-repos/uva/testI.txt", "r", stdin);
	//freopen("/home/marc8165/Documents/git-repos/uva/testO.txt", "w", stdout);

    int N, P;
    while (cin >> N >> P){
        cin.ignore(1);
        if(!N){
            break;
        }
        vector<string> requirements;
        for (int i = 0; i < N; i++)
        {
            string a;
            
            getline(cin, a); 
            requirements.push_back(a);
        }
        string names[P];
        double prices[P];
        double compliances[P];

        for (int i = 0; i < P; i++)
        {
            cin >> names[i] >> prices[i];
            int features;
            cin >> features;
            cin.ignore(1);
            double compliance = 0;
            for (int j = 0; j < features; j++)
            {
                string feat;
                getline(cin, feat, '\n');

                if(find(requirements.begin(), requirements.end(), feat) != requirements.end()){
                    compliance += 1;
                }
            }
            compliances[i] = compliance/features;
        }

        //vector<int> maxes;

        
        
        


    }
    



}
