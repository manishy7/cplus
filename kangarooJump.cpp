#include <iostream>
#include <vector>

using namespace std;

string kangaroo(int x1, int v1, int x2, int v2) {

string result;
if((x1 <= x2 && v1 < v2) || (x1 >= x2 && v1 > v2)){
    result = "NO";
}else {
   while(x1 != x2){
       x1 += v1;
       x2 += v2;
       if(x1 == x2){
           result = "YES";
       }else if (x1 > 1000000000){
           result = "N0";
           cout << x1 << endl << x2 << endl;
           break;
       }
   } 
}



return result;
}



int main()
{

string result = kangaroo(4523,8092,9419,8076);
cout << result;

return 0;

}