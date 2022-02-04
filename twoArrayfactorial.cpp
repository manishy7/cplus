#include <iostream>
#include <vector>

using namespace std;

int maxValueA(int a[]){
    int max = 0;
    int lenA = sizeof(a) / sizeof(a[0]);
    for(int i = 0; i<=lenA; i++){
        if(max < a[i]){
            max=a[i];
        }
    }
    return max;
}
int lestB(int b[]){
    int lest = b[0];
    int lenB = sizeof(b) / sizeof(b[0]);
    for(int i = 0; i<=lenB; i++){
        if(lest >= b[i]){
            lest = b[i];
        }
    }
    return lest;
    
}

int getTotalX(int a[], int b[])
{
    int lenA = sizeof(a) / sizeof(a[0]);
    int lenB = sizeof(b) / sizeof(b[0]);
    int result = 0;
    vector<int> res;
    vector<int>duplicates;

    for (int j = 0; j <= lenB; j++)
    {
        for (int i = 1; i <= b[j]; i++)
        {
            if (b[j]%i == 0)
            {
                res.push_back(i);
            }
        }
    }
    sort(res.begin(), res.end());
    for(int i = 1; i<res.size(); i++){
        if(res[i - 1] == res[i]){
          if(duplicates.empty()){
              duplicates.push_back(res[i]);
          }else if(res[i] != duplicates.back()) {
              duplicates.push_back(res[i]);
          }
        }
    }
    int maxA = maxValueA(a);
    int lest = lestB(b);
    for(int i = 0; i<duplicates.size(); i++){
       if(maxA <= duplicates[i] && lest >= duplicates[i]){
           cout << duplicates[i]<< endl;
           result += 1;

       }
        
    }
    return result;
}

int main()
{
    int n = 27;

    int a[] = {2,4};
    int b[] = {16,32,96};
    int result = getTotalX(a, b);
    cout << result;
    return 0;
}