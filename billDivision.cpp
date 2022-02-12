#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void bonAppetit(vector<int> bill, int k, int b) {
    int totalBill = 0;
    int result = 0;
for(int i = 0; i< bill.size(); i++){
    totalBill += bill[i];
}
if((totalBill - bill[k])/2 != b){
    result = b - ((totalBill - bill[k])/2);
    cout << result;
}else {
    cout << "Bon Appitit";
}

}

int main()
{

   int k;
    vector<int> bill;

    cin >> k;

    for (int i = 0; i < k; i++)
    {
        int s;
        cin >> s;
        bill.push_back(s);
    }
    int a, b;
    cin >> a >> b;
    bonAppetit(bill,a,b);

return 0;

}