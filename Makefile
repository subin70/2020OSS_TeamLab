TARGET : book
CC = gcc
CFLAGS = -W -Wall
TARGET = book
# DTARGET = debug_book
OBJECTS = addressbook.c address.o person.o

$(TARGET) : $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^

$(DTARGET) : $(OBJECTS)
	$(CC) $(CFLAGS) -DDEBUG -o $@ $^

clean :
	rm *.o $(TARGET) # $(DTARGET)
