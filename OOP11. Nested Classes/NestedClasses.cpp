#include<iostream>

using namespace std;

class Enclosing {
private:
	int outerValue = 2;
public:
	void showOuterValue()
	{
		cout << "outerValue = " << outerValue << endl;
	}

	class Inner {
	private:
		int innerValue1 = 5;
	public:
		int innerValue2 = 13;
		void showInnerValues();
		
		// esli v method inner class-a otpravit ukazatel enclosing class-a mi mojem poluchit private
		// clheni enclosing class-a
		void showOuterValues(Enclosing* encObj);
	};
	Inner innerObject;
};

void Enclosing::Inner::showInnerValues()
{
	cout << "innerValue = " << innerValue1 << endl;
	cout << "innerValue = " << innerValue2 << endl;
	// vlojenniy class ne mojet poluchit dostup k private chlenam vneshnoqo class-a
	/*cout << "outerValue = " << outerValue << endl;*/
}

// esli v method inner class-a otpravit ukazatel enclosing class-a mi mojem poluchit private
// clheni enclosing class-a
void Enclosing::Inner::showOuterValues(Enclosing* encObj) {
	cout << "outerValue = " << encObj->outerValue << endl;
}

int main() {
	// Nested (inner) classes

	Enclosing enclosingObject;
	/*enclosingObject.showOuterValue();*/
	// Sozdat takim obrazom obyet vlojenoqo class-a nevozmojno
	/*Inner innerObject;*/ 

	enclosingObject.innerObject.showOuterValues(&enclosingObject);
	
	// mojno takim obrazom toje sozdovat obyekti vnutrennoqo class-a
	// no eto ne rekomendovaniy sposob
	// teryayetsya smisl vlojennix class-a
	/*Enclosing::Inner innerObj;
	innerObj.showOuterValues(&enclosingObject);*/
}