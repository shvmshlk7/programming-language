#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    while (t--)
    {
        int a,b,a1,b1,a2,b2;
        cin>>a>>b>>a1>>b1>>a2>>b2;
        
        int max_ab = max(a,b);
        int min_ab = min(a,b);
        
        int max_a1b1 = max(a1,b1);
        int min_a1b1 = min(a1,b1);
        
        int max_a2b2 = max(a2,b2);
        int min_a2b2 = min(a2,b2);
        
        if (max_ab==max_a1b1 && min_ab==min_a1b1)
        {
            cout<<1<<endl;
        }
        else if (max_ab==max_a2b2 && min_ab==min_a2b2)
        {
            cout<<2<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
    }
	// your code goes here
	return 0;
}
