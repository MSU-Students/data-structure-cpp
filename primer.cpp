#include <iostream>
#include <string>
using namespace std;
class CCalculator {
public:
  void add(const int &a, int b);
  void subtract(int a, int b);
  void multiply(const int a, const int b);
  void divide(double a, double b);
};
//==========================================
int main() {
  CCalculator calc;
  int nX = 4, nY = 6;
  calc.add(nX, nY);
  calc.subtract(nX, nY);
  calc.multiply(nX, nY);
  calc.divide(nX, nY);
}

void CCalculator::add(const int &a,int b) {
  cout << a + b << endl;
}
void CCalculator::subtract(int a, int b) {
  cout << a - b << endl;
  a--;
}
void CCalculator::multiply(const int a, const int b) {
  cout << a * b << endl;
}
void CCalculator::divide(double a, double b) {
  cout << a / b << endl;
}