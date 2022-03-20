#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>

using namespace std;
void ans(string a, string k,int t){
    int count = 0;
    for(int i,j = 1; i<a.size(); i++){
        if(a[i-1] != k[i-1]){
            if(k[i]==k[i-1]){
                count += 1;
            }
        }
    }
    if(count > 0){
        cout << "Case #" << t+1 << ": " << count << endl;
    }else{
        cout << "Case #" << t+1 << ": " << "IMPOSSIBLE" << endl;

    }
}

int main()
{
int t;
cin >> t; 
 string a;
string k;
cin >> ws;
for (int i = 0; i<t; i++){
    for(int j = 0; j<2; j++){
        getline(cin,a);
        cout << a << endl;
        if(j == 0){
            k = a;
        }
    }
   ans(a,k,i);
}


return 0;

}