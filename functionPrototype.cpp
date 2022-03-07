#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;
int sum(int, int);
int main()
{
int num1, num2;
num1 = 2;
num2 = 3;
cout << sum(num1, num2);


return 0;

}
int sum (int a, int b){
    int c = a + b;
    return c;
}