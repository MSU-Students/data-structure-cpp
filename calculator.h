#ifndef CALC_H
#define CALC_H
enum CalcOper {
  addOp = '+',
  subOp = '-',
  mulOp = '*',
  divOp = '/'
};
class COperation {
  public:
  CalcOper op;
  double fOperand;
};
class CCalculator {
  double m_fResult;
  COperation  *m_pHistory;
  int m_nCapacity, m_nSize;
  void saveOperation(CalcOper op, double operand);
public:
  CCalculator();
  ~CCalculator();
  void add(const double &a);
  void subtract(const double &a);
  void multiply(const double &a);
  void divide(const double &a);
  void printHistory();
};


#endif