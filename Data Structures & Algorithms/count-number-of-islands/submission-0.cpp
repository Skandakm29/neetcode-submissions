class Solution {
public:
    void dfs(int row,int col,vector<vector<char>>& grid,vector<vector<int>>& vis){
        vis[row][col]=1;
        int n=grid.size();
        int m=grid[0].size();
        int delr[]={-1,0,1,0};
        int delc[]={0,-1,0,1};
        for(int i=0;i<4;i++){
            int newr=row+delr[i];
            int newc=col+delc[i];
            if(newr>=0 && newr<n && newc>=0 && newc<m && vis[newr][newc]==0 && grid[newr][newc]=='1' ){
                dfs(newr,newc,grid,vis);
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int cnt=0;
        int m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1' && vis[i][j]==0){
                    cnt++;
                    dfs(i,j,grid,vis);
                }
            }
        }
        return cnt;

    }
};
