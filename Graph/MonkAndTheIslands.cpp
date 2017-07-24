#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <utility>

using namespace std;

struct temp{
    int curr;
    int moves;
};

int main()
{
    int test;
    cin >> test;
    
    while(test--){
        int n, m;
        cin >> n >> m;
        
        vector<vector<int> > vec(n+1, vector<int>());
        
        for(int i = 0; i < m; i++){
            int f, s;
            cin >> f >> s;
            vec[f].push_back(s);
            vec[s].push_back(f);
        }
        
        map<pair<int, int>, bool > mp;
        
        queue<temp> q;
        temp t;
        t.curr = 1;
        t.moves = 0;
        
        q.push(t);
        
        while(q.front().curr != n){
            vector<int> t(vec[q.front().curr]);
            for(int i = 0; i < t.size(); i++){
                pair<int, int> p(q.front().curr, t[i]);
                if(mp.find(p) == mp.end()){
                    mp[p] = true;
                    temp tt;
                    tt.curr = t[i];
                    tt.moves = q.front().moves + 1;
                    q.push(tt);
                }
            }
            q.pop();
        }
        
        cout << q.front().moves << endl;
    }
    
    return 0;
}
