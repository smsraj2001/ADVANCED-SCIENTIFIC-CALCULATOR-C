Arithmetic.exe : Arith_client.o Arith_server.o	
	gcc Arith_client.o Arith_server.o -o Arithmetic.exe
Arith_client.o : Arith_client.c Arith_header.h	
	gcc -c Arith_client.c
Arith_server.o : Arith_server.c Arith_header.h
	gcc -c Arith_server.c