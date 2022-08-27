Trig.exe : Trig_client.o Trig_server.o	
	gcc Trig_client.o Trig_server.o -o Trigonometry.exe
Trig_client.o : Trig_client.c Trig_header.h	
	gcc -c Trig_client.c
Trig_server.o : Trig_server.c Trig_header.h
	gcc -c Trig_server.c