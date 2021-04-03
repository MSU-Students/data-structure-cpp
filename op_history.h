#ifndef OP_HISTORY_H
#define OP_HISTORY_H

class COperation;
typedef COperation  * PCOperation;
class COperation {
  public:
  char op = 0;
  double fOperand = 0;
  PCOperation m_pNext = 0;
};

class COpHistory {
  PCOperation m_pHead;

  public: 
    COpHistory();
    ~COpHistory();
    void insert(char op, double operand);
    void printHistory();
    bool getLast(PCOperation &item);
    void removeLast();
};

#endif