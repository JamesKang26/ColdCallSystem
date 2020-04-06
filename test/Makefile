CC=g++

CFLAGS=-Wall -W -g -std=c++11


all: ar dtdicu patsott rt socp

ar:
	$(CC) ../Student.cpp ../ColdCallQueue.cpp ../ColdCallClass.cpp ../ColdCallClassList.cpp ../Reporting.cpp ../RosterIE.cpp ../statePersistence.cpp  usecase-AdjustRoster.cpp $(CFLAGS) -o ar.exe

dtdicu:
	$(CC) ../Student.cpp ../ColdCallQueue.cpp ../ColdCallClass.cpp  ../ColdCallClassList.cpp ../Reporting.cpp ../RosterIE.cpp ../statePersistence.cpp  usecase-DayToDayInClassUsage.cpp $(CFLAGS) -o dtdicu.exe

patsott:
	$(CC) ../Student.cpp ../ColdCallQueue.cpp ../ColdCallClass.cpp ../ColdCallClassList.cpp ../Reporting.cpp ../RosterIE.cpp ../statePersistence.cpp usecase-PreparationAtTheStartOfTheTerm.cpp $(CFLAGS) -o patsott.exe

rt:
	$(CC) ../Student.cpp ../ColdCallQueue.cpp ../ColdCallClass.cpp ../ColdCallClassList.cpp ../Reporting.cpp ../RosterIE.cpp  ../statePersistence.cpp usecase-RandomnessTest.cpp $(CFLAGS) -o rt.exe

socp:
	$(CC) ../Student.cpp ../ColdCallQueue.cpp ../ColdCallClass.cpp ../ColdCallClassList.cpp ../Reporting.cpp ../RosterIE.cpp ../statePersistence.cpp usecase-SummaryOfClassParticipation.cpp $(CFLAGS) -o socp.exe

clean:
	rm -f ar.exe dtdicu.exe patsott.exe rt.exe socp.exe *.o
