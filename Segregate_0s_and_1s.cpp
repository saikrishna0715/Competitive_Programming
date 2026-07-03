class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        // code here
        int left = 0;
        int right = arr.size()-1;
        while(left < right){
            while(arr[left] == 0){
                left++;
            }
            while(arr[right] == 1){
                right--;
            }
            arr[left] = 0;
            arr[right] = 1;
        }
        arr[left] = 1;
        arr[right] = 0;
    }
};