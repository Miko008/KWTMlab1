#include <iostream>
#include <cmath>

#ifdef USE_TRIGONOMETRY_DEGREE
#include "trygonometria.h"
#endif

int main()
{
    //std::cout<<"hello world\n";
    double result;
    
#ifdef USE_TRIGONOMETRY_DEGREE
    result = degreemath::cos(45.0);
#else
    result = cos(M_PI/4.0);
#endif
    
    std::cout<<result<<std::endl;
    
    
    return 0;
}
