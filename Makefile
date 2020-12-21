
build: myapp

build/block: build/src/*.o
	g++ -o myapp main.cpp

run: myapp
	./myapp

.PHONY: clean

clean:
	rm ./myapp *.o