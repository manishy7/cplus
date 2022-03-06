#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

typedef struct employee{
    int eId; //4
    char favChar; //1
    float salary; //4 byte
} ep;

union money
{
    int rice;
    char car;
    float pounds;
};
//to use only one data type to optimise the memory by sharing mulitpe data type through one data type
enum Meal{breakfast, lunch, dinner};
Meal m6 = lunch;
int main()
{
ep manish;
ep sam;
ep rick;
manish.eId = 1;
manish.favChar = 'm';
manish.salary = 1300000;

union money m1;
m1.rice = 34;
cout << m1.rice << endl;
cout << m6 << endl;

return 0;

}