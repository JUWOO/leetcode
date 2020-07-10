class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        
        int row = grid.size();
        int col = grid[0].size();
        int count=0;
        int i, j;
        
        //case row
        for(i=0; i<row; i++)
        {
            for(int j=0; j<col-1; j++)
            {
                if(j==0 && grid[i][j]==1)
                    count++;
                else if(grid[i][j] != grid[i][j+1])
                    count++;
            }
            if(j==col-1 && grid[i][j]==1)
                count++;
        }

        //case column
        for(j=0; j<col; j++)
        {
            for(i=0; i<row-1; i++)
            {
                if(i==0 && grid[i][j]==1)
                    count++;
                else if(grid[i][j] != grid[i+1][j])
                    count++;
            }
            if(i==row-1 && grid[i][j]==1)
                count++;
        }
        
        return count;        
    }
};