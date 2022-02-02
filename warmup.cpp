#include <iostream>
#include<string>

using namespace std;

string timeConversion(string s) {
    int myHour = stoi(s);
    string str;
    if('P' == s[8]){
        if(myHour < 12){
            myHour += 12;
            str = to_string(myHour);
        }else if (myHour == 12){
            str = "12";
        }
    }else{
        if(myHour == 12){
            myHour = 00;
            str = "00";
        }else if(myHour < 10){
            str = '0' + to_string(myHour);
        }else if (myHour > 10) {
            str = to_string(myHour);
        }
    }
    
    
    s.replace(0,2,str);
    s[8] = ' ';
    s[9] = ' ';
    return s;
}


int main()
{

string s = "12:45:54PM";
string time = timeConversion(s);
cout << time << endl;
return 0;

}