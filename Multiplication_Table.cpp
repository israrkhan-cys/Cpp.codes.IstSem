#include <iostream>

using namespace std;

int main() {
  int start;
  int end;

  
  cout << "Enter the starting number: ";
  cin >> start;
  cout << "Enter the ending number: ";
  cin >> end;


  cout << "Multiplication Table from " << start << " to " << end << ":" << endl;
  cout << "    ";
  for (int i = start; i <= end; i++) {
    cout << i << "   ";
  }
  cout<<endl;

  int totalSum = 0;
  for (int i = start; i <= end; i++) {
    cout << i << "    ";
    int rowSum = 0;
    for (int j = start; j <= end; j++) {
      int product = i * j;
      cout << product << "  ";
      rowSum += product;
    }
    totalSum += rowSum;
    cout << " | " << rowSum << endl;
  }

  cout << "-------------------------" << endl;
  cout << "Total: " << totalSum << endl;

  return 0;
}
