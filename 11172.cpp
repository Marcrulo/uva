#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a;
        cin >> b;
        if (a > b){
            cout << '>';
        }
        else if (a < b){
            cout << '<';
        }
        else{
            cout << '=';
        }
        cout << '\n';
    }
    
}
