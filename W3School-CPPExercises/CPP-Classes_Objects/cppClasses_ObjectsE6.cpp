/**
 *	from C++ Classes/Objects: Exercise 6 ( https://www.w3schools.com/cpp/exercise.asp?filename=exercise_classes6 )
 *
 *	question:
 *	Create a constructor of MyClass, and call it:
 *
 *	class MyClass {
 *		public:
 *			_________ {
 *				cout << "Hello World!";
 *			}
 *	};
 *
 *	int main() {
 *		_______ myObj;
 *		return 0;
 *	}
 *
 */
class MyClass {
	public:
		MyClass() {
			cout << "Hello World!";
		}
};

int main() {
	MyClass myObj;
	return 0;
}