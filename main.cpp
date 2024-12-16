#include <iostream>
#include <limits> 

using namespace std;

int main() {

    //1 задание
  int num;
  long long sum = 0;
  int max_num = numeric_limits<int>::min();
  int max_index = -1;
  int current_index = 1;

  cout << "Введите последовательность целых чисел (введите 0 для завершения):" << endl;
  cin >> num;

  while (num != 0) {
    if (num < 0 && num % 7 == 0) {
      sum += num;
      if (num > max_num) {
        max_num = num;
        max_index = current_index;
      }
    }
    current_index++;
    cin >> num;
  }

  if (max_index == -1) {
    cout << "В последовательности нет отрицательных чисел, кратных 7." << endl;
  } else {
    cout << "Сумма отрицательных чисел, кратных 7: " << sum << endl;
    cout << "Наибольшее отрицательное число, кратное 7: " << max_num << endl;
    cout << "Номер наибольшего числа в последовательности: " << max_index << endl;
  }

  #include <iostream>



    //2 задание 

  long long n;
  cin >> n;

  long long product = 1;
  if (n == 0) { //Случай, когда n=0
    product = 0; 
  } else {
    while (n > 0) {
      product *= (n % 10);
      n /= 10;
    }
  }

  cout << product << endl;
  return 0;
}

