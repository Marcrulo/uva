#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;

#define FOI(i, A, B) for(i=A; i<=B; i++)
#define FOD(i, A, B) for(i=A; i>=B; i--)

int main()
{
    //freopen("/home/marc8165/Documents/git-repos/uva/testI.txt", "r", stdin);
	//freopen("/home/marc8165/Documents/git-repos/uva/testO.txt", "w", stdout);
    while (true){
        double height, dist_up, dist_down, fatigue;
        cin >> height >> dist_up >> dist_down >> fatigue;
        
        int day = 0;
        double curHeight = 0;
        double drop = dist_up*(fatigue/100);
        
        if(!height){
            break;
        }


        
        //cout << "drop " << drop << endl;
        while (curHeight <= height && curHeight >= 0){
            day++;

            curHeight += dist_up;
            if(curHeight > height){
                break;
            }
            curHeight -= dist_down; 
        
            dist_up -= drop;
            if (dist_up < 0){
                dist_up = 0;
            }

            //cout << "height " << curHeight << endl;
        }

        if (curHeight < 0){
            cout << "failure on day " << day << endl;
        }
        else{
            cout << "success on day " << day << endl;
        }
    }
}
