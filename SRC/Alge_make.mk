Alge.exe : Alge_client.o Alge_server.o	
	gcc Alge_client.o Alge_server.o -o Algebra.exe
Alge_client.o : Alge_client.c Alge_header.h	
	gcc -c Alge_client.c
Alge_server.o : Alge_server.c Alge_header.h
	gcc -c Alge_server.c