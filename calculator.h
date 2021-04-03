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
  void add(const double &a, bool saveHistory = true);
  void subtract(const double &a, bool saveHistory = true);
  void multiply(const double &a, bool saveHistory = true);
  void divide(const double &a, bool saveHistory = true);
  void undo();
};


#endif