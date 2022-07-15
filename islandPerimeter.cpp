
#include<bits/stdc++.h>
using namespace std;


int find_water(vector<vector<int> >arr, int i, int j){
   int find = 0;
   // cheak up
   if(i-1<0){
      find += 1;
   }else{
      if(arr[i-1][j]==0){
         find += 1;
      }
   }
   //check below
   if(i+1>=arr.size()){
      find += 1;
   }else{
      if(arr[i+1][j]==0){
         find += 1;
      }
   }

   // check left 

   if(j-1<0){
      find += 1;
   }else{
      if(arr[i][j-1]==0){
         find += 1;
      }
   }

   // check right 
   if(j+1>=arr[i].size()){
      find += 1;
   }else{
      if(arr[i][j+1]==0){
         find += 1;
      }
   }

   return find;

}
int perimeter (int m, int n, vector<vector<int> > arr) {
   // Write your code here
   int p = 0;
   //check the 1s and 0s
   for(int i = 0; i<m;i++){
      for(int j = 0; j<n;j++){
         if(arr[i][j]==1){
            p+= find_water(arr,i,j);
         }
      }
   }
   return p;  
}

int main() {
    int m;
    cin >> m;
    int n;
    cin >> n;
    vector<vector<int> > arr(m, vector<int>(n));
    for (int i_arr = 0; i_arr < m; i_arr++)
    {
    	for(int j_arr = 0; j_arr < n; j_arr++)
    	{
    		cin >> arr[i_arr][j_arr];
    	}
    }

    int out_;
    out_ = perimeter(m, n, arr);
    cout << out_;
}