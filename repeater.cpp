#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;
int solution(string &S) {
    // write your code in C++14 (g++ 6.2.0)
    int count = 0;
    int index = 0;
    int nan = 0;
    string noComman;
    for(int i = 1; i<S.size(); i++){
        for(int j = i-1; j<S.size(); j++){
            if(S[j] == S[i]){
                index = j;
                nan += 1;
                cout << "Comman Words ---   " << S[j] << endl;
            }else {
                noComman += S[j];
            }
        }
        if(nan == 0){
            count += noComman.size();
        }else {
            
        }
        i = index;
        nan = 0;
        noComman = "";
    }
    return count;
}



int main()
{

string s;
cin >> s;
int result = solution(s);
cout << result;

return 0;

}