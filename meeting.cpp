#include <iostream>
#include<queue>


using namespace std;

class string_copy {
private:
    char* content;
public:
    string_copy(const char* str);

    virtual ~string_copy();

    // 复制函数
    string_copy(const string_copy& content);

    
    // 赋值函数
    //A = B    
    string_copy operator=(const string_copy& str);
    
}

//"1245" ->int 1245

string_copy a;
sizeof (a);


longlong string_int(const string& str){
    if (str == "")
        return 0;
    // ""为异常
    longlong res = 0;
    //32 sign
    max 2^31-1 min -(2^32-1) 



    int size = str.size();
    for(int i = size -1; i >= 0; i--){
        //str[i] '0'  '9'
        res = res* 10 + (str[i] - '0');
    }
    return res;
}

priority_queue<int,vector<int>, great<int>> que;
int partition(vector<int>& arr, int left, right){
    int index = left;
    int n = arr.size();
    int key = arr[left];
    // 左边是大值右边是小值
    for(int i = left; i <= right; i++){
        if(arr[i] > key){
            swap(arr[i], arr[index++]);
        }
    }
    return index; // index 是一个索引，其左边都是大于arr[index];
}


// n 个数 k 
vector<int>  max_k(vector<int>&arr){
    // 
    // 
    //
}