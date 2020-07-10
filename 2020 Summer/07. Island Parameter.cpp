//https://leetcode.com/problems/island-perimeter/
//Time Complexity : O(N*M)
//Space Complexity : O(1)
class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int count = 0;
        int row = grid.size();
        int col = grid[0].size();
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (grid[i][j] == 1) {
                    count += 4;
                    if (i < row - 1)
                        count -= 2 * grid[i + 1][j];
                    if (j < col - 1)
                        count -= 2 * grid[i][j + 1];
                }
            }
        }
        return count;
    }
};


//Time complexity : O(2N*3)
/*
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
            if(col==1){
                j = 0;
                if(grid[i][j]==1)
                    count++;}
            for(j=0; j<col-1; j++)
            {
                if(j==0 && grid[i][j]==1)
                    count++;
                if(grid[i][j] != grid[i][j+1])
                    count++;
            }
            if(j==col-1 && grid[i][j]==1)
                count++;
        }

        //case column
        for(j=0; j<col; j++)
        {
            if(row==1){
                i = 0;
                if(i==0 && grid[i][j]==1)
                    count++;}
            for(i=0; i<row-1; i++)
            {
                if(i==0 && grid[i][j]==1)
                    count++;
                if(grid[i][j] != grid[i+1][j])
                    count++;
            }
            if(i==row-1 && grid[i][j]==1)
                count++;
        }
        
        return count;        
    }
};
*/