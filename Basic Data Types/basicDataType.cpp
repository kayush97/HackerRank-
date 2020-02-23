#include <iostream>
#include <cstdio>
#include<iomanip>
using namespace std;

int main() {
    int a; long b; char c; float d; double e;
    //input
    cin >> a >> b >> c >> d >> e ;
    //output
    cout << a << "\n" << b << "\n" << c << "\n";
    cout << setprecision(9) << d <<endl;
    cout << setprecision(15) << e <<endl;
    return 0;
}
