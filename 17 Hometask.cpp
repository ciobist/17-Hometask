#include <iostream>
#include <math.h>
using namespace std;

class Vector
{
     
private:
    
    double x = 0;
    double y = 0;
    double z = 0;

public:

    double LengthOfVector;

    void VectorLength(double _x, double _y, double _z)
    {
        x = _x;
        y = _y;
        z = _z;

        LengthOfVector = sqrt(x * x + y * y + z * z); 

    }

    void ShowVectorParameters()
    {
        cout << " X coordinate = " << x <<  "\n Y coordinate = " << y << "\n Z coordinate = " << z << "\n Vector length = " << LengthOfVector << endl;
    }
};

int main()
{
    Vector temp;
    temp.VectorLength(5, 3, 3);
    temp.ShowVectorParameters();

}