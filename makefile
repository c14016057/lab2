A:A.o BMI.o
	g++ -o A A.o BMI.o
A.o:A.cpp
	g++ -c A.cpp
BMI.o:BMI.cpp
	g++ -c BMI.cpp
clean:
	rm *.o
