#include<vector>
#include<iostream>
using namespace std;
class Solution{
    public:
        vector<int> array_sort(vector<int>& nums){
            int left = 0,  right = nums.size()-1;
            quick_sort(left, right, nums);
            return nums;
        }
        void quick_sort(int left, int right, vector<int>& nums){
            if (left >= right)
                return;
            int key = nums[left];
            int index = left;
            for(int i = left+1; i <= right; i++){
                if (nums[i] <= key){
                    swap(nums[i], nums[++left]);
                }
            }
            swap(nums[left] , nums[index]);
            quick_sort(left,  index-1, nums);
            quick_sort(index+1,  right, nums);
        }   
};

int main(){
    vector<int> array = { 1,2,3,5};
    Solution ss;
    ss.array_sort(array);
    int n = array.size();
    for(int i = 0; i < n;i++){
        cout<< array[i]<<"  ";
    }
    system("pause");
}