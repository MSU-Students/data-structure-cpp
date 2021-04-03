#include <iostream>
#include "calculator.h"
#include "scientific.h"
using namespace std;
//==========================================
int main()
{
    
    CScientific *pCalc = new CScientific();
    //0
    // pCalc->add(4);      //5
    // pCalc->modulo(3);
    // pCalc->subtract(6); //-1
    // pCalc->multiply(2); //-2
    // pCalc->divide(3);   //-0.66
    char op;
    double operand;
    cout << "Enter Expression";
    do {
      cin >> op >> operand;
      switch (op)
      {
      case '+':
        pCalc->add(operand);
        break;
      case '-':
        pCalc->subtract(operand);
        break;
      case '*':
        pCalc->multiply(operand);
        break;
      case '/':
        pCalc->divide(operand);
        break;
      case 'u':
         pCalc->undo();
         break;
      default:
        break;
      }
    } while (op != 'q');
   
    pCalc->printHistory();

    delete pCalc;

}
