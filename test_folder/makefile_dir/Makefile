#output: main.o message.o
#	$(LINK.cc) main.o message.o -o output
#main.o: main.cpp
#	$(COMPILE.cc) -c main.cpp
#message.o:message.cpp                
#	$(COMPILE.cc) -c message.cpp
#clean:
#	rm output *.o


















g
output:libmessage.so main.cpp
	g++ -Wall -L/home/shubham/code/makefile_dir -Wl,-rpath=/home/shubham/code/makefile_dir/ main.cpp -lmessage -o output 

libmessage.so:message.o
	g++ -shared 	message.o -o libmessage.so

message.o:message.cpp message.hpp
	g++ -fPIC -c -Wall message.cpp
clean:
	rm message.o libmessage.so output













#;sudo cp libmessage.so /usr/lib/.;./output;sudo rm /usr/lib/libmessage.so
#-Wl,-rpath=/home/shubham/code/makefile_dir/