#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int K;
    cin >> K;
    for (int i = 0; i < K; i++)
    {
        int A,B,C;
        cin >> A >> B >> C;
        int arr[] = {A,B,C};
        sort(arr, arr+3);
        cout << "Case " << i+1 << ": " << arr[1] << endl;
    }
    
}
