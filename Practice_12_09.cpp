#include <iostream>
using namespace std;


//1
class Student {
private:
	char fullName[100];
	char birthDate[20];
	char phoneNumber[20];
	char city[50];
	char country[50];
	char university[100];
	char universityAddress[100];
	char faculty[100];
	int groupNumber;

public:
	void input()
	{
		cout << "Enter full name: ";
		cin.getline(fullName, 100);

		cout << "Enter birth date: ";
		cin.getline(birthDate, 20);

		cout << "Enter phone number: ";
		cin.getline(phoneNumber, 20);

		cout << "Enter city: ";
		cin.getline(city, 50);

		cout << "Enter country: ";
		cin.getline(country, 50);

		cout << "Enter university: ";
		cin.getline(university, 100);

		cout << "Enter university address: ";
		cin.getline(universityAddress, 100);

		cout << "Enter faculty: ";
		cin.getline(faculty, 100);

		cout << "Enter group number: ";
		cin >> groupNumber;
	}

	void output()
	{
		cout << "\n--- Student Information---\n";
		cout << "Full name: " << fullName << endl;
		cout << "Birth date: " << birthDate << endl;
		cout << "Phone number: " << phoneNumber << endl;
		cout << "City: " << city << endl;
		cout << "Country: " << country << endl;
		cout << "University: " << university << endl;
		cout << "University address: " << universityAddress << endl;
		cout << "Faculty: " << faculty << endl;
		cout << "Group number: " << groupNumber << endl;
	}

	const char* getFullName() {
		return fullName;
	}

	int getGroupNumber() {
		return groupNumber;
	}
};

int main()
{
	Student student;

	student.input();
	student.output();

		cout << "\nStudent name using accessor: " << student.getFullName() << endl;
		cout << "Student group number using accessor: " << student.getGroupNumber() << endl;
		return 0;
}
