CC = gcc
OBJS = phoneBookMain.o register.o print.o search.o delete.o
all:PhoneBook

PhoneBook: $(OBJS) phone.h
	$(CC) -o $@ $(OBJS)
%.o: %.c
	$(CC) -I. -c $<
