ifeq ($(OS),Windows_NT)
	EXTENSION := exe
else
	EXTENSION := out
endif

CXX = gcc
LFLAGS = -lm -Wall -o
POINTER_VECTOR_STRUCT_DYNAMIC = pointer-vector-struct-dynamic
POINTER_VECTOR_STRUCT_STATIC = pointer-vector-struct-static
VECTOR_STRUCT_STATIC = vector-struct-static
VECTOR_STRUCT_DYNAMIC = vector-struct-dynamic

all: compile-all

compile-all: compile-pointer-vector-struct-dynamic \
             compile-pointer-vector-struct-static \
             compile-vector-struct-static \
             compile-vector-struct-dynamic


compile-pointer-vector-struct-dynamic:
	$(CXX) $(LFLAGS) $(POINTER_VECTOR_STRUCT_DYNAMIC).$(EXTENSION) $(POINTER_VECTOR_STRUCT_DYNAMIC).c

compile-pointer-vector-struct-static:
	$(CXX) $(LFLAGS) $(POINTER_VECTOR_STRUCT_STATIC).$(EXTENSION) $(POINTER_VECTOR_STRUCT_STATIC).c

compile-vector-struct-static:
	$(CXX) $(LFLAGS) $(VECTOR_STRUCT_STATIC).$(EXTENSION) $(VECTOR_STRUCT_STATIC).c

compile-vector-struct-dynamic:
	$(CXX) $(LFLAGS) $(VECTOR_STRUCT_DYNAMIC).$(EXTENSION) $(VECTOR_STRUCT_DYNAMIC).c


run-vector-struct-static:
	./$(VECTOR_STRUCT_STATIC).$(EXTENSION)

run-vector-struct-dynamic:
	./$(VECTOR_STRUCT_DYNAMIC).$(EXTENSION)

run-pointer-vector-struct-dynamic:
	./$(POINTER_VECTOR_STRUCT_DYNAMIC).$(EXTENSION)

run-pointer-vector-struct-static:
	./$(POINTER_VECTOR_STRUCT_STATIC).$(EXTENSION)

clean:
	rm -v *.out

.PHONY: clean cancer
