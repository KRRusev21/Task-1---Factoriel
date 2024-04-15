#include <iostream>
using namespace std;
class Fact {
private:
    int number;
public:
    Fact(int num) {
        number = num;
    }
    int calculate() {
        int result = 1;
        for (int i = 1; i <= number; ++i) {
            result *= i;
        }
        return result;
    }
};
int main() {
    int num;
    cin >> num;
    Fact factObj(num);
    int factorial = factObj.calculate();
    cout << factorial << endl;
}