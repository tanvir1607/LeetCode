class Solution 
{
    void bfs(int src, vector<vector<int>>& rooms, vector<bool>& visited)
    {
        queue<int> que;
        que.push(src);
        visited[src] = true;
        while (!que.empty())
        {
            int parent = que.front();
            que.pop();
            for (int child : rooms[parent])
            {
                if (!visited[child])
                {
                    que.push(child);
                    visited[child] = true;
                }
            }
        }
    }

public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) 
    {
        int node = rooms.size();
        vector<bool> visited(node, false);
        bfs(0, rooms, visited);

        // for (int i = 0; i < node; i++)
        //     if (!visited[i]) return false;
        for (bool x : visited)
            if (!x) return false;

        return true;
    }
};

