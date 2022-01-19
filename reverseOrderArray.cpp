#include <iostream>

using namespace std;



int main()
{

int a;
cin >> a;
int s[a];
for(int i = 0; i < a; i ++){
    cin >> s[i];
}
for(int i = a - 1 ; i >= 0; i --){
    cout << s[i] << " ";
}
return 0;

}