#include "ft_std.hpp"

const char *ft_std::invalid_Range::what() const throw(){
	return "invalid argument or range";
}

double	ft_std::stod(std::string str){
	const char* cstr = str.c_str();
	char *endptr;
	if (!isdigit(cstr[0]) && cstr[0] != '+' && cstr[0] != '-')
		throw invalid_Range();
	if ((cstr[0] == '+' || cstr[0] == '-') && !isdigit(cstr[1]))
		throw invalid_Range();
	double result = strtod(cstr, &endptr);
	if (result == HUGE_VAL || result == -HUGE_VAL)
		throw invalid_Range();
	return result;
}

int		ft_std::stoi(std::string str){
	const char *cstr = str.c_str();
	double result;
	if (!isdigit(cstr[0]) && cstr[0] != '+' && cstr[0] != '-')
		throw invalid_Range();
	if ((cstr[0] == '+' || cstr[0] == '-') && !isdigit(cstr[1]))
		throw invalid_Range();
	result = ft_std::stod(str);
	if ((result > INT_MAX || result < INT_MIN))
		throw invalid_Range();
	return static_cast<int>(result);
}
float 	ft_std::stof(std::string str){
	const char *cstr = str.c_str();
	char *endptr;
	if (!isdigit(cstr[0]) && cstr[0] != '+' && cstr[0] != '-')
		throw invalid_Range();
	if ((cstr[0] == '+' || cstr[0] == '-') && !isdigit(cstr[1]))
		throw invalid_Range();
	float result = strtof(cstr, &endptr);
	if (result == HUGE_VAL || result == -HUGE_VAL)
		throw invalid_Range();
	return result;
}