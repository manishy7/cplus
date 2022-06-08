#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>
#include<iomanip>

using namespace std;

int main()
{

int h[2];
int m[2];
for(int i =0; i<2; i++){
    cin >> h[i];
    cin >> m[i];
}
if(((h[0]+h[1]) <= 23)){
    
    if(m[0]+m[1] <=59){
        h[0] = h[0]+h[1];
        m[0] = m[0]+m[1];
    }else{
        m[0] = abs(60-(m[0]+m[1]));

        if((h[0]+h[1]+1) >= 23){
            h[0] = abs(24 - (h[0] + h[1] + 1));

        }else{
            h[0] = h[0] + h[1] + 1;
        }
    }
}else {
    h[0] = (24 - (h[0] + h[1] + 1));
    if(m[0]+m[1] <=59){
        m[0] = m[1]+m[0];
    }else{
        m[0] = abs(60-(m[0]+m[1]));
        // if((h[0]+h[1]+1) > 23){
        //     h[0] = (24 - (h[0] + h[1] + 1));

        // }
    }
}
if(h[0] < 10){
    if(m[0] < 10){
        cout << setfill('0') << setw(2) << h[0] << " " << setfill('0') << setw(2)  << m[0];
    }else {
        cout << setfill('0') << setw(2) << h[0] << " " << m[0];
    }
}else {
    if(m[0] < 10){
        cout << h[0] << " " << setfill('0') << setw(2)  << m[0];
    }else {
        cout << h[0] << " " << m[0];
    }
}

return 0;

}