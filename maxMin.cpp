#include <iostream>
#include<vector>

using namespace std;
void minMax(vector<int> arr){
long long min = LLONG_MAX , max = LLONG_MIN , sum ;
    for(int i = 0 ;i < arr.size() ; ++i)
    {
        sum = 0;
        for(int j = 0; j < arr.size() ; ++j)
        {
            if(i != j){
                
                sum += arr[j]; // here the sum is taken off all the arr values
                cout<<" the sum value is: " << sum << endl;
            }
        }
        if(sum > max)
            max = sum;
            cout << " here the max value is: "<< max << endl;
        if (sum < min)
            min = sum;
            cout << " here the min _____ value is: "<< min << endl;
    }
    cout << min << " " << max << endl;
}

int main()
{
vector<int> V;
int input;
while (cin >> input)
    V.push_back(input);

minMax(V);


return 0;

}