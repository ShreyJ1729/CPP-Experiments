#include <iostream>
#include <string>


class Coordinate
{
    std::string status = "made";
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

        // friend method in public part of class. We declare it here but define outside of class.
        friend void output_status(Coordinate coord);
        friend std::ostream& operator << (std::ostream& output, Coordinate a);
};


// standalone function --> not a member function or method
void output_status(Coordinate coord)
{
    std::cout << coord.status;
}


// overload << operator for class Coordinate
// since it's a friend function we can access private variable status
std::ostream& operator << (std::ostream& output, Coordinate a)
{
    return output << "(" << a.x << ", " << a.y << ")" << " with status: " << a.status;
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

    output_status(a);
}