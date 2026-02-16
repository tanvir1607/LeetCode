class Solution 
{
    vector<vector<int>> adj_list;
    vector<bool> visited;

    void dfs(int src)
    {
        visited[src] = true;
        for (int child : adj_list[src])
            if (!visited[child]) dfs(child);
    }

public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) 
    {
        adj_list.assign(n, vector<int>());
        visited.assign(n, false);
        for (int i = 0; i < edges.size(); i++)
        {
            int a = edges[i][0];
            int b = edges[i][1];
            adj_list[a].push_back(b);
            adj_list[b].push_back(a);
        }
        dfs(source);
        return visited[destination];
    }
};