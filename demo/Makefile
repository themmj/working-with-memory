.DEFAULT_GOAL := full
IDIR=include
SDIR=src
CC=gcc
CFLAGS=-I$(IDIR)

ODIR=obj
BDIR=bin

_DEPS = common.h bool.h wrapper.h slList.h json.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = demo.o wrapper.o slList.o  json.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

full:
	@make clean
	@make init
	@make demo
	@make run

init:
	mkdir -p $(ODIR)
	mkdir -p $(BDIR)

$(ODIR)/%.o: $(SDIR)/%.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

demo: $(OBJ)
	$(CC) -o bin/$@ $^ $(CFLAGS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~ 

run:
	@echo "-Running Demo-"
	@./bin/demo
	@echo "-Done-"
