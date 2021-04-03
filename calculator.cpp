#include <iostream>
#include "calculator.h"
using namespace std;
CCalculator::CCalculator() {
  m_fResult = 0;
  m_nCapacity = 10;
  m_nSize = 0;
  m_pHistory = new PCOperation[m_nCapacity];
}

CCalculator::~CCalculator() {
  delete [] m_pHistory;
}

void CCalculator::saveOperation(char op, double operand) {
  m_pHistory[m_nSize] = new COperation();
  m_pHistory[m_nSize]->fOperand = operand;
  m_pHistory[m_nSize]->op = op;
  m_nSize++;
}
void CCalculator::add(const double &a) {
  m_fResult = a + m_fResult;
  cout << m_fResult << endl;
  saveOperation(addOp, a);
}
void CCalculator::subtract(const double &a) {
  m_fResult = m_fResult - a;
  cout <<  m_fResult << endl;
  saveOperation(subOp, a);
}
void CCalculator::multiply(const double &a) {
  m_fResult =  a * m_fResult;
  cout << m_fResult << endl;
  saveOperation(mulOp, a);
}
void CCalculator::divide(const double &a) {
  m_fResult = m_fResult / a;
  cout << m_fResult << endl;
  saveOperation(divOp, a);
}
void CCalculator::printHistory() {
  for (int n= 0; n < m_nSize; n++) {
    cout << (char)m_pHistory[n]->op << " " << m_pHistory[n]->fOperand << endl; 
  }

}