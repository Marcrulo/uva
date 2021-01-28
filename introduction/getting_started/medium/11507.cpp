#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;

/*

Kinda proud. Figuered this out by myself. There are ugly solutions out there.

*/


int main()
{
    freopen("/home/marc8165/Documents/git-repos/uva/testI.txt", "r", stdin);
	freopen("/home/marc8165/Documents/git-repos/uva/testO.txt", "w", stdout);
    

    vector<string> xz = {"+x","+z","-x","-z"};
    vector<string> xy = {"+x","+y","-x","-y"};
    

    string cd = "+x"; 
    string bd;         
    int len;
    int xz_index, xy_index, yz_index;
    while(scanf("%d\n", &len)){
        if(!len){
            break;
        }

        cd = "+x"; 
        xz_index=0;
        xy_index=0;
        yz_index=0;

        for (int i = 0; i < len-1; i++){
            cin >> bd; 
            if(bd == "No"){
                continue;
            }
            else if(bd[1] == 'z'){
                if(cd[1] != 'y'){
                    if(bd[0] == '+'){
                        xz_index++;
                        xy_index++;
                    }
                    else{ 
                        xz_index--;
                        xy_index--;
                    }
                    while(xz_index%4 < 0){
                        xz_index+=4;
                    }
                    cd = xz[xz_index%4];
                }                

            }
            else{
                if(cd[1] != 'z'){
                    if(bd[0] == '+'){
                        xy_index++;
                        xz_index++;
                    }
                    else{ 
                        xy_index--;
                        xz_index--;
                    }
                    while(xy_index%4 < 0){
                        xy_index+=4;
                    }
                    cd = xy[xy_index%4];
                }                

            }

        }
        cout << cd << endl;
        
    }
}
