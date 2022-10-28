
bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target){
    if (matrixSize == 0 || *matrixColSize == 0)
        return false;
    
    int low = 0;
    int high = matrixSize * *matrixColSize - 1;
    int mid, row, col;
    
    while (low <= high) {
        mid = (low + high) / 2;
        
        row = mid / *matrixColSize;
        col = mid % *matrixColSize;
        
        if (matrix[row][col] == target) {
            return true;
        } else if (matrix[row][col] > target) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    
    return false;
}