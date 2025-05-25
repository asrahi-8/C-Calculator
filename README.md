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
