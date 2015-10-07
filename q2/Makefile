CC ?= gcc
CFLAGS_common ?= -O0 -Wall -std=gnu99

EXEC = q2_iter q2_rec
all: $(EXEC)

SRCS_common = main.c

q2_iter: $(SRCS_common) q2_iter.c q2_iter.h
	$(CC) $(CFLAGS_common) -DIMPL="\"$@.h\"" -o $@ \
		$(SRCS_common) $@.c

q2_rec: $(SRCS_common) q2_rec.c q2_rec.h
	$(CC) $(CFLAGS_common) -DIMPL="\"$@.h\"" -o $@ \
		$(SRCS_common) $@.c

clean:
	$(RM) $(EXEC) *.o perf.*
