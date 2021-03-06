#makefile
.PHONY: clean
EXE = bin/main
INCLUDE_DIR = include
LIB_DIR = lib
SUBDIR= src
LDSUBDIR = src/test src/chapter3
LDSUBDIR += src/chapter4

GCC = clang++

CXX_SOURCES = $(foreach dir,$(SUBDIR), $(wildcard $(dir)/*.cpp))
CXX_OBJECTS = $(patsubst %.cpp, %.o, $(CXX_SOURCES))

LD_CXX_SOURCES = $(foreach dir,$(LDSUBDIR), $(wildcard $(dir)/*.cpp))
LD_CXX_OBJECTS = $(patsubst %.cpp, %.o, $(LD_CXX_SOURCES))
LD_CXX_HEADS = $(patsubst %.cpp, %.h, $(LD_CXX_SOURCES))
LD_CXX_LIBS = $(patsubst %.cpp, lib/%.so, $(addprefix lib, $(notdir $(LD_CXX_SOURCES))))
CXX_LINKS = $(patsubst %, -l%, $(notdir $(basename $(LD_CXX_SOURCES))))


CXXFLAGS += -std=c++11 -Wall -g
LDFLAGS += 


CXX_INCLUDE = -I./include
CXX_LIBS = -L./lib

$(EXE): $(CXX_OBJECTS) $(LD_CXX_LIBS)
	@echo $(LD_CXX_SOURCES)
	@echo $(LD_CXX_OBJECTS)
	@echo $(LD_CXX_LIBS)
	$(GCC) $(CXX_LIBS) $(CXX_LINKS) $(CXXFLAGS) $^ -o $@

$(LD_CXX_LIBS): $(LD_CXX_OBJECTS)
	$(GCC) -fPIC -shared $^ -o $@

%.o: %.cpp
	cp -f $(LD_CXX_HEADS) $(INCLUDE_DIR)
	$(GCC) $(CXXFLAGS) $(CXX_INCLUDE) -c $< -o $@

clean:
	rm $(EXE) $(LD_CXX_LIBS) $(LD_CXX_OBJECTS)
