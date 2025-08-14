1: clean
	g++ 1.cpp -o 1
	./1

2: clean
	g++ --std=c++17 2.cpp dog.cpp -o 2
	./2

5: clean
	g++ --std=c++17 5.cpp -o 5
	./5

7: clean
	g++ --std=c++17 7.cpp -o 7
	./7

clean:
	@rm -f 1
	@rm -f 2
	@rm -f 5
	@rm -f 7
