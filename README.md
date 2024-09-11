Your team is writing a program for small business for managing "dog walkers": people, who you could hire to walk your dog instead of you. You got a skeleton of the final product, but you miss important files, which prevent the program from compiling. You must study the code, finish the program and ensure all tests pass successfully. The program uses object-oriented code structure to store the dogs and employees, which you must understand to be able to finalize the program. It uses templates to handle the output.
The program has as input information about dog walkers (employees) and a number of dogs:

•	Each employee has first name and last name initials, as well as "strength" parameter, which describes up to how "hard" dog the employee could walk. Some dogs require significant strength to be walked, so not every employee can walk any dog.

•	Each dog has name (a single word, no spaces or numbers) and "required strength" to be walked.

•	The input data end with single row with just a dot ".".

Once the program reads all input, it tries to match a dog to a dog walker, and outputs the matching results. The algorithm must go through all employees in their order of appearance in the input and try to match them with a dog (again respecting the order of appearance) with power closest to the employee with strength: 

int difference = <EMPLOYEE>.getStrength() - <DOG>.getPower();

However, the algorithm must ensure that a dog is not stronger the employee which walks it, otherwise people or the dog might get hurt.
Your task is to provide at least the file “solution.h”, and (if you find that it’s necessary) a corresponding .cpp.
Input
The data comes in the following format: 

•	"DogName Power", when there’s data for a Dog: their name and power requirement so that the dog can be walked;

•	"F L Strength", when there’s data for a an employee. F and L are respectively the initials of the first and last name of the employee, and the Strength is their strength.

•	".": the last line of the input.

Note:

•	All dogs will be with unique names

•	All employees will have unique combination of first name / last name initial.

•	All data will be correct, e.g. no negative Strength or Power.

Output

The output of the program is: 

•	"Dog {Dog Name}:{Dog Power} with {Employee Initials}:{Employee Strength}.", for each matched couple Dog/Dog walker.

•	"Dogs without a walker: {Dog Name}:{Dog Power}, {Dog Name}:{Dog Power}, …": a comma-separated list of all dogs without a match. 

•	"Employees without work: {F L}:{Strength}, …": a comma-separated list of all employees without work (e.g. dog to walk).


