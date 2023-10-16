//
//  main.cpp
//  ginac_impl
//
//  Created by jiangsl on 2021/9/8.
//

#include <iostream>

//#include <iostream>
//#include <vector>
//#include <unordered_map>
//#include "ginac.h"
#include <ginac/ginac.h>
using namespace std;
using namespace GiNaC;

struct cofficient {
private:
    struct parabola {
        
    };
    friend parabola parabolar ;
    
    shared_ptr<std::size_t>size;
    
    //int a = 100;
    //cofficient of the parabolar is zero one quarter
    //1231
    //12312123
};

void polynomial_expression(){

    symbol x("x"), y("y");
    
    ex PolyInp = 4*pow(x,3)*y + 5*x*pow(y,2) + 3*y- pow(x+y,2) + 2*pow(y+2,2) - 8;
//    4*x^3*y
    ex Poly = PolyInp.expand();
    
    for (int i=Poly.ldegree(x);i<=Poly.degree(x);++i)
    {
        cout << "The x^" << i << "-coefficient is "<< Poly.coeff(x,i) << endl;
    }
    cout << "As polynomial in y: "<< Poly.collect(y) << endl;
}


int main(int argc, const char * argv[]) {
    // insert code here...
//    std::cout << "Hello, World!\n";
    polynomial_expression();
    return 0;
}
