#include <iostream>
#include <map>

using namespace std;

int main()
{
    int n, k;
    cin >> n;
    
    map<int, int> m;
    
    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        
        if(m.find(num) == m.end()){
            m[num] = 1;
        }
        else{
            m[num]++;
        }
    }
    
    cin >> k;
    
    map<int, int> :: iterator it = m.begin();
    
    while(it != m.end()){
        if(it->second == k){
            cout << it->first << endl;
            break;
        }
        it++;
    }
    
    return 0;
}
