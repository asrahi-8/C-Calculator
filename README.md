# Simple C Calculator

A basic calculator program written in C that performs addition, subtraction, multiplication, and division on two numbers.

---

## Table of Contents

- [Features](#features)
- [Prerequisites](#prerequisites)
- [Installation and Running Instructions](#installation-and-running-instructions)
  - [Windows](#windows)
  - [macOS](#macos)
  - [Linux](#linux)
  - [Mobile (Termux on Android)](#mobile-termux-on-android)
- [Usage](#usage)
- [Troubleshooting](#troubleshooting)
- [Contributing](#contributing)
- [License](#license)

---

## Features

- Addition, subtraction, multiplication, division
- Handles division by zero gracefully
- Outputs results formatted to 2 decimal places

---

## Prerequisites

Before running the program, ensure you have a C compiler installed:

| OS         | Recommended Compiler                   |
|------------|--------------------------------------|
| Windows    | [MinGW-w64](https://winlibs.com/) or [TDM-GCC](https://jmeubank.github.io/tdm-gcc/) |
| macOS      | Xcode Command Line Tools (includes `clang`) |
| Linux      | `gcc` via your package manager       |
| Android    | [Termux](https://termux.com/) with `clang` or `gcc` package |

---

## Installation and Running Instructions

### Windows

1. **Install GCC Compiler:**

   - Download and install [MinGW-w64](https://winlibs.com/) or [TDM-GCC](https://jmeubank.github.io/tdm-gcc/).
   - Add the `bin` directory of your installation (e.g., `C:\mingw64\bin`) to your system PATH environment variable.
   - Open Command Prompt or Git Bash and verify by running:
     ```bash
     gcc --version
     ```

2. **Clone this repository:**
   ```bash
   git clone https://github.com/asrahi-8/C-Calculator.git
   cd C-Calculator
   gcc NEW.c -o calculator.exe
   ./calculator.exe
   
### MacOS
1. **Install Xcode Command Line Tools:**
Open Terminal and run:

xcode-select --install
Clone the repository:

git clone https://github.com/asrahi-8/C-Calculator.git
cd C-Calculator
Compile the program:

gcc NEW.c -o calculator
Run the program:

./calculator



### Linux (Debian/Ubuntu)
1.**Install build-essential (includes GCC):**

sudo apt update
sudo apt install build-essential
Clone the repository:

git clone https://github.com/asrahi-8/C-Calculator.git
cd C-Calculator
Compile the program:

gcc NEW.c -o calculator
Run the program:

./calculator


### Mobile (Termux on Android)
1.**Install Termux from the Play Store or F-Droid**

Update and install clang:

pkg update
pkg install clang git
Clone the repository:

git clone https://github.com/asrahi-8/C-Calculator.git
cd C-Calculator
Compile the program:

clang NEW.c -o calculator
Run the program:

Edit
./calculator

### Usage
Once the program runs, it will prompt you to enter two numbers. It will then display the results of addition, subtraction, multiplication, and division (with division by zero handled safely).

### Example:

Please input the first number: 10
Please input the second number: 2
Addition Result is 12.00
Subtraction Result is 8.00
Multiplication Result is 20.00
Division Result is 5.00
Troubleshooting
gcc not found: Make sure the compiler is installed and added to your PATH.

Permission denied on execution: On Linux/macOS/Termux, run chmod +x calculator to make the file executable.

Git commands not recognized: Install Git from git-scm.com and restart your terminal.

Issues with compilation: Ensure the source file NEW.c is present in your current directory.

### Contributing
Feel free to fork the repository and submit pull requests for improvements or new features!

### License
This project is licensed under the MIT License — see the LICENSE file for details.
