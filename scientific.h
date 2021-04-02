#ifndef SCIENTIFIC_H
#define SCIENTIFIC_H
#include "calculator.h"
enum SciCalcOper {
  modOp = '%'
};
class CScientific: public CCalculator {
  public:
  void modulo(const int &a);
};

#endif