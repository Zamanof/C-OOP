#include<iostream>

using namespace std;

void foo(float numb1, float numb2) {
	try
	{
		if (numb2 == 0) throw numb2;
		cout << numb1 / numb2 << endl;
	}
	catch (float ex)
	{
		cout << "Error - divide by " << ex << endl;
	}
}

void bar(float numb1, float numb2) {
	if (numb2 == 0) throw numb2;
	cout << numb1 / numb2 << endl;
}

void Some(float numb1, float numb2) {
	try
	{
		if (numb2 == 0) throw numb2;
		cout << numb1 / numb2 << endl;
	}
	catch (float ex)
	{
		cout << "throw exception float " << ex << endl;
		throw ex;
	}
}

int main() {
	// try-catch
	// exception - isklyucheniye
	/*
	try
	{
		throw exception
	}
	catch
	{
		handled exception
	}
	
	*/

#pragma region try-catch
/*cout << "Start of code" << endl;
	try
	{
		cout << "Before exception" << endl;

		throw 13;

		cout << "After exception" << endl;
	}
	catch (string ex)
	{
		cout << "string Exception handled" << endl;
	}

	catch (int ex)
	{
		cout << "int Exception handled" << endl;
	}*/

	// Division by zero exception
	/*try
	{
		float numb1{}, numb2{};
		cout << "Enter first number: " << endl;
		cin >> numb1;
		cout << "Enter second number: " << endl;
		cin >> numb2;
		if (numb2 == 0) throw numb2;
		cout << numb1 / numb2 << endl;
	}
	catch (float ex)
	{
		cout << "Error - divide by " << ex << endl;
	}*/
#pragma endregion

#pragma region multi exception catch
// multi exception catch
	// universal catch(...) - Takoy catch doljen bit v kontse spiska catch-ov 

	/*try
	{
		int* arr = nullptr;
		int size{};
		cout << "Enter size number: " << endl;
		cin >> size;
		if (size < 1 || size > 200)
		{
			throw "\nSize error\n";
		}
		arr = new int[size];

		if (!arr) {
			throw "\nMemory allocation error\n";
		}
		int number{};
		cout << "Enter any number: " << endl;
		cin >> number;
		if (number == 0)
		{
			throw number;
		}
		for (size_t i = 0; i < size; i++)
		{
			arr[i] = number;
		}
		throw 0.5;

	}
	catch (int ex)
	{
		cout << "Exception about number" << endl;
	}
	catch (const char* ex) {
		cout << ex << endl;
	}
	catch (...) {
		cout << "Other exception" << endl;
	}*/
#pragma endregion

#pragma region catch variation with function
	/*foo(2, 0);*/

	/*try
	{
		bar(2, 0);
	}
	catch (float ex)
	{
		cout << "Error - divide by " << ex << endl;
	}*/

try
{
	Some(2, 0);
}
catch (float ex)
{
	cout << "Error - second handled" << endl;
}
#pragma endregion

	
}