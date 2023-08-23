Welcome to the world of makefile

What Are Explicit and Implicit Rules
Explicit Rules: Explicit rules are rules that you define explicitly in the Makefile, specifying how to build a target from its dependencies.

Implicit Rules: Implicit rules are predefined rules in Make that specify how to build certain types of targets from specific types of dependencies. These rules are used when no explicit rule is provided.

What Are the Most Common/Useful Rules
Some common and useful rules in Makefiles include:

Compiling C Code: Rules for compiling .c source files into .o object files and linking them into executables.
Cleaning: A rule for cleaning generated files, often named clean.
Phony Targets: Phony targets like all that specify the default build target or clean for cleaning.
What Are Variables and How to Set and Use Them
Variables in Makefiles allow you to store and reuse values, making your Makefile more flexible. You can set variables for the compiler (CC), compiler flags (CFLAGS), source files, directories, and more.
