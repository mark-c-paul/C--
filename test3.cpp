#include <string>
#include <iostream>

using namespace std;

int circle(int x1, int y1, int r1, int x2, int y2, int r2)
{
    int distanceSqared = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
    int radiusSquared = (r1 + r2) * (r1 + r2);
    if (distanceSqared > radiusSquared)
        return -1;
    else
        return 0;
}
 
int main()
{
    int x1, y1, x2, y2, r1, r2;
    
    std::cin >> x1;
    std::cin >> y1;
    std::cin >> r1;
    std::cin >> x2;
    std::cin >> y2;
    std::cin >> r2;

    int intersection = circle(x1, y1, r1, x2, y2, r2);

    if (intersection < 0)
        cout << "N0";
    else
        cout << "YES";
    return 0;
}