class Solution 
{
    vector<vector<bool>> visited;
    vector<pair<int,int>> dir = {{-1,0},{0,1},{1,0},{0,-1}};
    int row, col, perimeter = 0;

    bool valid(int x, int y, vector<vector<int>>& grid)
    {
        return x >= 0 && x < row && y >= 0 && y < col && grid[x][y] == 1;
    }

    void dfs(int sr, int sc, vector<vector<int>>& grid)
    {
        visited[sr][sc] = true;
        for (auto d : dir)
        {
            int cr = sr + d.first;
            int cc = sc + d.second;
            if (!valid(cr, cc, grid)) perimeter++;
            else if (!visited[cr][cc]) dfs(cr, cc, grid);
        }
    }

public:
    int islandPerimeter(vector<vector<int>>& grid) 
    {
        row = grid.size();
        col = grid[0].size();
        visited.assign(row, vector<bool>(col, false));

        for (int i = 0; i < row; i++)
            for (int j = 0; j < col; j++)
                if (valid(i, j, grid) && !visited[i][j])
                    dfs(i, j, grid);
        return perimeter;
    }
};
