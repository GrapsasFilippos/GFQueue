all: demo

.PHONY: all clean


demo: demo.cpp
	g++ demo.cpp -o demo

clean:
	-rm demo
