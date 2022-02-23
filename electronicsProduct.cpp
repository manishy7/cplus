#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

int getMoneySpent(vector<int> keyboards, vector<int> drives, int b) {
    int sum;
    int count = 0;
    int maxValue = keyboards[0] + drives[0];
    for(int i = 0; i<keyboards.size(); i++){
        for(int j = 0; j<drives.size(); j++){
            sum = keyboards[i] + drives[j];
            if(sum <= b){
                if(sum > maxValue){
                    maxValue = sum;
                }
            }else {
                count ++;
            }
        }
    }
    if(maxValue <= b && count < keyboards.size()*drives.size()){
        maxValue = maxValue;
    }else{
        maxValue = -1;
    }
    return maxValue;
}


int main()
{

int b,k,d;
cin >> b >> k >> d;
int num;
vector<int>keyboard, drives;
cout << "this is keyboard" << endl;
for(int i = 0; i<k; i++){
    cin >> num;
    keyboard.push_back(num);
    
}
cout << "this is drive" << endl;

for(int i = 0; i<d; i++){
    cin >> num;
    drives.push_back(num);
    
}
int result = getMoneySpent(keyboard,drives, b);
cout << result;
return 0;

}