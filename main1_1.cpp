#include "Complex1_1.h"
using namespace std;
int main() {
	setlocale(LC_ALL, "RUS");

	complex first_complex = complexInput();//введение комплексных чисел.
	complex second_complex = complexInput();
	cout << "Введённые комплексные числа:" << endl;
	complexOutput(first_complex);
	complexOutput(second_complex);

	complex summa = first_complex.complexSum(first_complex);//сумма комплексных чисел.
	cout << "Cумма комплексных чисел = ";
	complexOutput(summa);

	complex razn = complexRazn(first_complex, second_complex);//разность комплексных чисел по модулю.
	cout << "Разность комлексных чисел = ";
	complexOutput(razn);

	complex composition = complexComposition(first_complex, second_complex);//произведение комплексных чисел.
	cout << "Произведение комплексных чисел = ";
	complexOutput(composition);

	cout << "Частное чисел = ";
	if (second_complex.re == 0 && second_complex.im == 0) {     //частное комплексных чисел.
		cout << "Ошибка! Второе комплексное число равно нулю!" << endl;
		system("pause");
	}
	else {
		complex division = complexDivision(first_complex, second_complex);
		complexOutput(division);
	}
	return 0;
}