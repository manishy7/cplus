#include <iostream>
#include <vector>
#include <algorithm>
#include<string>

using namespace std;



string dayOfProgrammer(int year) {
int leapYear = 13;
if(year > 1918){
  if((year%400 == 0) || ((year%4 == 0) && (year%100 != 0))){
    leapYear = 12;
}  
}
else if(year == 1918){
    leapYear = 26;
}
    else {
    if(year%4 == 0){
        leapYear = 12;
    }
}

/* convert from int to string */
string str= to_string(leapYear);
string yearStr = to_string(year);
string calender = str + ".09." + yearStr;
return calender;

}


int main()
{

int year;
cin>> year;
string result = dayOfProgrammer(year);
cout << result;

return 0;

}