#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <bits/stdc++.h>


using namespace std;

int main()
{
    int N, B, H, W;
    while (cin >> N >> B >> H >> W)
    {   
        int min_cost = INT_MAX;
        
        while (H--){
            bool stay = false;
            int cost;
            cin >> cost;

            for (int i = 0; i < W; i++)
            {
                int space;
                cin >> space;
                if (space >= N){
                    stay = true;
                } 
            }
            
            int total_cost = N*cost;
            if (stay && (total_cost <= B)){
                if (total_cost < min_cost){
                    min_cost = total_cost;
                }
            }
            

        }
        if(min_cost == INT_MAX){
            cout << "stay home" << endl;
        }
        else{
            cout << min_cost << endl;
        }


    }
    
}
