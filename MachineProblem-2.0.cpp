#include <iostream>
#include <iomanip>
#include <conio.h>
#include <cmath>

using namespace std;


int main() 
{


	double rad, height, length, width; 
	char shape, restart;
	const double pi = 3.14159265359;
	double lateralA;//Cone Functions
	
	do
	{
	
	cout << "==========================================================================="<<endl;
	cout << "====================== Geometric Shape Calculator ========================= by: Anisco, de Jesus, Santos"<<endl;
	cout << "=========================================================================== Group 8"<<endl;
	cout << endl << "C = Cylinder		P = Pyramid		S = Sphere\n" << endl;
	cout << "Enter desired shape <C, P, S>: " << endl;
	cin >> shape;
	
		if (shape == 'C' || shape == 'c' || shape == 'P' || shape == 'p' || shape == 'S' || shape == 's')
		;
		else
		{
			cout << "\nSorry but your input is INVALID\nPlease relaunch the program.";
			break;
		}
	
	cout << endl;

	cout << fixed << showpoint << setprecision(2);
	
	switch (shape)
	{
		case 'C':
		case 'c':
		{	
			cout << "You have chosen to calculate for the the Cone.\n";		//Volume, Lateral Area, Base Area, and Surface Area

			cout << "Enter the radius:" << endl;
			cin >> rad;
			
			cout << "\nEnter the height:" << endl;
			cin >> height;
			
			double Cvolume = pi * (rad*rad) * height/3 ;
			double Clatarea = pi * rad * sqrt((rad*rad) + (height*height));
			double Cbasearea = pi * rad * rad;
			double Csarea = Clatarea + Cbasearea;
			
			cout << endl;
			
			cout << "\nThe Volume: 			" << Cvolume << endl;
			cout << "The Lateral Area: 		" << Clatarea << endl;
			cout << "The Base Area: 			" << Cbasearea << endl;
			cout << "The Total Surface Area: 	" << Csarea << endl;

			break;
		}
		case 'P':
		case 'p':
		{
			
			cout << "You have chosen to calculate for the the Pyramid.\n";	// Volume, Lateral Area, Base, Area, and Surface Area

			
			cout << "Enter the Length:" << endl;
			cin >> length;
			
			cout << "Enter the Width:" << endl;
			cin >> width;
			
			cout << "Enter the Height:" << endl;
			cin >> height;
			
			double Pbasearea = length * width;
			double Pvolume =  length * width * (height/3);
			double Platarea = length* sqrt(pow((width/2),2)+ pow(height,2)) + width * sqrt(pow((length/2),2)+pow(height,2));
			double Psarea = Platarea + Pbasearea ;
			
			cout << "\nThe Volume: 			" << Pvolume << endl;
			cout << "The Lateral Area: 		" << Platarea << endl;
			cout << "The Base Area: 			" << Pbasearea << endl;
			cout << "The Total Surface Area: 	" << Psarea << endl;
			
			break;
		}
		case 'S':
		case 's':
		{
			cout << "You have chosen to calculate for the the Sphere.\n";	// Volume and Surface Area
			
			cout << "Enter the radius:" << endl;
			cin >> rad;
			
			double Svol = pow(rad,3)* 4/3 * pi ;
			double Ssar = pow(rad,2)*4*pi;
			
			cout << "\nThe Volume of the sphere is:		" << Svol << endl;
			cout << "The Surface Area of the sphere is:	" << Ssar << endl;
		
			break;
		}
	} 
	
	cout << endl;
	cout << endl;
	cout << "\nDO YOU WANT TO CONTINUE AND START A NEW CALCULATION? <Y/N>" << endl;
	cin >> restart;

			if (restart == 'Y' || restart == 'y')
				system("cls");


	} while (restart == 'Y' || restart == 'y');

	getch();
	return 0;
	
}
