# PPL_ASSIGNMENT
Name - Prankur Agarwal
ROLL No - LIT2015040 
Section - B

## OVERVIEW
> The project currenty solves questions 1 and 2.
> The documentation of the project has been generated. To view documentation, go to ppl/html/index.html
> The class diagram for both the questions (combined) is in ClDia.pdf.
> All the source files, input-output files are available.

## BUILD SYSTEM
> Project was made and tested in Windows and macOS.
> Tools used: Command line tools, CodeBlocks IDE and sublime text.
> Documentation was made using Doxygen and HTML.
> The class diagram was made using Visual Paradigm.
> C++11 Complier or above required.

## HOW TO BUILD AND RUN

> Generate random input for boys and girls
```
g++ boy_girl_gen.cpp
./a.out
```
> Generate random gifts.
```
g++ gifts_gen.cpp
./a.out
```
> Create Library
```
gcc -c basket.cpp
gcc -c calculate.cpp
gcc -c haco_calc.cpp
gcc -c ingandc.cpp
gcc -c input.cpp
gcc -c print_ans2.cpp
gcc -c print_couples.cpp
ar rvs lib_load *.o 
```
### Question - 1

> To run question 1
```
g++ solution_1.cpp lib_load
./a.out
```

> The couples will be stored in output_1.txt file.

### Question 2

> To run question 2
```
g++ solution_2.cpp lib_load
./a.out
```

> The gifts exchanges will be stored inbasket_out.txt file.
> k most happy couples will be stored in happy.txt
> k most compatible couples will be stored in compatible.txt