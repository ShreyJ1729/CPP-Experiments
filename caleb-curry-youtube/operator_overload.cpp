#include <iostream>
#include <string>

class Coordinate
{
    public:
        int x = 10;
        int y = 10;
        Coordinate operator + (Coordinate b)
        {
            Coordinate new_coord;
            new_coord.x = x + b.x;
            new_coord.y = y + b.y;
            return new_coord;
        }

        bool operator == (Coordinate b)
        {
            if (x == b.x && y == b.y)
            {
                return true;
            }
            return false;
        }
};

std::ostream& operator << (std::ostream& output, Coordinate a)
{
    return output << "(" << a.x << ", " << a.y << ")";
}

int main()
{
    Coordinate a, b;

    Coordinate c = a + b;

    // this next line is without << operator overloading
    // std::cout << "(" << c.x << ", " << c.y << ")" << std::endl;

    // this is with << operator overloading
    std::cout << c << std::endl;
    
    std::cout << std::boolalpha << (a == b) << std::endl;

    std::cout << a << std::endl;
}