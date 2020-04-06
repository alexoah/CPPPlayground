/**
 *	from C++ Classes/Objects: Exercise 5 ( https://www.w3schools.com/cpp/exercise.asp?filename=exercise_classes5 )
 *
 *	question:
 *	Create a function named myMethod with no return value. Then Use myObj to call myMethod inside main.
 *
 *	class MyClass {
 *		public:
 *			____ ________() {
 *				cout << "Hello World!";
 *			}
 *	};
 *
 *	int main() {
 *		MyClass myObj; 
 *		_____.________();
 *		return 0;
 *	}
 *
 */
class MyClass {
	public:
		void myMethod() {
			cout << "Hello World!";
		}
};

int main() {
	MyClass myObj; 
	myObj.myMethod();
	return 0;
}