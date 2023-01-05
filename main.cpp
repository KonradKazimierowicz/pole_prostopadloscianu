#include <iostream>
using namespace std;
class figura{

public:
    double a,b,h;
    static double objetosc(double a,double b,double h){
        static double V;
        V=a*b*h;
        return V;
    }
    static  double pole(double a,double b,double h){
        static double P;
        P = 2*(a*b+a*h+b+h);
        return P;
    }
};
//double figura::a =5;
//double figura::b =5;
//double figura::h =5;
int main() {
    cout<<figura::objetosc(5,6,3)<<endl;
    cout<<figura::pole(5,6,3);
    return 0;
}
