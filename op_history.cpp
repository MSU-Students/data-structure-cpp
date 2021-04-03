#include <iostream>
#include "op_history.h"
using namespace std;

COpHistory::COpHistory() {
  m_nCapacity = 10;
  m_nSize = 0;
  m_pHistory = new PCOperation[m_nCapacity];
}
COpHistory::~COpHistory() {
  for (int nIndex = 0; nIndex < m_nSize; nIndex++) {
    PCOperation pItem = m_pHistory[nIndex];
    delete pItem;
  }
  delete [] m_pHistory;
}
void COpHistory::insert(char op, double operand){
  m_pHistory[m_nSize] = new COperation();
  m_pHistory[m_nSize]->fOperand = operand;
  m_pHistory[m_nSize]->op = op;
  m_nSize++;
}
void COpHistory::printHistory() {
  for (int n= 0; n < m_nSize; n++) {
    cout << (char)m_pHistory[n]->op << " " << m_pHistory[n]->fOperand << endl; 
  }

}