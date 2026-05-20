CXX = g++
CXXFLAGS = -Wall -std=c++17

calculator: calculator.cpp randfuncs.cpp randfuncs.h
	$(CXX) $(CXXFLAGS) -o calculator calculator.cpp randfuncs.cpp

clean:
	rm -f calculator
