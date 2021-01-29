//快排topK
class Solution {
   public:
    /*
     * 与快排算法中的划分算法一样，返回划分后基点的位置。
     */
    int partition(vector<int>& arr, int left, int right) {
        int pivot = left;
        int lt = left + 1;
        int gt = right;
        while (true) {
            while (lt <= right && arr[lt] < arr[pivot]) lt++;
            while (gt >= left && arr[gt] > arr[pivot]) gt--;
            if (lt > gt) break;
            swap(arr[lt], arr[gt]);
            lt++;
            gt--;
        }
        swap(arr[pivot], arr[gt]);
        return gt;
    }

    vector<int> smallestK(vector<int>& arr, int k) {
        // 边界情况特殊处理
        if(k >= arr.size()) {
            return arr;
        } else if (k <= 0) {
            return {};
        } else { 
            int left = 0, right = arr.size() -1;
            do {
                int pivot = partition(arr, left, right);
                if(pivot == k){
                    break;
                }else if(pivot > k){
                    right = pivot - 1;
                }else {
                    left = pivot + 1;
                }
            }while(true);        

            vector<int> result(arr.begin(), arr.begin() + k);
            return result;
        }
        
    }
};
