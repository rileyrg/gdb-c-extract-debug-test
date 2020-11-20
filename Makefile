# added to git
CC      = gcc
CFLAGS  = -O0 -g
RM      = rm -f


inttobin: inttobin.c
	$(CC) $(CFLAGS) -o inttobin inttobin.c
	extract_debug_info.sh inttobin

clean veryclean:
	$(RM) inttobin
