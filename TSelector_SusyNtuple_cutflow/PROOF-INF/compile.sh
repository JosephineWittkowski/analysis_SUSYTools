#! /bin/bash

RELSCRPATH=`dirname $0`
WD=`pwd`

echo ">> Cleaning TSelector_SusyNtuple_cutflow"
MYTSELPATH=$RELSCRPATH/../
make -f $RELSCRPATH/../Makefile PKGPATH=$MYTSELPATH TARGET=TSelector_SusyNtuple_cutflow CXXFLAGSDEP="-I$RELSCRPATH/../../RootCore/include/ -I$WD" 

