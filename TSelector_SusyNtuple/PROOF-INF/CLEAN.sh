#! /bin/bash

RELSCRPATH=`dirname $0`
echo $RELSCRPATH

echo ">> Cleaning mmc"
MMCPATH=$RELSCRPATH/../mmc/
make -f $RELSCRPATH/../Makefile PKGPATH=$MMCPATH TARGET=mmc clean

echo ">> Cleaning TSelector_SusyNtuple"
MYTSELPATH=$RELSCRPATH/../
make -f $RELSCRPATH/../Makefile PKGPATH=$MYTSELPATH TARGET=TSelector_SusyNtuple CXXFLAGSDEP="-I$RELSCRPATH/../../RootCore/include/" clean

