#include <iostream>

using namespace std;

int main()
{
    int test;
    cin >> test;
    
    while(test--){
        int n, val = 0;
        cin >> n;
        
        // If the sum of all the sizes is divisible by then ans is Yes
        for(int i = 0; i < n; i++){
            int num;
            cin >> num;
            val = val ^ num; 
        }    
        
        if(val%2){
            cout << "No";
        }
        else{
            cout << "Yes";
        }
        
        cout << endl;
    }
    
    return 0;
}
