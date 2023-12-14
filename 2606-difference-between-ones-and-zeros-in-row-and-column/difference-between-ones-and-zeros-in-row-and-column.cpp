class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<int> onesrow(m,0),onescol(n,0),zeroesrow(m,0),zeroescol(n,0);
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==1)
                {
                    onesrow[i]++;
                    onescol[j]++;
                }
                else
                {
                    zeroesrow[i]++;
                    zeroescol[j]++;
                }
            }
        }
        vector<vector<int>> diff(m,vector<int>(n,0));
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
                diff[i][j]=onesrow[i]+onescol[j]-zeroesrow[i]-zeroescol[j];
        }
        return diff;
        
    }
};