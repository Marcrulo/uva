#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    while (true){
        int K, N, M;
        cin >> K >> N >> M;
        if (!K){
           return 0;
        }
        for (int i = 0; i < K; i++){
            int X, Y;
            cin >> X >> Y;
            
            if (X > N){
                if(Y > M){
                    cout << "NE\n";
                }
                else if (Y < M){
                    cout << "SE\n";
                }
                else{
                    cout << "divisa\n";
                }
            }
            else if(X < N){
                if(Y > M){
                    cout << "NO\n";
                }
                else if (Y < M){
                    cout << "SO\n";
                }
                else{
                    cout << "divisa\n";
                }
            }
            else{
                cout << "divisa\n";
            }

        }
        

    }
    
    
}
