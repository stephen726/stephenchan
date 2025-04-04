#include <iostream>
using namespace std;

int main(){
	int width = 30, height = 7;
	
	// Print top border
	for (int i = 0; i < width / 2; i++) 
    cout << "* ";
	cout << endl;
	
	// Print empty lines with side borders
	for (int i = 0; i < (height - 4) / 2; i++)
    cout << "*" << string(width - 3, ' ') << "*" << endl;
    
	// Print centered messages
	cout << "*         Thank You         *" << endl;
    cout << "*     Please Come Again     *" << endl;
    
	// Print empty lines with side borders
	for (int i = 0; i < (height - 4) / 2; i++)
	cout << "*" << string(width - 3, ' ') << "*" << endl;
    
    // Print bottom border
    for (int i = 0; i < width / 2; i++) 
    cout << "* ";
	cout << endl;
    
	return 0;
}