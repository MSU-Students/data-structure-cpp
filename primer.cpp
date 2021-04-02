#include "calculator.h"

//==========================================
int main()
{
    
    CCalculator *pCalc = new CCalculator();
    //0
    pCalc->add(4);      //5
    pCalc->subtract(6); //-1
    pCalc->multiply(2); //-2
    pCalc->divide(3);   //-0.66

    pCalc->printHistory();
 

}
