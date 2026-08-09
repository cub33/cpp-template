CXX = ccache g++ # or just g++ (slower)
CXXFLAGS = -std=c++20 -O2 -D LOCAL

run: main
	./main

main: main.cpp
	$(CXX) main.cpp -o main $(CXXFLAGS)

clean:
	rm -f main
.PHONY: run clean
