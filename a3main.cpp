 #include <iostream>
 #include <cmath>
 #include<iomanip>
 
 using namespace std;
 
 int main () {
 	
// Introducing variables
float a, b, c;
float x, x1, x2;

// Asking user for te values for a, b and c
cout << "Enter values for a, b, and c: ";
cin >> a >> b >> c ;
cout << "\n";

// Stating constant as the discriminant, imaginary numbers portion and real root
const float DISC = b*b - (4*a*c);
const float IMAGINARY = sqrt(-DISC)/(2*a);
const float REAL = -b / (2*a);

// Comparing if discriminant is bigger than 0 and if a is not equal to 0
if (DISC > 0 && a != 0 ) {
	
//Paranthesis to show we want that first before the rest of the equation
	x1 = (-b + sqrt(DISC)) / (2*a);
	x2 = (-b - sqrt(DISC)) / (2*a);
	
// Printing out results and the type of case
	cout << "Discriminant is bigger than 0, this answer is real.\n" << endl;
	cout << "x1 = " << x1 << endl;
	cout << "x2 = " << x2 << endl;
}

// a = 0 prints out linear formula
else if (a == 0){
	cout << "This is not a quadratic formula, this is a linear formula.\n" << endl;
	cout << "Please use bx + c = 0 to solve this." << endl;
}

/* Discriminant = 0 meaning that roots are real and equal
*  the only thing remaning on the formula is -b / (2*a)
*/ 
else if (DISC == 0 && a != 0 ) {
// one solution
	cout << "The roots are real and equal." << endl;	
	cout << "x = " << REAL << endl;
	
}

else {
// Real part and imaginary part combined to provide complex answer 
    cout << "Discriminant is less than 0, this answer is complex"  << endl;
// Rounding up to 3 digits for readability 
    cout << "x1 = " << REAL << " + " << setprecision(4) << IMAGINARY << "i" << endl;
    cout << "x2 = " << REAL << " - " << setprecision(4) << IMAGINARY << "i" << endl;
    
   
}

 return 0;	
}
