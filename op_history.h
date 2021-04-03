#ifndef OP_HISTORY_H
#define OP_HISTORY_H

class COperation {
  public:
  char op;
  double fOperand;
};
typedef COperation  * PCOperation;

class COpHistory {
  PCOperation *m_pHistory;
  int m_nCapacity, m_nSize;
  public: 
    COpHistory();
    ~COpHistory();
    void insert(char op, double operand);
    void printHistory();
};

#endif