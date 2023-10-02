#include <iostream>
#include <string>
#include <limits>
#include <cfloat>

class ft_std
{
	public:
		class invalid_Range : public std::exception {
			virtual const char *what() const throw();
		};
		static double	stod(std::string);
		static int		stoi(std::string);
		static float 	stof(std::string);
};
