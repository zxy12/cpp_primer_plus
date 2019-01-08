#makefile
.PHONY: clean
EXE = bin/main
SUBDIR= src

GCC = clang++

CXX_SOURCES = $(foreach dir,$(SUBDIR), $(wildcard $(dir)/*.cpp))
CXX_OBJECTS = $(patsubst %.cpp, %.o, $(CXX_SOURCES))

CXXFLAGS += -std=c++11 -Wall -g
LDFLAGS += 

$(EXE): $(CXX_OBJECTS)
	$(GCC) $(CXXFLAGS) $^ -o $@

%.o: %.cpp
	$(GCC) $(CXXFLAGS) -c $< -o $@

clean:
	@echo clean...
