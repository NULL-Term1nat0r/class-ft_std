
#include "ft_std.hpp"

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << "Wrong number of args, has to be 1\n";
		return 1;
	}
	try{
		std::cout << "test stoi original: " << std::stoi(argv[1]) << std::endl;
	}
	catch (std::exception &e){
		std::cout << "original failed" << std::endl;
	}
	try{
		std::cout << "test stoi new: " << ft_std::stoi(argv[1]) << std::endl;
	}
	catch (std::exception &e){
		std::cout << "new one failed" << std::endl;
	}
	try{
		std::cout << "test stof original: " << std::stof(argv[1]) << std::endl;
	}
	catch (std::exception &e){
		std::cout << "original failed" << std::endl;
	}
	try{
		std::cout << "test stof new: " << ft_std::stof(argv[1]) << std::endl;
	}
	catch (std::exception &e){
		std::cout << "new one failed" << std::endl;
	}
	try{
		std::cout << "test stod original: " << std::stod(argv[1]) << std::endl;
	}
	catch (std::exception &e){
		std::cout << "original failed" << std::endl;
	}
	try{
		std::cout << "test stod new: " << ft_std::stod(argv[1]) << std::endl;
	}
	catch (std::exception &e){
		std::cout << "new one failed" << std::endl;
	}
}

