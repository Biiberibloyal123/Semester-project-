#include <iostream>

using namespace std;

int main() {
	
		int numSubjects;
		float totalCredits = 0, totalGradePoints = 0;
		cout<<"enter the number of subjects:";
		cin>>numSubjects;
		for(int i = 1; i <= numSubjects; i++){
			float credits, grade;
			cout<< "enter the credits for subject " << i << ":";
			cin>> credits;
			cout<<"enter the grade for subject " << i<< ":";
			cin>>grade;
			totalCredits += credits;
			totalGradePoints += credits * grade;
			
		}
		float cgpa = totalGradePoints / totalCredits;
		cout<< "Your CGPA is:" << cgpa << endl;
		return 0;
}
