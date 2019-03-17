#include <iostream>
#include <iomanip>
using namespace std;

int two_three(float a,float b){
   float c;
   c=a/b;
   if(a<=1000000){
      cout.setf(ios::fixed);
      cout<<setprecision(4);
      cout<<int(a)<<'/'<<int(b)<<'='<<c<<endl;
      return two_three(b,a+b);
   }
}

int main() {
two_three(2,3);
    return 0;
}
