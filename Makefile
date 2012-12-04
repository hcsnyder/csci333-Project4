CPP = g++
CFLAGS = -Wall -Wextra -Werror

ttest: table_test.cpp HTable.o Entry.o
	$(CPP) $(CFLAGS) -o ttest $^

HTable.o: HTable.h HTable.cpp
	$(CPP) $(CFLAGS) -c HTable.cpp

Entry.o: Entry.h Entry.cpp
	$(CPP) $(CFLAGS) -c Entry.cpp

clean:
	rm -f *.o;
	rm -f ttest;
	rm -f *~;
