

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int cmp(const void *a, const void *b){
    return *(int*)a > *(int*)b;
}

int* targetIndices(int* nums, int numsSize, int target, int* returnSize){
    int i, j, l = numsSize;
    int *ans = (int*)malloc(l * sizeof(int));
    qsort(nums, l, sizeof(int), cmp);
    
    for(i = 0, j = 0; i < l; i++){
        if(nums[i] == target)
            ans[j++] = i;
    }
    ans = realloc(ans, j * sizeof(int));
    *returnSize = j;
    
    return ans;
}