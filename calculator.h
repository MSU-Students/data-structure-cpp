#ifndef CALC_H
#define CALC_H
#include "op_history.h"
enum CalcOper {
  addOp = '+',
  subOp = '-',
  mulOp = '*',
  divOp = '/'
};

class CCalculator: public COpHistory  {
protected:
  double m_fResult;
public:
  CCalculator();
  ~CCalculator();
  void add(const double &a);
  void subtract(const double &a);
  void multiply(const double &a);
  void divide(const double &a);
};


#endif