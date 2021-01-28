#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;


int main()
{
    //freopen("/home/marc8165/Documents/git-repos/uva/testI.txt", "r", stdin);
	//freopen("/home/marc8165/Documents/git-repos/uva/testO.txt", "w", stdout);
    
    int N, output;
    double c, r;
    cin >> N;
    char piece;
    while(N--){
        cin >> piece >> c >> r;

        if(piece == 'r' || piece == 'Q'){
            output = min(c, r);
        }
        else if(piece == 'k'){
            output = ceil((c*r)/2);
        }
        else{
            output = ceil(c/2)*ceil(r/2);
        }

        cout << output << endl;
    }
}
