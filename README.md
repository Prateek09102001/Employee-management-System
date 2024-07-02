# Employee Management System

The Employee Management System is a console-based application built in C, designed to manage employee records including adding, displaying, searching, updating, and deleting employee information.

## Table of Contents

- [Features](#features)
- [Setup](#setup)
- [Usage](#usage)
- [File Structure](#file-structure)
- [Contributing](#contributing)
- [License](#license)

## Features

- Add a new employee record to the database.
- Display all employee records.
- Count the total number of records in the database.
- Search for an employee by ID or name.
- Delete an employee record from the database.
- Update an existing employee record.

## Setup

### Prerequisites

- C Compiler (e.g., GCC)
- GNU Make (optional but recommended for ease of compilation)

### Installation

1. Clone the repository:

   ```sh
   git clone https://github.com/your-username/EmployeeManagementSystem.git
   cd EmployeeManagementSystem

2. Compile the project using Make (recommended):

       ```sh    
          cd src
          make

    Alternatively, compile manually using GCC:
     
       cd src
       gcc -o EmployeeManagementSystem *.c -I../include

  Usage
  
  1. Run the compiled executable:

    ./EmployeeManagementSystem
  
  2. Follow the on-screen prompts to interact with the Employee Management System.

    >File Structure
    >src/: Contains all the source code files (*.c).
    >include/: Contains header files (*.h).
    >database.bin: Binary file storing employee records.
    
  Contributing
    Contributions are welcome! Please fork the repository and create a pull request with your proposed changes.





