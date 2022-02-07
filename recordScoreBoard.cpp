#include <iostream>
#include <vector>

using namespace std;

//creat a array function
int breakingRecords(int n, int scores[]) {
int minValue = scores[0];
int maxValue = scores[0];
int maxIndex = 0;
int minIndex = 0;
int scoreValue[1];
for(int i = 0; i < n; i ++){
    if(maxValue < scores[i]){
        maxValue = scores[i];
        maxIndex += 1;
        cout << maxValue << endl;
        
    }
    if(minValue > scores[i]) { 
        minValue = scores[i];
        minIndex += 1;
    }    
}
return maxIndex;
//return minIndex;
}


int main()
{

int scores[] = {10,5,20,20,4,5,2,25,1};
int n = 9;
int record = breakingRecords(n,scores); //call the array function here 
cout << record;

return 0;

}