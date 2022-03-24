#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>

using namespace std;

int reversedInt(int r){
    int rev_Number = 0;
    int remainder = 0;
    while(r != 0){
       remainder = r%10;
       rev_Number = rev_Number * 10 + remainder;
       r /= 10;
    }
    return rev_Number;
}


int beautifulDays(int i, int j, int k) {
    float n;
    int count = 0;
    for(int m = i; m<= j; m++){
        if(m > 9){
            int f = reversedInt(m);
            n = abs((float)m - (float)f)/(float)k;
            int a = ceil(n);
            if(n == a){
                count += 1;
                
            }
        }else {
            n = 0;
            count += 1;
            
        }
    }
    return count;
}

int main()
{

int i;
int j;
int k;
cin >> i >> j >> k;
cout << beautifulDays(i,j,k);

return 0;

}