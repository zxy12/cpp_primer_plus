#Makefile
.PHONY: clean
EXE = helloworld
SUBDIR= src

CXX_SOURCES = $(foreach dir,$(SUBDIR), $(wildcard $(dir)/*.cpp))
CXX_OBJECTS = $(patsubst %.cpp, %.o, $(CXX_SOURCES))

CXXFLAGS +=
LDFLAGS += 

$(EXE):
	@echo exe.
clean:
	@echo clean..
