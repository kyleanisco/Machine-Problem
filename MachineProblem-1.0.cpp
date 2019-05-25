 
//MACHINE PROBLEM
/*
	n = sides
	interior angles //DONE
	
	classify the angle
	
	classification of the triangle.

	Area = 1/2 (b)(h) replaced with heron's formula //DONE
	

	Compute for length apothem circumcenter

*/

#include <iostream>
#include <cmath>
#include <conio.h>
#include <math.h>
#include <iomanip>




using namespace std;

int main()
{
	double A, B, C;
	//int start;
	char start;
	const double pi = 3.141592;
	int tri;
	
	cout << fixed << showpoint << setprecision(2) << endl;
	
	do
	{
			
			cout << "=============================================================="<<endl;
			cout << "================== Triangle Shape Calculator ================ by: Anisco, de Jesus, Santos"<<endl;
			cout << "============================================================== Group 8"<<endl;
			cout << endl;
			cout << endl;
			cout << "The setup of the Sides of the Triangle, Please Enter each corresponding value.\n";
			cout << endl;
			cout <<"_______________________________c_______________________________" << endl;
			cout <<"_______________________________1_______________________________" << endl;
			cout <<"______________________________111______________________________"<< endl;
			cout <<"_____________________________11111_____________________________"<< endl;
			cout <<"________________________A___1111111___B________________________"<< endl;
			cout <<"___________________________111111111___________________________"<< endl;
			cout <<"__________________________11111111111__________________________"<< endl;
			cout <<"_________________________1111111111111_________________________"<< endl;
			cout <<"______________________b_111111111111111_a______________________" << endl;
			cout <<"_______________________________C_______________________________" << endl;
			cout << "\nEnter length of Side A:\n";
			cin >> A;
	
			cout << "Enter length of Side B:\n";
			cin >> B;
	
			cout << "Enter length of Side C:\n";
			cin >> C;
		
	
	//Variable check
			double per = A+B+C;
			
			
			//VALID INPUT CHECKER//
			if ( (A+B <= C )){
					cout << "\n\nINVALID INPUTd\nMake sure that A+B>C\n\n" << endl;
					cout << "THE VALUES BELOW REFLECT THAT THE INPUT IS INVALID";
					start = 'Y';
				}
	cout << endl;
	
	
	// Formula for corner A, B, C LAW OF COSINES
	double AA = ((B*B) + (C*C) - (A*A))/(2*B*C);
	double angleA = acos(AA)* 180 / pi;
	
	double BB = (((A*A) + (C*C) - (B*B))/(2*C*A));
	double angleB = acos(BB)* 180 / pi;
	
	double CC = (((A*A) + (B*B) - (C*C))/(2*B*A));
	double angleC = acos(CC)* 180 / pi;
	
	// ANGLE CHECKER	
	if (int(angleA) == 90 || int(angleB) == 90 || int(angleC) == 90)
		cout << "The type of triangle: 	Right ";

	else if (angleA > 90 || angleB > 90 || angleC > 90  )
		cout << "The type of triangle: 	Obtuse ";
	else if(angleA == angleB && angleB == angleC)
		;	
	else 
		cout << "The type of triangle: 	Acute ";
	
			
		// SIDE CHECKER		
			if (A == B && B == C) {
				cout << "The type of triangle: 		Equilateral Triangle";
				const int tri = 1;
			}

			else if (A == B || B==C || A==C) {
				cout << "Isosceles Triangle";
			}
		
			else if (A != B && B != C && A != C) {
				cout << " Scalene Triangle";
			}
			//cout << endl;

		
	// Heron's formula for the AREA
		double HeronS = per/2;
		double HA = HeronS-A;
		double HB = HeronS-B;
		double HC = HeronS-C;
		double area = sqrt(HeronS*HA*HB*HC);
		
		//double apothem = ((A/2)*sqrt(3))/3;
		double apothem = 2 * area / per;
		double circumcenter = (A*B*C)/sqrt((A+B+C)*(B+C-A)*(C+A-B)*(A+B-C));
		
		cout << endl;
		
		cout << "Angle a: 	"<< angleA << "  degrees"<< endl;
		cout << "Angle b: 	"<< angleB << "  degrees"<< endl;
		cout << "Angle c: 	"<< angleC << "  degrees"<< endl;
		cout << "Total Angle: 	" << angleA+angleB+angleC << "  degrees"<<endl;
		cout << "The Area:	" << area << "  sqr. units"<< endl; 
		cout << "Perimeter: 	" << int(per) << "  units" << endl;
		cout << "Circumradius:	" << circumcenter << "	units" << endl;
		
		if (per/3 == A ){
			cout << "Apothem:	"<< apothem << "	units" << endl;
		}
		else
			{
			cout << endl;
			cout << "Irregular polygons or any polygon with sides of different lengths do not have an apothem.\nIn this case, the sides of the triangle are not of the same lengths,\nThus, no apothem shall be given.\n\n";
			}
	// Formulas for Apothem and/or Circumcenter
	
	
		
		
		cout << "\nDO YOU WANT TO CONTINUE AND START A NEW CALCULATION? <y/n>" << endl;
		cin >> start;
		if (start == 'Y' || start == 'y')
			system("cls");
			
	} while (start == 'Y' || start == 'y');

	return 0;	
}

