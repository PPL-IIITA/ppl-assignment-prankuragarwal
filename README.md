# PPL_ASSIGNMENT
Name - Prankur Agarwal  
ROLL No - LIT2015040   
Section - B

## OVERVIEW
> 1) The project currenty solves questions 1 to 5.  
> 2) The documentation of the project has been generated. To view documentation, go to respective directory of the question and then ppl/html/index.html  
> 3) The class diagram for all the questions is in their respective directories named as ClDia.pdf.  
> 4) All the source files, input-output files are available.  

## BUILD SYSTEM
> 1) Project was made and tested in Windows and macOS.  
> 2) Tools used: Command line tools, CodeBlocks IDE and sublime text.  
> 3) Documentation was made using Doxygen and HTML.  
> 4) The class diagram was made using Visual Paradigm.  
> 5) C++11 Complier or above required.  

## HOW TO BUILD AND RUN

> Clone this repository
```
https://github.com/PPL-IIITA/ppl-assignment-prankuragarwal.git 
```

>Change to repositories directory
```
cd ppl-assignment-prankuragarwal
```

### Question - 1 & 2
>Change directory
```
cd Q1
```

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

> To run Question 1
```
g++ solution_1.cpp lib_load
./a.out
```
> The couples will be stored in output_1.txt file.    

> To run Question 2
```
g++ solution_2.cpp lib_load
./a.out
```

> The gifts exchanges will be stored in basket_out.txt file.  
> k most happy couples will be stored in happy.txt  
> k most compatible couples will be stored in compatible.txt  

### Question - 3
>Change directory
```
cd Q3
```

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
gcc -c makecouple.cpp
gcc -c haco_calc.cpp
gcc -c ingifts.cpp
gcc -c input.cpp
gcc -c print_ans.cpp
gcc -c print_couples.cpp
ar rvs lib_load *.o 
```

> To run Question 3
```
g++ solution_3.cpp lib_load
./a.out
```

> The gifts exchanges will be stored in basket_out.txt file.  
> k most happy couples will be stored in happy.txt  
> k most compatible couples will be stored in compatible.txt  

### Question - 4
>Change directory
```
cd Q4
```

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
gcc -c makecouple.cpp
gcc -c haco_calc.cpp
gcc -c ingandc.cpp
gcc -c input.cpp
gcc -c print_haco.cpp
gcc -c print_couples.cpp
ar rvs lib_load *.o 
```

> To run Question 4
```
g++ solution_4.cpp lib_load
./a.out
```

> The file output_1.txt shows the original couples formed and couples_info_updated.txt shows the reassigned couples after breakup. 


### Question - 5
>Change directory
```
cd Q5
```

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

> To run Question 5
```
g++ solution_5.cpp lib_load
./a.out
```

> k most happy couples will be stored in happy.txt 