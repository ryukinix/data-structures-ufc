# this is a obscure makefile, be careful.

ifeq ($(OS),Windows_NT)
	EXTENSION := exe
else
	EXTENSION := out
endif

# definitions
CC = gcc
CFLAGS = -std=c99 -pedantic -Wall
LDFLAGS = -lm
POINTER_VECTOR_STRUCT_DYNAMIC = pointer-vector-struct-dynamic
POINTER_VECTOR_STRUCT_STATIC = pointer-vector-struct-static
VECTOR_STRUCT_STATIC = vector-struct-static
VECTOR_STRUCT_DYNAMIC = vector-struct-dynamic
INCLUDE = -I../


# all binary files
TARGETS  = $(POINTER_VECTOR_STRUCT_DYNAMIC:=.$(EXTENSION))
TARGETS += $(POINTER_VECTOR_STRUCT_STATIC:=.$(EXTENSION))
TARGETS += $(VECTOR_STRUCT_STATIC:=.$(EXTENSION))
TARGETS += $(VECTOR_STRUCT_DYNAMIC:=.$(EXTENSION))

all: compile

compile: $(TARGETS)

$(POINTER_VECTOR_STRUCT_DYNAMIC:=.$(EXTENSION)): $(POINTER_VECTOR_STRUCT_DYNAMIC).c
$(POINTER_VECTOR_STRUCT_STATIC:=.$(EXTENSION)): $(POINTER_VECTOR_STRUCT_STATIC).c
$(VECTOR_STRUCT_STATIC:=.$(EXTENSION)): $(VECTOR_STRUCT_STATIC).c
$(VECTOR_STRUCT_DYNAMIC:=.$(EXTENSION)): $(VECTOR_STRUCT_DYNAMIC).c

# NOTE:
# $@ is the target name
# $? is pre-requisites

$(TARGETS):
	$(CC) $(INCLUDE) $(CFLAGS) -o $@ $? $(LDFLAGS)

run-vector-struct-static: $(VECTOR_STRUCT_STATIC:=.$(EXTENSION))
	./$?

run-vector-struct-dynamic: $(VECTOR_STRUCT_DYNAMIC:=.$(EXTENSION))
	./$?

run-pointer-vector-struct-dynamic: $(POINTER_VECTOR_STRUCT_DYNAMIC:=.$(EXTENSION))
	./$?

run-pointer-vector-struct-static: $(POINTER_VECTOR_STRUCT_STATIC:=.$(EXTENSION))
	./$?


clean:
	rm -rfv '*.$(EXTENSION)'

.PHONY: clean compile all
