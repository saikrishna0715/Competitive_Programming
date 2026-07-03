#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> sortedSquares(vector<int>& arr){
        int end = arr.size()-1;
        vector<int> ans(end+1);
        int start = 0;
        int i = end;
        while(i >= 0){
            if(abs(arr[start]) > abs(arr[end])){
                ans[i] = arr[start] * arr[start];
                start++;
            }
            else if (abs(arr[start]) <= abs(arr[end])){
                ans[i] = arr[end] * arr[end];
                end--;
            }
            i--;
        }
        return ans;
    }
}