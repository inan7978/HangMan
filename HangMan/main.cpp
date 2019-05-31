// Copyright Inan Ismailov 2019
#include <iostream>
#include <cstdlib>
#include <array>
using std::cin;
using std::string;
using std::cout;
using std::endl;
void picOfMan(int a) {
switch (a) {
case 0: cout << "  ---------------" << endl;
cout << "  |             |" << endl;
cout << "  |              " << endl;
cout << "  |              " << endl;
cout << "  |              " << endl;
cout << "  |              " << endl;
cout << "  |              " << endl;
cout << "  |              " << endl;
cout << "  |              " << endl;
cout << "  |              " << endl;
cout << "  |_____________________" << endl;
cout << endl;
break;
case 1: cout << "  ---------------" << endl;
cout << "  |             |" << endl;
cout << "  |           -----" << endl;
cout << "  |          |     |" << endl;
cout << "  |           -----" << endl;
cout << "  |              " << endl;
cout << "  |              " << endl;
cout << "  |              " << endl;
cout << "  |              " << endl;
cout << "  |              " << endl;
cout << "  |_____________________" << endl;
cout << endl;
break;
case 2: cout << "  ---------------" << endl;
cout << "  |             |" << endl;
cout << "  |           -----" << endl;
cout << "  |          |     |" << endl;
cout << "  |           ----- " << endl;
cout << "  |             |" << endl;
cout << "  |             |" << endl;
cout << "  |             |" << endl;
cout << "  |              " << endl;
cout << "  |              " << endl;
cout << "  |_____________________" << endl;
cout << endl;
break;
case 3: cout << "  ---------------" << endl;
cout << "  |             |" << endl;
cout << "  |           -----" << endl;
cout << "  |          |     |" << endl;
cout << "  |           ----- " << endl;
cout << "  |             |~~~" << endl;
cout << "  |             |" << endl;
cout << "  |             |" << endl;
cout << "  |              " << endl;
cout << "  |              " << endl;
cout << "  |_____________________" << endl;
cout << endl;
break;
case 4: cout << "  ---------------" << endl;
cout << "  |             |" << endl;
cout << "  |           -----" << endl;
cout << "  |          |     |" << endl;
cout << "  |           ----- " << endl;
cout << "  |          ~~~|~~~" << endl;
cout << "  |             |" << endl;
cout << "  |             |" << endl;
cout << "  |              " << endl;
cout << "  |              " << endl;
cout << "  |_____________________" << endl;
cout << endl;
break;
case 5: cout << "  ---------------" << endl;
cout << "  |             |" << endl;
cout << "  |           -----" << endl;
cout << "  |          |     |" << endl;
cout << "  |           ----- " << endl;
cout << "  |          ~~~|~~~" << endl;
cout << "  |             |" << endl;
cout << "  |             |__" << endl;
cout << "  |                |" << endl;
cout << "  |                |" << endl;
cout << "  |_____________________" << endl;
cout << endl;
break;
case 6: cout << "  ---------------" << endl;
cout << "  |             |" << endl;
cout << "  |           -----" << endl;
cout << "  |          |     |" << endl;
cout << "  |           ----- " << endl;
cout << "  |          ~~~|~~~" << endl;
cout << "  |             |" << endl;
cout << "  |           __|__" << endl;
cout << "  |          |     |" << endl;
cout << "  |          |     |" << endl;
cout << "  |_____________________" << endl;
cout << "Better luck next time!" << endl;
exit(0);
break;
}
}
int main(int argc, const char* argv[]) {
int numErrors = 0;
int numCorrect = 0;
int ranNum = 0;
string word = ""; //NOLINT
char guess;
int yeet = 0;
if (ranNum == 0) {
word = "widdershins";  // 1.cant have spaces 2. would be cool if it could pick from a dictionary website...
}
int wordLength = word.length();
cout << "Welcome to hangman!" << endl;
cout << endl;
char ArrayWord[wordLength];
for (int i = 0; i < wordLength; ++i) {
ArrayWord[i] = '_';
}
cout << endl;
while(numErrors < 7) {
picOfMan(numErrors);
for (int i = 0; i < wordLength; ++i) {
cout << ArrayWord[i];
}
cout << endl;
cout << endl;
cout << "Enter a letter." << endl;
cin >> guess;
for (int i = 0; i < wordLength; ++i) {
if (word.at(i) == guess) {
ArrayWord[i] = guess;
++yeet;
}
}
if (yeet > 0) {
++numCorrect;
} else {
++numErrors;
}
for (int i = 0; i < wordLength; ++i) {
cout << ArrayWord[i];
}
cout << endl;
yeet = 0;
if ((numCorrect + 1) >= wordLength) {
cout << "You got it! Good game." << endl;
exit(0);
}
}
return 0;
}
