#include <iostream>
#include "calculator.h"
using namespace std;
CCalculator::CCalculator() {
  m_fResult = 0;
}

CCalculator::~CCalculator() {
  
}

void CCalculator::add(const double &a) {
  m_fResult = a + m_fResult;
  cout << m_fResult << endl;
  insert(addOp, a);
}
void CCalculator::subtract(const double &a) {
  m_fResult = m_fResult - a;
  cout <<  m_fResult << endl;
  insert(subOp, a);
}
void CCalculator::multiply(const double &a) {
  m_fResult =  a * m_fResult;
  cout << m_fResult << endl;
  insert(mulOp, a);
}
void CCalculator::divide(const double &a) {
  m_fResult = m_fResult / a;
  cout << m_fResult << endl;
  insert(divOp, a);
}
