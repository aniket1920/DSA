class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int v = rooms.size();
        vector<int> vis(v,0);
        queue<int> q;
        q.push(0);
        vis[0] = 1;
        while(!q.empty()){
            int room = q.front();
            q.pop();
            for(int key : rooms[room]){
                if(!vis[key]){
                    vis[key] = 1;
                    q.push(key);
                }
            }
        }
        for(int v : vis){
            if(v==0){
                return false;
            }
        }
        return true;
    }
};