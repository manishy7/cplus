#include <iostream>

using namespace std;

// function 


// --


int main()
{

int n = 13;
int binaryNum[32];
int i = 0;
while(n > 0){
binaryNum[i] = n%2;
n = n/2;
// cout << "\n binaray are ---- = " << binaryNum[i];
i ++;

}
int countNum = 0;
int maxBin[32];
for (int j = 0; j< 32; j++){
    if(binaryNum[j]== 1){
        countNum += 1;
        maxBin[j] = 0;
    }else {
        maxBin[j] = countNum;
        countNum = 0;
        

    }
}
int s = sizeof(maxBin) / sizeof(maxBin[0]);
cout << *max_element(maxBin, maxBin + s);




return 0;

}