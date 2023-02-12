#include <iostream>
#include <math.h>
 // solve squared equation
// cout: num of decisions, (des1), (des2)
using namespace std;
int main() {
    double a, b, c, D,x1,x2;
    cin >> a >> b >>c;
    if(a==0&&b==0&&c==0){cout<<"3";return 0;}
    else if(a==0&&b==0&&c!=0){cout<<"0";return 0;}
    else if(a==0&&b!=0&&c==0){cout << "1 " << "0";return 0;}
    else if(a==0&&b!=0&&c!=0){cout << "1 " << -c/b;return 0;}
    
    else if(a!=0&&b==0&&c==0){cout << "1 " << "0";return 0;}
    else if(a!=0&&b!=0&&c==0){
        x1=0; x2=-b/a;
        cout<<"2 "<<min(x1,x2)<<" "<<max(x1,x2);}
    else if(a!=0&&b==0&&(-c/a<0)){cout<<"0";return 0;}
    else if(a!=0&&b!=0&&c!=0){
        D = pow(b,2)-4*a*c;
        if(D<0){cout<<"0"; return 0;}
        if(D==0){ x1=-((b)/(2*a)); cout<<"1 "<<x1;return 0;}
        if(D>0){
            x1=(sqrt(D)-b)/(2*a);
            x2=(-b-sqrt(D))/(2*a);
            cout<<"2 "<<min(x1,x2)<<" "<<max(x1,x2);
        }
        return 0;
    }
    return 0;
}
