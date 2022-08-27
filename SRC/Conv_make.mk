Conversion.exe : Conv_client.o Conv_server.o	
	gcc Conv_client.o Conv_server.o -o Conversion.exe
Conv_client.o : Conv_client.c Conv_header.h	
	gcc -c Conv_client.c
Conv_server.o : Conv_server.c Conv_header.h
	gcc -c Conv_server.c
