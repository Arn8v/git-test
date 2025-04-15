#include <iostream>

#include <vector>
using namespace std;

#define trv(n) for(int i = 0 ; i < n ; i++)

int main() {
  int n;
  cout << "Enter vector size : " << endl;
  cin >> n;
  vector<int> v(n);
  cout << "Enter " << n << " vector elements : " << endl;
  trv(n) {
    cin >> v[i];
  }
  int minele {INT_MAX};
  int maxele {INT_MIN};
  trv(n) {
    minele = min(minele, v[i]);
    maxele = max(maxele, v[i]);
  }
  cout << "The maximum element in the vector = " << maxele << endl;
  cout << "The minimum element in the vector = " << minele << endl;

}