#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int migratoryBirds(vector<int> arr) {
    int count = 0;
    int result = 0;
    vector<int> pair;
    vector<int> temp;
    int max = 0;
    int h = 0;
    for(int i = 0; i < arr.size() - 1; i ++){
        for(int j = i + 1; j < arr.size(); j++){
            if(arr[i] == arr[j]){
                count ++;
            }
        }
        temp.push_back(count);
        count = 0;
        
        if(temp[i] > max){
            max = temp[i];
            result = arr[i];
        }
    }
    
    
return result;
}


int main()
{

    int k;
    vector<int> grid;

    cin >> k;

    for (int i = 0; i < k; i++)
    {
        int s;
        cin >> s;
        grid.push_back(s);
    }
    int result = migratoryBirds(grid);
    cout << result;

return 0;

}