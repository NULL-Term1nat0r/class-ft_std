# class ft_std{
## //this class is a collection of recoded functions in C++98 Standard which 
## //behave like the originals ones from C++11-Standard
## public:
## -> [ft_std::stoi(std::string)](https://github.com/NULL-Term1nat0r/class-ft_std/blob/main/ReadMe_Files/ft_std%3A%3Astoi.md)
## -> [ft_std::stof(std::string)](https://github.com/NULL-Term1nat0r/class-ft_std/blob/main/ReadMe_Files/ft_std%3A%3Astof.md)
## -> [ft_std::stod(std::string)](https://github.com/NULL-Term1nat0r/class-ft_std/blob/main/ReadMe_Files/ft_std%3A%3Astod.md)
# };


## #1_testExample

```bash
estruckm@c2s11d52 class_ft_std % ./converter 454.23242424f
test std::stoi:    454
test ft_std::stoi: 454
test std::stof:    454.232
test ft_std::stof: 454.232
test std::stod:    454.232
test ft_std::stod: 454.232
```
## #2_testExample

```bash
estruckm@c2s11d52 class_ft_std % ./converter b            
test std::stoi:    original failed
test ft_std::stoi: new one failed
test std::stof:    original failed
test ft_std::stof: new one failed
test std::stod:    original failed
test ft_std::stod: new one failed
```
## #3_testExample

```bash
estruckm@c2s11d52 class_ft_std % ./converter 543534543543353453533
test std::stoi:    original failed
test ft_std::stoi: new one failed
test std::stof:    5.43535e+20
test ft_std::stof: 5.43535e+20
test std::stod:    5.43535e+20
test ft_std::stod: 5.43535e+20
```
