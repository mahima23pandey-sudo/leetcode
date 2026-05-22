class Solution {
public:

    int partition(vector<int>& nums, int low, int high) {

        int pivot = nums[high];
        int i = low;

        for(int j = low; j < high; j++) {


            if(nums[j] > pivot) {
                swap(nums[i], nums[j]);
                i++;
            }
        }

        swap(nums[i], nums[high]);

        return i;
    }

    int quickSelect(vector<int>& nums, int low, int high, int k) {

        int pivotIndex = partition(nums, low, high);


        if(pivotIndex == k)
            return nums[pivotIndex];

        
        else if(pivotIndex > k)
            return quickSelect(nums, low, pivotIndex - 1, k);

       
        else
            return quickSelect(nums, pivotIndex + 1, high, k);
    }

    int findKthLargest(vector<int>& nums, int k) {

        int n = nums.size();

        return quickSelect(nums, 0, n - 1, k - 1);
    }
};