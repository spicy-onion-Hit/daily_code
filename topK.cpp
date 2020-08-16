#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
class Solution{
    public:
        int partition (int left, int right, vector<int>& nums){
            int index = left;
            //cout<<"index"<<index;
            cout<<"right"<<right<<endl;
            int key = nums[right];
            for(int i = left; i <= right; i++){
                if (nums[i] > key){
                    cout<< nums[i]<<endl;
                    swap(nums[index++], nums[i]);
                }
            }
            cout<< "ss"<<index<<endl;
            swap(nums[index], nums[right]);
            return index; //  返回一个索引，这个索引前面的数字都比他大
        } 
        void top_k( int left, int right, vector<int>& nums, int k ){
            int index = partition(left, right, nums);
            if (index == k){
                return;
            }else if (index > k){ // index 太大了 
                top_k(left, index-1 ,nums,k);
            }else{
                top_k(index+1, right, nums, k);
            }
        }
        vector<int> top_k (vector<int>& nums,int k){ // 这些从参数对问题规模的描述不是很贴切
            int left = 0, right = nums.size()-1;
            top_k(left, right, nums, k);
            vector<int> res;
            for(int i = 0; i < k; i++){
                res.push_back(nums[i]);
            }
            return res;
        }   
};

int main(){
    vector<int> array = {22,21,11,6,4,2,99,434};
    Solution ss;
    ss.partition(0, array.size()-1,array);
    for(auto& arr : array){
        cout<< arr <<"    ";
    }
    vector<int> res = ss.top_k(array, 4);
    int n = res.size();
    for(int i = 0; i < n;i++){
        cout<< res[i]<<"  ";
    }
    system("pause");
}