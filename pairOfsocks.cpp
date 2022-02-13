#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

int sockMerchant(int n, vector<int> ar) {
    int pair = 1;
    int count = 0;
    sort(ar.begin(), ar.end());
    for(int i = 1; i<ar.size(); i++){
        if(ar[i-1] == ar[i]){
            pair++; 
            if(i == ar.size() - 1){
                count += (pair/2);
            }
            
        }else {
            count += (pair/2);
            cout << "here is value of : " << count << endl;
            pair = 1;
        }
        cout << "value of pair ----- " << pair << endl;
        cout << "--------- count " << count << endl;
    }
    
    return count;
}


int main()
{


   int k;
   vector<int> arr;

    cin >> k;

    for (int i = 0; i < k; i++)
    {
        int s;
        cin >> s;
        arr.push_back(s);
    }
    int result = sockMerchant(k, arr);
    cout << result << endl;
    


return 0;

}