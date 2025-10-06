#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    
    int x,y;
    cin>>x>>y;
    
    cout<<fixed<<setprecision(3);
    cout<< double (x*y)/12<<endl;
 
    return 0;
}