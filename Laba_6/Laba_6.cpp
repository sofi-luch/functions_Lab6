/****************************************
* ФИ: Лучникова София                   *
* Название: Функции                     *
* Вариант: 13                           *
****************************************/

#include <iostream>

using namespace std;

int countNonZeroElements(double values[], int count) {

  int result;
  result = 0;

  for (int elementIndex = 0; elementIndex < count; ++elementIndex) {
	if (values[elementIndex] != 0.0) {
	  result += 1;
	}
  }

  return result;
}

bool readArray(double values[], int count) {
  for (int elementIndex = 0; elementIndex < count; ++elementIndex) {

	if (!(cin >> values[elementIndex])) {
	  return false;
	}
	if (values[elementIndex] < -1000.0 || values[elementIndex] > 1000.0) {
	  return false;
	}

  }
  return true;
}

int main() {
  int nonZeroElemInF, nonZeroElemInG;
  int countElInF, countElInG;
  constexpr int maxSize = 100;

  cout << "countElInF = ";
  cin >> countElInF;

  cout << "countElInG = ";
  cin >> countElInG;

  if (countElInF < 1 || countElInF > maxSize || countElInG > maxSize) {
	cout << "INVALID\n";
	return 0;
  }

  double f[maxSize], g[maxSize];

  cout << "elemetsInF:\n";
  if (!readArray(f, countElInF)){
	cout << "INVALID\n";
	return 0;
  }
  cout << "elemetsInG:\n";
  if (!readArray(g, countElInG)) {
	cout << "INVALID\n";
	return 0;
  }

  nonZeroElemInF = countNonZeroElements(f, countElInF);
  nonZeroElemInG = countNonZeroElements(g, countElInG);

  cout << "nonZeroElemInF = " << nonZeroElemInF << "\n";
  cout << "nonZeroElemInG = " << nonZeroElemInG << "\n";

  return 0;
}