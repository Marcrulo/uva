#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    string temp;
    
    bool first = true;

    while (getline(cin, temp)){
        for (int i = 0; i < temp.size(); i++)
        {
            if (temp[i] == '"'){
                if (first){
                    cout << "``";
                }
                else{
                    cout << "''";
                }
                first = !first;
            }
            else{
                cout << temp[i];
            }
        }
        cout << '\n';
    }
    return 0;
    
}