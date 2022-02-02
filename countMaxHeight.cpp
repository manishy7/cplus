#include <iostream>

using namespace std;

int birthdayCakeCandles(int candles[]) {
    int maxHeight = candles[0];
    int count = 0;
    for(int i = 0; i<10; i++){
        if(maxHeight < candles[i]){
            maxHeight = candles[i];
            
        }
    }
    for(int i = 0; i< 10; i++){
        if(maxHeight == candles[i]){
            count +=1 ;
        }
    }
    return count;
}


int main()
{

int candles[] = {44, 53, 31, 27, 77, 60 ,66, 77, 26, 36};
int result = birthdayCakeCandles(candles);
cout << "the answer is: " << result << endl;

return 0;

}