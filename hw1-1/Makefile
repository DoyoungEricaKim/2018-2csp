assign1: hello_world.o input_num.o
	g++ -o assign1 hello_world.o input_num.o
hello_world.o: hello_world.cc
	g++ -c hello_world.cc
input_num.o: input_num.cc
	g++ -c input_num.cc
clean:
	rm assign1 hello_world.o input_num.o
