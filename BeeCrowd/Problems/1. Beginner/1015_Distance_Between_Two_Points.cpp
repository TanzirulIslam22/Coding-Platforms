#include <bits/stdc++.h>
using namespace std;
int main()
{
    double x1, x2, y1, y2, distance;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    cout << fixed << setprecision(4);
    cout << distance << endl;
}