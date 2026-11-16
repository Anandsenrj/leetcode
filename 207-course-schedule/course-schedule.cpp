class Solution {
public:
    bool canFinish(int v, vector<vector<int>>& prerequisites) {
        //step 1 initialize graph
        vector<vector< int>> graph(v);
        // step 2 a come after b 
        for(auto &p : prerequisites){
            int a = p[0];
            int b = p[1];
            graph[b].push_back(a);

        }

        //step 3 calculate indegree

        vector<int> indegree(v,0);
        for(int i=0; i<v; i++){
            for(auto neighbour : graph[i]){
                indegree[neighbour]++;
            }
        }

       //  step 4 define queue
       queue<int> qu;
       for(int i=0; i<v; i++){
        if(indegree[i] == 0){
            qu.push(i);
        }
       }
       // Kahn's algorithm
       int count = 0;
       while(not qu.empty()){
        int node = qu.front();
        qu.pop();
        count++;
        for(auto neighbour : graph[node]){
            indegree[neighbour]--;
            if(indegree[neighbour] == 0){
                qu.push(neighbour);
            }
        }
       }
       return count == v;
        
    }
};