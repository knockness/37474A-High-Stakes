# High-Stakes (README v1.0)

This repository will contain the code for our VEX High Stakes robot using the PROS C/C++ library. 

To install PROS, use the guide on the [official PROS documentation](https://pros.cs.purdue.edu/v5/index.html).

Currently, the project is using: 
PROS CLI version 3.5.4,
PROS kernel version 4.1.1,
lliblvgl version 8.3.8

Before you read or make a commit to the code base, it is strongly recommend that you read and understand how the file structure and naming conventions work.

## File Structure
The file structure is near identical to the default structure that PROS provides, except with 2 added folders, `subsystemHeaders` contained in the `include` folder, and `subsystemFiles` contained in the `src` folder.

`subsystemHeaders` contains header (`.hpp`) files named after all the robots subsystems (intake, drivetrain etc...). Each of which declare functions specific to that subsystem. `subsystemHeaders` also has a file named `globals.hpp` that declares all devices (motors, controller etc...) as globally accessible.

`subsystemFiles` contains source code C++ files (`.cpp`) named after the robots subsystems, each of which set the parameters of the already declared functions in the header files. These functions will be used in `main.cpp` to execute that actual code of the robot so that code is less cluttered and organised into files with names that make sense. 

There is also a file named `globals.cpp` that initialise the device ports, the parameters of which are initialised in `main.cpp`, though the where the parameters are initialised is subject to change.






