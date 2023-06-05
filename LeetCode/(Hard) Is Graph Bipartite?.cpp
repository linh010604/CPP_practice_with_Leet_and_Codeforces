// using graph and queue to check if node i and node j is in the same set or not
// Complexity O(N)
class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        vector<int> d ;
        queue <int> dp ;

        for (int i = 0 ; i < graph.size() ; i++) {
            d.push_back(0) ;
        }
        
        for (int i = 0 ; i < graph.size() ; i++) {
            if (d[i] == 0 && graph[i].size() > 0) {
                dp.push(i) ;
                while (! dp.empty() ){
                int x = dp.front() ;
                cout << x << " " ;
                dp.pop() ;
                for (int i = 0 ; i < graph[x].size() ; i++){
                    if (d[graph[x][i]] == 0) {
                        if (d[x] == 1 )    
                            d[graph[x][i]] = 2 ;
                        else d[graph[x][i]] = 1 ;
                        dp.push(graph[x][i]) ;
                    }
                    else {
                        if (d[x] == d[graph[x][i]])    
                            return false ;
                    }
                }
            }
                }
        }

        return true ;
    }
};
