#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Point
{
private:
    double x, y;

public:
    Point();                     // default constructor
    Point(double x, double y);   // another constructor
    Point(const Point &p);       // copy constructor
    double getX() const;         // get X value
    double getY() const;         // get Y value
    double dist(const Point &p); // get the distance with another point
};

Point::Point()
{
    x = 0;
    y = 0;
}
Point::Point(double x, double y)
{
    this->x = x;
    this->y = y;
}
Point::Point(const Point &p)
{
    x = p.x;
    y = p.y;
}
double Point::getX() const
{
    return x;
}
double Point::getY() const
{
    return y;
}
double Point::dist(const Point &p)
{
    return sqrt((x - p.x) * (x - p.x) + (y - p.y) * (y - p.y));
}

int main()
{
    // freopen("points.inp", "r", stdin);
    // freopen("points.out", "w", stdout);
    ll n;
    cin >> n;
    vector<Point> a(n);
    double x, y;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        a[i] = Point(x, y);
    }
    double maxDist = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i].dist(a[j]) << " ";
        }
        cout << endl;
    }

    return 0;
}