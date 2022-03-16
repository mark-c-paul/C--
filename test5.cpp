#include <iostream>
#include <iomanip>

using namespace std;


int main(){
    const int SIZE = 1000;
    double x[SIZE], y[SIZE], area;
    int num, j;
    cin >> num;
    for(int i=0; i<num; i++){
        cin >> x[i];
        cin >> y[i];
    }
    j = num - 1;
    for(int i=0; i<num; i++){
        area += (x[j] + x[i]) * (y[j] - y[i]);
        j = i;
    }
    std::cout << fixed;
    std::cout <<setprecision(2);
    cout << abs(area/2.0);
    return 0;
}