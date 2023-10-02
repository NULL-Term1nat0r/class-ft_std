
#include "ft_std.hpp"

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << "Wrong number of args, has to be 1\n";
		return 1;
	}
	try{
		std::cout << "test std::stoi:    " << std::stoi(argv[1]) << std::endl;
	}
	catch (std::exception &e){
		std::cout << "original failed" << std::endl;
	}
	try{
		std::cout << "test ft_std::stoi: " << ft_std::stoi(argv[1]) << std::endl;
	}
	catch (std::exception &e){
		std::cout << "new one failed" << std::endl;
	}
	try{
		std::cout << "test std::stof:    " << std::stof(argv[1]) << std::endl;
	}
	catch (std::exception &e){
		std::cout << "original failed" << std::endl;
	}
	try{
		std::cout << "test ft_std::stof: " << ft_std::stof(argv[1]) << std::endl;
	}
	catch (std::exception &e){
		std::cout << "new one failed" << std::endl;
	}
	try{
		std::cout << "test std::stod:    " << std::stod(argv[1]) << std::endl;
	}
	catch (std::exception &e){
		std::cout << "original failed" << std::endl;
	}
	try{
		std::cout << "test ft_std::stod: " << ft_std::stod(argv[1]) << std::endl;
	}
	catch (std::exception &e){
		std::cout << "new one failed" << std::endl;
	}
}

