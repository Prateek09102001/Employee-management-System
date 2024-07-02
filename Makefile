CC = gcc
CFLAGS = -I../include   # Adjust the relative path as per your project structure
DEPS = ../include/addRec.h ../include/countRec.h ../include/deleteRec.h ../include/displayAll.h ../include/employee.h ../include/printLogo.h ../include/passWord.h ../include/searchById.h ../include/searchByName.h ../include/updateRec.h
OBJ = addRec.o countRec.o deleteRec.o displayAll.o main.o printLogo.o passWord.o searchById.o searchByName.o updateRec.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

EmployeeManagementSystem: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

clean:
	rm -f *.o EmployeeManagementSystem
