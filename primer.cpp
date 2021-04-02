#include "calculator.h"
#include "scientific.h"
//==========================================
int main()
{
    
    CScientific *pCalc = new CScientific();
    //0
    pCalc->add(4);      //5
    pCalc->modulo(3);
    pCalc->subtract(6); //-1
    pCalc->multiply(2); //-2
    pCalc->divide(3);   //-0.66
    
    pCalc->printHistory();
 

}
