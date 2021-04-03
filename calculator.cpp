#include <iostream>
#include "calculator.h"
using namespace std;
CCalculator::CCalculator()
{
  m_fResult = 0;
}

CCalculator::~CCalculator()
{
}

void CCalculator::add(const double &a, bool saveHistory)
{
  m_fResult = a + m_fResult;
  cout << m_fResult << endl;
  if (saveHistory)
    insert(addOp, a);
}
void CCalculator::subtract(const double &a, bool saveHistory)
{
  m_fResult = m_fResult - a;
  cout << m_fResult << endl;
  if (saveHistory)
    insert(subOp, a);
}
void CCalculator::multiply(const double &a, bool saveHistory)
{
  m_fResult = a * m_fResult;
  cout << m_fResult << endl;
  if (saveHistory)
    insert(mulOp, a);
}
void CCalculator::divide(const double &a, bool saveHistory)
{
  m_fResult = m_fResult / a;
  cout << m_fResult << endl;
  if (saveHistory)
    insert(divOp, a);
}
void CCalculator::undo()
{
  PCOperation pLastItem;
  if (getLast(pLastItem))
  {
    switch (pLastItem->op)
    {
    case addOp:
      subtract(pLastItem->fOperand, false);
      break;
    case subOp:
      add(pLastItem->fOperand, false);
      break;
    case mulOp:
      divide(pLastItem->fOperand, false);
      break;
    case divOp:
      multiply(pLastItem->fOperand, false);
      break;    
    }
    removeLast();
  }
}
