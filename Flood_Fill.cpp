class Solution 
{
    vector<vector<bool>> visited;
    vector<pair<int,int>> dir = {{-1,0},{0,1},{1,0},{0,-1}};
    int row, col;
    int oldColor, newColor;

    bool valid(int x, int y, vector<vector<int>>& image) 
    {
        return x >= 0 && x < row && y >= 0 && y < col && 
                !visited[x][y] && image[x][y] == oldColor;
    }

    void dfs(int sr, int sc, vector<vector<int>>& image) 
    {
        visited[sr][sc] = true;
        image[sr][sc] = newColor;
        for (auto d : dir) 
        {
            int cr = sr + d.first;
            int cc = sc + d.second;
            if (valid(cr, cc, image)) 
                dfs(cr, cc, image);
        }
    }

public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) 
    {
        row = image.size();
        col = image[0].size();
        visited.assign(row, vector<bool>(col, false));

        oldColor = image[sr][sc];
        newColor = color;

        if (oldColor == newColor) return image;
        // this line avoids unnecessary dfs and makes the code faster

        dfs(sr, sc, image);
        return image;
    }
};
