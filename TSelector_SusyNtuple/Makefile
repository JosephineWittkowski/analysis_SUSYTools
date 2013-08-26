PKGPATH     = $(shell echo ${PKGPATH})

# Provide the name of your class in the TARGET variable
TARGET = dummy
# or specify it in the command line
# e.g.: make TARGET=myclass

TARGETSRC   = $(PKGPATH)/$(TARGET).cpp
TARGETCINT  = $(PKGPATH)/$(TARGET)Cint.cpp
TARGETCINTO = $(PKGPATH)/$(TARGET)Cint.o
TARGETO     = $(PKGPATH)/$(TARGET).o
TARGETSO    = $(PKGPATH)/lib$(TARGET)_cpp.so
PKGSO	    = $(PKGPATH)/lib$(PKGNAME).so

CXX           = g++
CXXFLAGS      = -g -Wall -fPIC -Wno-deprecated `root-config --cflags` 
LD            = g++
#LDFLAGS       = -g
SOFLAGS       = `root-config --auxcflags` -shared
LIBS	      = `root-config --libs`
GLIBS	      = `root-config --glibs`

CXXFLAGSDEP   = 
LIBSDEP       =

CXXFLAGS     += -I$(PKGPATH) $(CXXFLAGSDEP)
#LIBS         += $(LIBSDEP)
GLIBS        += $(LIBSDEP)

all: $(TARGETSO)

$(TARGETCINT):
	rootcint -f $(TARGETCINT) -c -I$(ROOTSYS)/include $(CXXFLAGSDEP) $(PKGPATH)/$(TARGET).hpp $(filter $(wildcard $(PKGPATH)/*.h), $(PKGPATH)/$(TARGET)_linkdef.h)

$(TARGETCINTO): $(TARGETCINT)
	$(CXX) $(CXXFLAGS) -c -o $(TARGETCINTO) $(TARGETCINT)

$(TARGETO): $(TARGETSRC)
	$(CXX) $(CXXFLAGS) -c -o $(TARGETO) $(TARGETSRC)

$(TARGETSO): $(TARGETO) $(TARGETCINTO)
	$(LD) $(SOFLAGS) $(LDFLAGS) $(TARGETO) $(TARGETCINTO) $(GLIBS) -o $(TARGETSO)

$(PKGSO): 
	$(LD) $(SOFLAGS) $(LDFLAGS) $(TARGETO) $(GLIBS) -o $(PKGSO)

clean:
	rm -f $(TARGETO) $(TARGETCINTO) $(TARGETCINT) $(TARGETREFLEXO) $(TARGETREFLEX) $(TARGET)Cint.hpp $(TARGETSO) *.cpp~ *.hpp~ Makefile~ *.d
