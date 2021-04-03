#include <iostream>
#include "op_history.h"
using namespace std;

COpHistory::COpHistory()
{
  m_pHead = NULL;
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
  PCOperation pCursor = m_pHead;
  while (pCursor != NULL && pCursor->m_pNext != NULL)
  {
    pCursor = pCursor->m_pNext;
  }
  pItem = pCursor;
  return pCursor != NULL;
}

void COpHistory::removeLast()
{
  PCOperation pLastItem;
  if (getLast(pLastItem)) {
     PCOperation pPrevious = pLastItem->m_pPrev;
     if (pPrevious) {
       pPrevious->m_pNext = NULL;
       delete pLastItem;
     } else {
       delete pLastItem;
       m_pHead = NULL;
     }
  }  
}