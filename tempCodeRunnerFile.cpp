#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int x1;
    int x2;
    int v1;
    int v2;
    cin >> x1 >> x2 >> v1 >> v2;
string result;
if((x1 <= x2 && v1 < v2) || (x1 >= x2 && v1 > v2)){
    result = "NO";
}else {
   while(x1 != x2){
       x1 += v1;
       x2 += v2;
       if(x1 == x2){
           result = "YES";
       }else if (x1 == 10000){
           result = "N0";
           break;
       }
   } 
}
cout << result;
return 0;

}




