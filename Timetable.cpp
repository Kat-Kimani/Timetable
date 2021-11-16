#include<iostream>
using namespace std;
int main() {

	int Day;
	cout << "This is your DBIT Sem 1 Timetable Sept - Dec ";
	cout << " \n1. Monday \n2. Tuesday \n3. Wednesday\n 4. Thursday\n 5. Friday";
	cout << "Please select Day of choice e.g 1,2,3 etc....\n\n ";
	cin >> Day;

	switch (Day)
	{
	case 1:
		/*constant -expression*/
			/*code*/
cout<< "Monday Classes \n................"<< endl;
		cout << "t1. DBIT 1106: Math for Biz " << endl;
		cout << "t1. DBIT 1102: Intro to Programming" << endl;
		break;
	case 2:
		/*constant -expression*/
			/*code*/
		cout << "Tuesday Classes \n................" << endl;
		cout << "t1. DBIT 1106: Intro to Programming " << endl;
		cout << "t1. DBIT 1104: Ethics" << endl;
		break;

	case 3:
		/*constant -expression*/
			/*code*/
		cout << "Wednesday Classes \n................" << endl;
		cout << "t1. DBIT 1106: Math for Biz " << endl;
		cout << "t1. DBIT 1104: Theology" << endl;
		cout << "t1. DBIT 1101: Fundamentals of IT" << endl;
		break;

	case 4:
		/*constant -expression*/
			/*code*/
		cout << "Thursday Classes \n................" << endl;
		cout << "t1. DBIT 1105: Accounting " << endl;
		cout << "t1. DBIT 1101 Fundamentals of IT" << endl;
		break;

	case 5:
		/*constant -expression*/
			/*code*/
		cout << "Friday Classes \n................" << endl;
		cout << "t1. DBIT 1103: Business computing " << endl;
		cout << "t1. DBIT 1104: Ethics" << endl;
		break;

	case 6:
		/*constant -expression*/
			/*code*/
		cout << "No Classes on Saturday and Sunday\n................" << endl;
		
		break;

	default:

		cout << "Invalid Choice ";
		break;		

	}

	return 0;
}