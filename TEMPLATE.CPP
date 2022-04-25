#include<iostream.h>
#include<conio.h>
template<class t>
class calculator
{
private:
	t num1, num2;
 public:
	 calculator(t n1,t n2)
	 {
		num1 = n1;
		num2 = n2;
	  }
	  void displayResult()
	  {
	  cout<<"number are:"<<num1 <<"and" <<num2 << " " << endl;
	  cout<<"addition is:"<<add()<<endl;
	  cout<<"substraction is:"<<subtract() <<endl;
	  cout<<"product is:"<<multiple()<<endl;
	  cout<<"division is:"<<divide()<<endl;
	  }
	  t add() { return num1 + num2; }
	  t subtract() { return num1 - num2; }
	  t multiple() { return num1* num2; }
	  t divide() { return num1 / num2; }
   };
   int main()
   {
      calculator<int> intcalc(2,1);
      calculator<float>floatcalc(2.4,1.2);

      cout<<"int results:" << endl;
      intcalc.displayResult();

      cout <<endl << "float results:"<<endl;
      floatcalc.displayResult();
      getch();
}
