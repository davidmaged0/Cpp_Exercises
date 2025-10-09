
#include <iostream>

using namespace std;
/*example using enum */
enum Level {
  LOW = 1,
  MEDIUM, // 2
  HIGH  // 3
};

int main() {
  enum Level myVar = LOW;

  switch (myVar) {/* 1 */
    case 1:
      cout << "Low Level";
      break;
    case 2:
      cout << "Medium level";
      break;
    case 3:
      cout << "High level";
      break;
  }
  return 0;
}