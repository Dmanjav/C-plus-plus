#ifndef PUNTO_H
#define PUNTO_H
using namespace std;

class Point{
    private:
        double x{};
        double y{};
    public:
        Point();
        Point(double x1, double x2);

        double getX();
        double getY();
        void setX(double x1);
        void setY(double y1);
        double distance(Point p1);
        Point suma(Point p1);
};
#endif
