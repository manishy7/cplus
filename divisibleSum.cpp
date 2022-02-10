#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int divisibleSumPairs(int n, int k, vector<int> ar) {
    int sum = 0;
    int count = 0;
    for(int i = 0; i < ar.size() - 1; i++){
        for(int j = i + 1; j < ar.size(); j++){
            if((sum = ar[i] + ar[j])% k == 0) {
                count ++;
                sum = 0;
            }else {
                sum = 0;
            }
        }
    }
    return count;
}


int main()
{


    int n;
    cin >> n;
    int k;
    cin >> k;
    vector<int> grid;

    
    

    for (int i = 0; i < n; i++)
    {
        int s;
        cin >> s;
        grid.push_back(s);
    }
    int result =  divisibleSumPairs(n, k, grid);
    cout << result;



return 0;

}