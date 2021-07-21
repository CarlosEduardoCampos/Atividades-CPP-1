CPP    = g++
WINDRES= windres
RM     = rm -f
OBJS   = prova3.o \
         AppResource.res

LIBS   =
CFLAGS =

.PHONY: prova3.exe clean clean-after

all: prova3.exe

clean:
	$(RM) $(OBJS) prova3.exe

clean-after:
	$(RM) $(OBJS)

prova3.exe: $(OBJS)
	$(CPP) -Wall -s -o $@ $(OBJS) $(LIBS)

prova3.o: prova3.cpp
	$(CPP) -Wall -s -c $< -o $@ $(CFLAGS)

AppResource.res: AppResource.rc
	$(WINDRES) -i AppResource.rc -J rc -o AppResource.res -O coff

