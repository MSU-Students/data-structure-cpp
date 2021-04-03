#include <iostream>
#include "op_history.h"
using namespace std;

COpHistory::COpHistory()
{
  m_pHead = NULL;
  m_pTail = NULL;
}
COpHistory::~COpHistory()
{
  PCOperation pLastItem;
  while (getLast(pLastItem)) {
    removeLast();
  }
}
void COpHistory::insert(char op, double operand)
{
  PCOperation newItem = new COperation;
  newItem->op = op;
  newItem->fOperand = operand;
  if (m_pHead == NULL)
  {
    m_pHead = newItem;
  }
  else
  {
    PCOperation pLastItem;
    getLast(pLastItem);
    pLastItem->m_pNext = newItem;
    newItem->m_pPrev = pLastItem;
  }
  m_pTail = newItem;
}
void COpHistory::printHistory()
{
  PCOperation pCursor = m_pHead;
  while (pCursor != NULL)
  {
    cout << (char)pCursor->op << " " << pCursor->fOperand << endl;
    pCursor = pCursor->m_pNext;
  }
}

bool COpHistory::getLast(PCOperation &pItem)
{  
  pItem = m_pTail;
  return m_pTail != NULL;
}

void COpHistory::removeLast()
{
  PCOperation pLastItem;
  if (getLast(pLastItem)) {
     PCOperation pPrevious = pLastItem->m_pPrev;
     if (pPrevious) {
       pPrevious->m_pNext = NULL;
       delete pLastItem;
       m_pTail = pPrevious;
     } else {
       delete pLastItem;
       m_pHead = NULL;
       m_pTail = NULL;
     }
  }  
}