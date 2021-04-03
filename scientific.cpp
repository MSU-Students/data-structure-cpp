#include "scientific.h"

void CScientific::modulo(const int &a) {
  m_fResult = ((int)m_fResult) % a;
  insert((char)modOp, (double)a);
}
 