void dfs(int i,vector<vector<int>>&adj,vector<int>&vis)
{
  vis[i]=true;
  
  for(int j:adj[i])
  {
    if(vis[j] == false)
    {
      dfs(j,adj,vis);
    }
  }
}
    
int motherVertex(vector<vector<int>>graph)
{
  int n=graph.size();
  vector<vector<int>>adj(n);
  
  for(int i=0;i<n;i++)
  {
    for(int j:graph[i])
    {
      adj[i].push_back(j);
    }
  }
  int mv;
  vector<int>vis(n,false);
  
  for(int i=0;i<n;i++)
  {
    if(vis[i] == false)
    {
      dfs(i,adj,vis);
      mv=i;
    }
  }
  
  return mv;
}
