class Solution {
    public void sortColors(int[] nums) {
        quick_sort(nums,0,nums.length-1);
    }
    
    public void quick_sort(int[] a,int low,int high){
        if(low>=high){
            return;
        }
        int start=low;
        int end=high;
        int pivot=a[start+(end-start)/2];
        while(start<=end){
            while(a[start]<pivot){
                start++;
            }
            while(a[end]>pivot){
                end--;
            }
            if(start<=end){
                int temp=a[start];
                a[start]=a[end];
                a[end]=temp;
                start++;
                end--;
            }
        }
        
        quick_sort(a,low,end);
        quick_sort(a,start,high);
    }
}