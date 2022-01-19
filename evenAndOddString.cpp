#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
  
    int a;
    string s;
    scanf("%d", a);
    for (int i=1; i <= a; i++){
        getline(cin, s);
    } 
    string evenS;
    string oddS;
    for(int i = 0; i < a; i++){
        for(int j = 0; j < s.length(); i ++){
            if (j%2 == 0) {
                evenS += s[j];
            }else {
                oddS += s[j];
            }
        }
        cout << evenS << " " << oddS << endl;
        evenS = "";
        oddS = "";
        
    }
    
    
    
    
    
    
    return 0;
    
    
    
}