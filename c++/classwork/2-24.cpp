#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;
using namespace std;
void printArray(int myArray[], int howMuchDataDoYouHave);

const int SIZE = 10;

int main()
{
int x[SIZE];
int howFull = 0;
int number;

cout << "I'm going to ask you for " << SIZE << " numbers.  Type -1 to stop." << endl;
cout <<"Number : ";
cin >> number;



while (!cin.fail()  && number != -1 && howFull < SIZE)
{
x[howFull] = number;
howFull++;
cout <<"Number : ";
cin >> number;
}

printArray(x, howFull);

cout << "Give me a location and I'll check the absolute location " << endl;

int location;
cin >> location;
cout << abs(x[location]) <<endl;

return 0;
}

void printArray(int myArray[], int howMuchDataDoYouHave)
{

for (int i = 0; i<howMuchDataDoYouHave; i++)
cout << "x[" << i << "] = " << myArray[i] << endl;
}
