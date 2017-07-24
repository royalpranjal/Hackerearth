#include <iostream>
#include <map>

using namespace std;

int main()
{
    int test;
    cin >> test;
    
    while(test--){
        int e, ans = 0;
        cin >> e;
        
        map<int, bool> m;
        
        for(int i = 0; i < e; i++){
            int f, s;
            cin >> f >> s;
            if(m.find(f) == m.end()){
                ans++;
                m[f] = true;
            }
            if(m.find(s) == m.end()){
                ans++;
                m[s] = true;
            }
        }
        
        cout << ans << endl;
    }
    
    return 0;
}
