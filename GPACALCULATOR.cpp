#include <iostream>
#include <iomanip>

const double A = 4.0;
const double A_MINUS = 3.67;
const double B_PLUS = 3.33;
const double B = 3.0;
const double B_MINUS = 2.67;
const double C_PLUS = 2.33;
const double C = 2.0;
const double D = 1.0;
const double F = 0.0;

int getClassNumber()
{
	std::cout << "Please enter how many classes you have taken: ";
	int classNumber;
	std::cin >> classNumber;
	return classNumber;
}

std::string getGradeLetter()
{
	std::cout << "Please enter your grade letter: ";
	std::string gradeLetter;
	std::cin >> gradeLetter;
	return gradeLetter;
}

double getCreditHour()
{
	std::cout << "Please enter amount of credit hours for this class: ";
	double creditHour;
	std::cin >> creditHour;
	return creditHour;

}

double gradeWeight(std::string grade, double creditHours)
{
	double gradeWeight;

	if (grade == "A" || grade == "a")
		gradeWeight = A * creditHours;
	else if (grade == "A-" || grade == "a-")
		gradeWeight = A_MINUS * creditHours;
	else if (grade == "B+" || grade == "b+")
		gradeWeight = B_PLUS * creditHours;
	else if (grade == "B" || grade == "b")
		gradeWeight = B * creditHours;
	else if (grade == "B-" || grade == "b-")
		gradeWeight = B_MINUS * creditHours;
	else if (grade == "C+" || grade == "c+")
		gradeWeight = C_PLUS * creditHours;
	else if (grade == "C" || grade == "c")
		gradeWeight = C * creditHours;
	else if (grade == "D" || grade == "d")
		gradeWeight = D * creditHours;
	else if (grade == "F" || grade == "f")
		gradeWeight = F * creditHours;
	else
		std::cout << "Invalid input.";

	return gradeWeight;
}

int main()
{
	int classNumber{ getClassNumber() };
	double GPA;
	double creditHours{ 0.0 };
	double gradeWeightTotal{ 0.0 };
	double credit{ 0.0 };
	std::string gradeLetter;

	while (classNumber >= 0)
	{
		if (classNumber > 0)
		{

			creditHours = getCreditHour();
			gradeLetter = getGradeLetter();
			gradeWeightTotal += gradeWeight(gradeLetter, creditHours);
			credit += creditHours;
		}
		else
		{
			std::cout << "gradeWeighttotal = " << gradeWeightTotal << "\ncreditHours = " << creditHours << std::endl;
			GPA = gradeWeightTotal / credit;
			std::cout << "Your GPA is : " << std::setprecision(3) << GPA;
		}
		--classNumber;

	}
	return 0;
}