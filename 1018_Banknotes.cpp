#include <iostream>
using namespace std;
 
int main() {
    
    int N;
    cin>>N;
    cout<<N<<endl;
    int notes[]={100,50,20,10,5,2,1};
    for(int i=0; i<7; i++)
    {
        int x=N/notes[i];
        cout<<x<<" nota(s) de R$ "<<notes[i]<<",00"<<endl;
        N%=notes[i];
    }
 
    return 0;
}