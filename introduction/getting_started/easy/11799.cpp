#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        int N, I, M = 0;
        cin >> N;
        while(N--){
            cin >> I;
            M = max(I, M);
        }
        
        cout <<  "Case " << i+1 << ": " << M << endl;
    }

}
