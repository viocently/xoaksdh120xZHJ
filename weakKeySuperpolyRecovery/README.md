## Usage of the codes
We give a brief introduction on how to run our code on a linux platform.

1. Install Gurobi (our version is 9.1.2) and configure the required environment variables such as "GUROBI_HOME" and "LD_LIBRARY_PATH".

2. Open the file "SuperpolyBGL.cpp" to set the *cube_index*, *rounds* and *bit conditions*.

3. Create three folders named "STATE", "LOG" and "TERM" in the console and compile the source files with multi-threading support. This should generate an executable program, let us say it is "mitm".

4. Type `./mitm` in the console to start the superpoly recovery. After the program completes, you shall see a file "superpoly.txt" in the folder "TERM", which contains the weak-key superpoly.


## Dependencies
Note that the header file "dynamic_bitset.hpp" used in the codes is from the C++ Boost Library, which can be downloaded from (https://www.boost.org/).
