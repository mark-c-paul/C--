#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

const int SIZE = 100;
const double PI = 3.141592653589;
int main()
{
   double x[SIZE];                                            
   double y[SIZE];                                            
   int count;                                       
   
   std::cin >> count;                                  
   
   for(int i=0; i<count; i++){
      std::cin >> x[i];
      std::cin >> y[i];
   }
   
   for(int i=0; i<count; i++){    
       double radius, angle;
       radius = sqrt(x[i] * x[i] + y[i] * y[i]);      
       angle = atan2(y[i],x[i]) * (180 / PI);
       if (angle < 0) angle = 360 + angle;
       std::cout << std::fixed;
       std::cout << std::setprecision(2);
       cout << radius << " " << angle << "\n"; 
    }
    return 0;
}