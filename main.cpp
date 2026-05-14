#include <iostream>
using namespace std;

int main() {
string books[2][3] = {{"Dune", "1984", "The Measure"},{"Frank Herbert", "George Orwell", "Nikki Erlick"}};
bool inStock[3] = {false, true, false};
int quantity[3] = {0, 4, 0};
    
cout << "Books in Inventory" <<endl;
    for (int i=0; i<3; i++){       //changed book inventory menu into a for loop
    cout << i+1 << ". " << books[0][i] << " by " << books[1][i] << endl;}
    cout << "-------------------------------" << endl;
    
bool validBook = false; //boolean created for while loop to make sure user input matches book from inventory
do {                        //do-while loop created to make program execute statement first (user input) before checking condition
    cout << "Enter Title: ";
    string userTitle;           //user input
    getline(cin, userTitle);

    cout << "Enter Author: ";
    string userAuthor;          //user input
    getline(cin, userAuthor);
    
    for (int i = 0; i < 3; i++) { // checks if the input matches a book in the inventory
        if (userTitle == books[0][i] && userAuthor == books[1][i]) {
                validBook = true; // if user input matches element in array, bool is true and continues
                
            if (inStock[i] && quantity[i] > 0) { // if statement to checks if the book is in stock and if so how many are available
                cout << userTitle << " by " << userAuthor << " has " << quantity[i] << " books in stock." << endl;}
        else {
            cout << userTitle << " by " << userAuthor << " is out of stock." << endl; //if book isnt in stock, program ends
            return 0;} // End program
            }
        }
        if(validBook == false) { //if it is not valid
            cout << "PLEASE ENTER VALID BOOK" << endl;} //if user input does not match a book, error messages shows and loops
    }
    while (!validBook); //loop runs all while it continues to not be a valid book
    return 0;
}
