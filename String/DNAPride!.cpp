#include <iostream>
using namespace std;

char complement(char c){
    if(c == 'A'){
        return 'T';
    }
    else if(c == 'T'){
        return 'A';
    }
    else if(c == 'G'){
        return 'C';
    }
    return 'G';
}

int main()
{
    int test;
    cin >> test;
    
    while(test--){
        int n, i = 0;
        cin >> n;
        
        string s, ans = "";
        cin >> s;
        
        while(i < n){
            if(!(s[i] == 'A' || s[i] == 'T' || s[i] == 'G' || s[i] == 'C')){
                ans = "Error RNA nucleobases found!";
                break;
            }
            ans += complement(s[i]);
            i++;
        }
        
        cout << ans << endl;
    }
    
    return 0;
}
