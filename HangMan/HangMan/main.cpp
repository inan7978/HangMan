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
int counter = 0;
int temp2 = 0;
string word; //NOLINT
char guess;
word = "widdershins";  // 1.cant have spaces 2. would be cool if it could pick from a dictionary website...
int wordLength = word.length();
cout << "Welcome to hangman!" << endl;
cout << endl;
char ArrayWordHidden[wordLength];
char ArrayWord[wordLength];
for (int i = 0; i < wordLength; ++i) {
ArrayWordHidden[i] = '_';
}
for (int i = 0; i < wordLength; ++i){
ArrayWord[i] = word.at(i);
}
cout << endl;
while(true) {
picOfMan(numErrors);
cout << endl;
for (int i = 0; i < wordLength; ++i){
cout << ArrayWordHidden[i];
}
cout << endl;
cout << "Enter a letter." << endl;
cin >> guess;
if (guess == '*'){
exit(0);
}
int temp1 = 0;
for (int i = 0; i < wordLength; ++i){
if (word.at(i) == guess){
ArrayWordHidden[i] = ArrayWord[i];
++temp1;
}
}
if (temp1 >= 1){
++numCorrect;
} else {
++numErrors;
}
for (int i = 0; i < wordLength; ++i){
if (ArrayWord[i] == ArrayWordHidden[i]){
++temp2;
}
}
if (temp2 == wordLength){
cout << "Winner!" << endl;
exit(0);
} else {
temp2 = 0;
}
}
return 0;
}
