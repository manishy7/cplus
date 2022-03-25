#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>

using namespace std;
int saveThePrisoner(int n, int m, int s) {
    int state = s + m - 1;
    if(state > n){
        while(state > n){
            state = state - n;
            
            }
    }
    cout << "first :" << state%n << endl;
    return state;
}


int main()
{
int n;
int m;
int s;
cin >> n >> m >> s;
cout << saveThePrisoner(n,m,s);


return 0;

}