# Password Generator in C++

## Overview
This is a simple **C++ Password Generator** that generates strong, random passwords based on user-specified length. The program uses uppercase letters, lowercase letters, numbers, and special characters to create secure passwords.

## Features
- Generates a random password of user-defined length.
- Includes uppercase, lowercase, numbers, and special characters.
- Uses `rand()` with `srand(time(NULL))` to ensure randomness.

## Usage
### 1. Compile the Code:
Use a C++ compiler like `g++` to compile the program:
```sh
 g++ password_generator.cpp -o password_generator
```

### 2. Run the Program:
```sh
 ./password_generator
```

### 3. Enter Password Length:
When prompted, enter the desired password length, and the program will generate a random password.

## Example
```
Enter the length of password: 12
Your password is: A@2fTg!9kP#3
```



