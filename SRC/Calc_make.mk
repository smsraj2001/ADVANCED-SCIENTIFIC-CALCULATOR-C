Calc.exe : Calc_client.o Calc_server.o	
	gcc Calc_client.o Calc_server.o -o Calculator.exe
Calc_client.o : Calc_client.c Calc_header.h	
	gcc -c Calc_client.c
Calc_server.o : Calc_server.c Calc_header.h
	gcc -c Calc_server.c

	