#include <iostream>

using namespace std; 

int main() {
  const int c_price(2);
  const int m_price(3);
  const int f_price(4);

  cout << "How much money do I have?" << endl;

  int sum;
  cin >> sum;

  int books(sum * 3/4);
  int budget(sum - books);
  int e_budget(budget / 3);

  cout << sum << ", " << budget << ", " << endl;

  int c_rest(e_budget % c_price);
  int coffes((e_budget - c_rest) / c_price);

  int m_rest(e_budget % m_price);
  int metro((e_budget - m_rest) / m_price);

  int f_rest(e_budget % f_price);
  int flash((e_budget - f_rest) / f_price);

  int rest(budget - (coffes * c_price) - (metro * m_price) - (flash * f_price));

  cout << "c_rest: " << c_rest << endl;
  cout << "m_rest: " << m_rest << endl;
  cout << "f_rest: " << f_rest << endl;

  cout << "coffes: " << coffes << endl;
  cout << "metros: " << metro << endl;
  cout << "flash: " << flash << endl;
  cout << "rest: " << rest << endl;

  return 0;
}