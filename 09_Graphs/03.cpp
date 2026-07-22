https://www.geeksforgeeks.org/problems/bfs-traversal-of-graph/1

class Solution {
  public:
    //create a visited array to keep track of visited nodes
    //create a queue for BFS traversal
    //start from any node(let say 0), mark it visited and push it in the queue
    //while(!q.empty){
        //remove the front node
        //add it to the answer
        // visit all unvisited neighbours, mark them visited and push them in queue
        //return the BFS travesal output
    // }
    vector<int> bfs(vector<vector<int>> &adj) {
        // code here
        int V = adj.size();
        vecotr<int> bfsResult; // store the bfs result
        vecotr<bool> visited(V, false); //keep the track of visited nodes
        
        queue<int> q;
        q.push(0);
        visited[0] = true;
        
        while(!q.empty()){
            int front = q.front();
            q.pop();
            
            bfsResult.push_back(front);
            
            for(auto neighbour : adj[front]){
                if(!visited[neighbour]){
                    visited[neighbour] = true;
                    q.push(neighbour);
                }
            }
        }
        return bfsResult;
        
    }
};


https://www.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1


class Solution {
  public:
    //create a visited array to keep track of visited nodes
    //start DFS from node 0
    // mark current node as visited and add it to the answer
    //visit all unvisited neighbours recursively
    //when all recursive calls finish, return the DFS traversal
    void dfsHelper(int node, vector<vector<int>>& adj, vector<bool> &visited, vector<int> &result){
        visited[node] = true; //mark the current node as visited
        
        result.push_back(node);
        
        //visit all unvisited neighbours
        for(auto neighbour : adj[node]){
            if(!visited[neighbour]){
                dfsHelper(neighbour, adj, visited, result);
            }
        }
    }
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
        int V = adj.size();
        vector<bool> visited(V, false);
        
        vector<int> result;
        
        dfsHelper(0, adj, visited, result);
        return result;
        
    }
};


https://leetcode.com/problems/number-of-provinces/


class Solution {
public:
    //create a visited array
    //loop through every city
    //if city is not visited, start DFS from it
    // DFS marks all directly and indirectly connected cities as visited
    //increase the provience count after each dfs call
    //return total number of provience
    void dfsHelper(int city, vector<vector<int>>& isConnected, vector<bool> &visited){
        visited[city] = true;

        //check all possible neighbour cities
        for(int neighbour = 0; neighbour < isConnected.size(); neighbour++){
            //if cities are connected and neighbour is not visited
            if(isConnected[city][neighbour] == 1 && !visited[neighbour]){
                dfsHelper(neighbour, isConnected, visited);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size(); //totoal number of cities

        vector<bool> visited(n, false);
        int provienceCount = 0;

        for(int i = 0; i < n; i++){
            if(!visited[i]){
                dfsHelper(i, isConnected, visited);
                provienceCount++;
            }
        }
        return provienceCount;

    }
};