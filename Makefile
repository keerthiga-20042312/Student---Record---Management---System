outfile:add.o delete.o main.o modify.o save.o show.o sort.o
	cc add.c delete.c main.c modify.c save.c show.c sort.c -o student
add.o:add.c
	cc -c add.c
delete.o:delete.c
	cc -c delete.c
main.o:main.c
	cc -c main.c
modify.o:modify.c
	cc -c modify.c
save.o:save.c
	cc -c save.c
show.o:show.c
	cc -c show.c
sort.o:sort.c
	cc -c sort.c
