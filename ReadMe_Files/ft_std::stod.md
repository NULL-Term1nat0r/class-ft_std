# ft_std::stod() Function

## Purpose

- `ft_std::stod()` is a custom C++ function used for co`n`verting a string to a double, with additional error checking for invalid inputs.

## Usage

- Call `ft_std::stod()`to convert a string to a double.
- `str` is the input string that you want to convert.
- The function performs checks for valid input and returns the corresponding double value.
- If the input is not a valid double or is out of a valid range, it throws a custom exception (`invalid_Range`) with an error message.

## Function Parameters

- `str` (std::string): The string that you want to convert to a double.

## Return Value
- If the `ft_std::stod()` function successfully converts the input string to a double and the input is within the valid range, it returns the double value represented by the input string.

- If the input string is not a valid double or falls outside the valid range, the function throws a custom exception (`invalid_Range`) with an accompanying error message.

## Custom Exception
- The `ft_std::stod()` function utilizes a custom exception class named `invalid_Range` to manage cases of invalid input or values that are out of the specified range.

- This custom exception is raised when the function encounters input that is not a valid double or when the input falls outside the acceptable range. It provides detailed error information to aid in error handling and diagnostics.

## Example

```cpp
#include <iostream>
#include <string>

int main() {
    try {
        std::string input = "3.14159";
        double result = ft_std::stod(input);
        std::cout << "The double value is: " << result << std::endl;
    } catch (const invalid_Range& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
```

## Description

- `ft_std::stod()` is a custom utility function designed for string-to-double conversion.
- This function places a strong emphasis on input validation and error handling to ensure safe and reliable conversions.
- It meticulously verifies input formats and checks whether the input falls within acceptable ranges.
- In cases where the input is found to be invalid or out of range, `ft_std::stod()` raises a custom exception (`invalid_Range`) to provide comprehensive error reporting and handling.

## Additional Sources
- [C++ Standard Library `<string>`](https://en.cppreference.com/w/cpp/string/basic_string)
- [C++ Standard Library `<exception>`](https://en.cppreference.com/w/cpp/error/exception)

