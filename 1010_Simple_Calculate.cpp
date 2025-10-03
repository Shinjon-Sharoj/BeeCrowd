#include <iostream>
#include <iomanip> 
using namespace std; 
int main() {
    int CP1, UP1;
    int CP2, UP2;
    float PP1,PP2;
    
    cin>>CP1>>UP1>>PP1;
    cin>>CP2>>UP2>>PP2;
    cout<<fixed<<setprecision(2);
    cout<< "VALOR A PAGAR: R$ "<< (PP1*UP1) + (PP2*UP2)<<endl;
 
    return 0;
}