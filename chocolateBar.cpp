#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int birthday(vector<int> s, int d, int m)
{
    int count = 0;
    for (int i = 0; i <= s.size()-m; ++i){
        int sum = 0;
        for (int j = i; j < i+m; ++j){
            sum += s[j];
        }
        if (sum == d) ++count;
    }
    return count;
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
    int d;
    int m;
    cin >> d >> m;

    int result = birthday(grid, d, m);
    cout << result;

    return 0;
}