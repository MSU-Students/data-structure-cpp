#include "scientific.h"

void CScientific::modulo(const int &a) {
  m_fResult = ((int)m_fResult) % a;
  saveOperation((CalcOper)(char)modOp, (double)a);
}
 