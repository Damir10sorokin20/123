#include <iostream>
#include <ctime>
using namespace std;
double powerA2(double a) {
	double res = a * a ;
		return res;
}
double powerA4(double a) {
	double res = a * a * a * a;
	return res;

}
double triangleP(double a) {
	double res = 3*a;
	return 0;
}
double triangleS(double a) {
	double res = a*a *  sqrt(3) / 4;
}
int main() {
	//Proc1.Описать функцию PowerA3(A), вычисляющую третью степень числа A и возвращающую ее(параметр вещественный).
		//С помощью этой функции найти третьи степени пяти случайных чисел.
	//srand(time(nullptr));
	//for (int i = 1; i <= 5; i++) {
		//int x = rand() % 11;
		//double x3 = powerA3(x);
		//cout << "x=" << x << "x^3=" << x3 << endl;
	 //}
	//return 0;
     

	//Proc2.Описать 2 функции powerA2(А), powerA4(A), вычисляющию вторую и четвертую степень числа A и 
		//возвращающию эти степени(параметры являются вещественными).
		//С помощью этих функций найти вторую и четвертую степень пяти случайных чисел
	//srand(time(nullptr));
	//for (int i = 1; i <= 5; i++) {
		//int x = rand() % 11;
		//double x2 = powerA2(x);
	//double x4 = powerA4(x);
		//cout << "x=" << x << " x^2=" << x2 << " x^4=" << x4 << endl;
	 //}
	//Proc3.Описать 2 функции aMean(X, Y), gMean(X, Y), вычисляющие среднее арифметическое aMean = (X + Y) / 2 и 
		//среднее геометрическое gMean = √ X·Y двух положительных чисел X и Y(X и Y — входные параметры вещественного типа).
		///С помощью этих функций найти среднее арифметическое и 
		//среднее геометрическое для 10 пар случайных чисел.

		//for (int i = 1; i <= 10; i++) {
			//double x1 = rand() % 101 * 0.1;
			//double y1 = rand() % 101 * 0.1;
			//cout<<"x="<<x1<<" y="<< y1<< " sr_arifm="<<aMean(x1,y1)<<" sr_geom="<<gMean(x1,y1)
		//}

		
		//Proc4.Описать 2 функции triangleP(a) и triangleS(a), вычисляющие по стороне a равностороннего треугольника
			//его периметр P = 3·a и площадь S = a 2 · √ 3 / 4 (параметры являются вещественными).С помощью этих функций
			//найти периметры и площади трех равносторонних треугольников с данными сторонами(стороны ввести с клавиатуры).
	//int a;
	//for (int i = 1; i <= 3; i++) {
		//cin >> a;
		//cout << triangleP(a) << " " << triangleS(a) << endl;
		//}
	//return 0;















}