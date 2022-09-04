# ADVANCED-SCIENTIFIC-CALCULATOR-C

## SYNOPSIS

An Advanced Scientific Calculator executed in ```C language``` with programming constructs including various libraries of math, shell execution, etc...... Also includes file handling systems too.

## DESCRIPTION
v~ 1.0\
This project handles 5 basic FUNCTIONALITIES which includes :-
- Algebra
- Arithmetic
- Conversion
- Miscellaneous calculation
- Trigonometry

### Some features are :-

- Completely menu driven program which will help user to understand the project at each execution.
- User can open each functionality( i.e. Algebra, etc....) in a different shell, which makes it more realistic.
- Whenever the user does calculation, the calculation history is stored in the auto-generated text file named history.txt in the same working folder.
- Use of different function like sleep(), etc... to enhance the real-time working of the program.
- Each functionality is divided into 4 files namely : server, client, header and make :-
    - Server (For eg: ```Alge_server.c```) works out bringing the interface of that functionality.
    - Client (For eg: ```Alge_client.c```) does actual workig of different calculation as choosed by the user.
    - Header (For eg: ```Alge_header.h```) stores the header files required for that respective functionality.
    - Make   (For eg: ```Alge_make.mk```) helps in running the above 3 files as a single entity.
  

## INSTRUCTIONS
- Works with any C compiler with the best choice as ```gcc``` and ```make``` for running make files.
- Works in ```Windows``` as some headers used here are specific to Windows environment only. Changing some headers will make it compatible to run on Linux systems.
- Download the project, or enter the following in terminal ```if you have git installed``` :-
```bash 
git clone https://github.com/smsraj2001/ADVANCED-SCIENTIFIC-CALCULATOR-C.git
```
- Select the SRC folder and open a terminal.
- Now follow the steps in ```Order```:-
    - Run the following to create the .exe files for the respective functionalities :-
    ```bash 
    mingw32-make -f Alge_make.mk
    ```
    ```bash 
    mingw32-make -f Arith_make.mk
    ```
    ```bash 
    mingw32-make -f Misc_make.mk
    ```
    ```bash 
    mingw32-make -f Conv_make.mk
    ```
    ```bash 
    mingw32-make -f Trig_make.mk
    ```
- Now we have to run all these .exe files as a single entity to make them come under a single Calculator :-
```bash 
mingw32-make -f Calc_make.mk
```
- Then type the following and hit enter :-
```bash 
CALCULATOR.exe
```
- Note : CALCULATOR will help in maintaining the interface for the above functionalies in a separate shell.

- And hurray!!! Now, you can run the Calculator project without hurdles.
- ```REMEMBER``` : Whenever you make a change in a particular functionality, please run the following again :-
```bash 
    mingw32-make -f funcname_make.mk
```
Funcname = ```Alge/ Arith/ Trig/ Conv/ Misc```, depending on the changes u make and finally run the ```Calc_make``` and ```CALCULATOR.exe```


#### ```NOTE``` : For any queries/ corections, please feel free to mail : sutharsanraj2001@gmail.com
