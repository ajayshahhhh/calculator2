CXX = g++
CXXFLAGS = -Wall -std=c++17

calculator: calculator.cpp
	$(CXX) $(CXXFLAGS) -o calculator calculator.cpp

clean:
	rm -f calculator
