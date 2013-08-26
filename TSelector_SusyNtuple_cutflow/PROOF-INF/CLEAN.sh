#! /bin/bash

RELSCRPATH=`dirname $0`
echo $RELSCRPATH

echo ">> Cleaning TSelector_SusyNtuple"
MYTSELPATH=$RELSCRPATH/../
make -f $RELSCRPATH/../Makefile PKGPATH=$MYTSELPATH TARGET=TSelector_SusyNtuple_cutflow CXXFLAGSDEP="-I$RELSCRPATH/../../RootCore/include/" clean

