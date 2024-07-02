# Employee Management System

The Employee Management System is a console-based application built in C, designed to manage employee records including adding, displaying, searching, updating, and deleting employee information.

## Table of Contents
- [Image](#image)
- [Features](#features)
- [Setup](#setup)
- [Usage](#usage)
- [File Structure](#file-structure)
- [Contributing](#contributing)
- [License](#license)

## Image  
![image](https://github.com/Prateek09102001/Employee-management-System/assets/127758351/f8657606-feeb-4ea0-bcc1-da7a327b662f)
![image](https://github.com/Prateek09102001/Employee-management-System/assets/127758351/fb63fd82-e750-4505-87e4-3da9a04dc3f4)
![image](https://github.com/Prateek09102001/Employee-management-System/assets/127758351/126ae616-bd44-4843-99e4-cf3a5787dae7)
![image](https://github.com/Prateek09102001/Employee-management-System/assets/127758351/62da5468-b382-465d-807d-fdf02b810e26)
![image](https://github.com/Prateek09102001/Employee-management-System/assets/127758351/fc29237a-b120-43b3-9410-36f7c8fab7d1)
![image](https://github.com/Prateek09102001/Employee-management-System/assets/127758351/9732cce0-1550-4e63-a162-9d1218131a1a)
![image](https://github.com/Prateek09102001/Employee-management-System/assets/127758351/6b4734f5-e559-45bb-95aa-bbbc4761f1d7)



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





