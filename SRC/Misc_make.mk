Misc.exe : Misc_client.o Misc_server.o	
	gcc Misc_client.o Misc_server.o -o Miscellaneous.exe
Misc_client.o : Misc_client.c Misc_header.h	
	gcc -c Misc_client.c
Misc_server.o : Misc_server.c Misc_header.h
	gcc -c Misc_server.c