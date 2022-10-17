void dfs(int i, int j, char **grid, int row, int col)
{
    if (i < 0 || j < 0 || i > row-1 || j > col-1)
        return;
    
    if (grid[i][j] == '0')
        return;

    grid[i][j] = '0';
    dfs(i-1,j,grid,row,col);
    dfs(i+1,j,grid,row,col);
    dfs(i,j-1,grid,row,col);
    dfs(i,j+1,grid,row,col);
    return;
}
int numIslands(char** grid, int gridSize, int* gridColSize){
    
    int count=0;
    int i,j;
    int row = gridSize;
    int col = *gridColSize;
    
    for (i=0; i < row; i++)
    {
        for (j=0; j < col; j++)
        {
            if (grid[i][j] != '0')
            {
                count++;
                dfs(i,j,grid,row,col);
            }
        }
    }
    return count;
}