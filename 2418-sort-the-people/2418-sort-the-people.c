

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int cmp(const void *a, const  void *b){ return (*(int*)b - *(int*)a); }
char ** sortPeople(char ** names, int namesSize, int* heights, int heightsSize, int* returnSize){
    char** ans = (char**)calloc(namesSize, sizeof(char*));
    for(int i = 0; i < heightsSize; i++)
        heights[i] = (heights[i] << 10) + i;
    qsort(heights, heightsSize, sizeof(int), cmp);
    for(int i = 0; i < heightsSize; i++)
        ans[i] = names[heights[i] & 0x3FF];
    *returnSize = heightsSize;
    return ans;
}