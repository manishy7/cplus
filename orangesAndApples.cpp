#include <iostream>
#include <vector>

using namespace std;

void countApplesAndOranges(int s, int t, int a, int b, int apples[], int oranges[]) {
    int countA = 0;
    int countB = 0;
for(int i =0 ; i<3; i++){
    apples[i] += a;
    if(apples[i] >= s && apples[i] <= t){
        countA += 1;
    }

}

for(int i =0 ; i<3; i++){
    oranges[i] += b;
    if(oranges[i] >= s && oranges[i] <= t){
        countB += 1;
    }
}



cout << countA << endl << countB;
}


int main()
{

int app[] = {2,3,-4};
int oran[] = {3,-2,-4};

countApplesAndOranges(7, 10, 4, 12, app , oran);



return 0;

}