CPP = g++
CFLAGS = -Wall -Wextra -Werror

HTable.o: HTable.h HTable.cpp
	$(CPP) $(CFLAGS) -c HTable.cpp

Entry.o: Entry.h Entry.cpp
	$(CPP) $(CFLAGS) -c Entry.cpp

clean:
	rm -f *.o;
	rm -f *~;
