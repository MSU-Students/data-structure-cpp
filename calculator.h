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
  char op;
  double fOperand;
};
typedef COperation  * PCOperation;
class CCalculator {
  PCOperation *m_pHistory;
  int m_nCapacity, m_nSize;
protected:
  double m_fResult;
  void saveOperation(char op, double operand);
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