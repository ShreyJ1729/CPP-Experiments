#include <iostream>
#include <cmath>

class Coordinate
{
    public:
        static int population;
        double x;
        double y;

        Coordinate(int x, int y)
        {
            this->x = x;
            this->y = y;
            population ++;
        }

        Coordinate()
        {
            population ++;
        }
        ~Coordinate() 
        {
            std::cout << "Destroying object" << std::endl;
            population --;
        }
        void goto_origin()
        {
            x = 0;
            y = 0;
            std:: cout << "Coordinate is now at origin";
        }

        double get_mag()
        {
            mag = sqrt(x*x + y*y);
            return mag;
        }

        void print_info()
        {
            std::cout << "(" << x << ", " << y << ")" << " with magnitude " << get_mag() << std::endl;
        }
    private:
        double mag;
};

int Coordinate::population = 0;

int main() {
    Coordinate shipA;
    shipA.x = 17.2;
    shipA.y = 24.5;
    shipA.print_info();

    Coordinate evilShip(10.4, 0.6);
    evilShip.print_info();
}