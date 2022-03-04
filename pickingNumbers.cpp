#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

int pickingNum(vector<int> s){
sort(s.begin(),s.end());
int count = 1;
int maxCount = 0;
int ones = 0;
for(int i = 1; i<s.size(); i++){
    if((s[i] - s[i-1])<=1 && (ones < 1) || s[i] - s[i-1] == 0){
        count += 1;
        if(s[i] - s[i-1] == 1){
            ones = 1;
        }
        if(maxCount < count){
            maxCount = count;
        }
    }else if((ones == 1 && s[i] - s[i-1] <= 1) || s[i] - s[i-1] > 1) {
        ones = 0;
        if(maxCount < count){
            maxCount = count;
        }
        count = 1;
    } 
}
return maxCount;
}
int main()
{

vector <int> s;
int k;
cin >> k;
int num;
for(int i = 0; i<k; i++){
    cin >> num;
    s.push_back(num);
}
int result = pickingNum(s);
cout << result;

return 0;

}