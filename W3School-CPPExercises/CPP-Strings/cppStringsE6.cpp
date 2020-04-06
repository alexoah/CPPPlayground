/**
 *	from C++ Strings: Exercise 6 ( https://www.w3schools.com/cpp/exercise.asp?filename=exercise_strings6 )
 *
 *	question:
 *	Use the correct function to read a line of text which is put in by the user.
 *
 *	string fullName;
 *	cout << "Type your full name: ";
 *	_______ (cin, fullName);
 *	cout << "Your name is: " << fullName;
 *
 */
string fullName;
cout << "Type your full name: ";
getline (cin, fullName);
cout << "Your name is: " << fullName;