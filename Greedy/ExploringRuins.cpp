#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    
    int i = 0, n = s.size();
    
    while(i < n){
        if(s[i] == '?'){
            if(i-1 >= 0 && s[i-1] == 'a'){
                s[i] = 'b';
            }
            else if(i+1 < n && s[i+1] == 'a'){
                s[i] = 'b';
            }
            else{
                s[i] = 'a';
            }
        }
        i++;
    }
    
    cout << s << endl;
}
