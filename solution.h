#ifndef SOLUTION_H
#define SOLUTION_H
//#include <vector>

using namespace std;

vector<Match> match(vector<Dog> &dogs, vector<Employee> &employees) {

	vector<Match> matches;
	bool isMatch = false;
	size_t counter = employees.size();
	while(counter--) {
		for (vector<Employee>::iterator itE = employees.begin(); itE != employees.end(); itE++) {		
			for (vector<Dog>::iterator itD = dogs.begin(); itD != dogs.end(); itD++) {
				if ((itE->getStrength() - itD->getPower()) >= 0) {
					matches.push_back(Match(*itD, *itE));					
					dogs.erase(itD);
					isMatch = true;
					break;
				}
			}
			if (isMatch) {
				isMatch = false;
				employees.erase(itE);
				break;
			}
		}
	} 

	return matches;
}

ostream& operator << (ostream& ostr, const Employee& e) {

	ostr << e.first << e.second << ":" << e.strength << ".";

	return ostr;
}

ostream& operator << (ostream& ostr, const Match& m) {

	ostr << "- Dog " << m.dog << " with " << m.employee << endl;

	return ostr;
}


ostream& operator << (ostream& ostr, const Dog& d) {

	ostr << d.name << ":" << d.power;

	return ostr;
}


template<typename M>
void print(ostream &out, vector<Match> &matches, const string str) {
	
	out << str << endl;
	for (const Match m : matches)
		out << m;
}

template<typename D>
void print(ostream& out, vector<Dog> &dogs, const string str) {

	if (dogs.empty()) {
		out << str << " none." << endl;
	}
	else {
		out << str << endl;
		for (const Dog d : dogs)
			out << "- " << d << endl;
	}	
}

template<typename E>
void print(ostream& out, vector<Employee> &employees, const string str) {
	if (employees.empty()) {
		out << str << " none." << endl;
	}
	else{
		out << str << endl;
		for (const Employee e : employees)
			out << "- " << e << endl;
	}	
}

//template void print<Match>(ostream, vector<Match>);
//template void print<Dog>(ostream, vector<Dog>, const char*);
//template void print<Employee>(ostream, vector<Employee>, const char*);
	


#endif
