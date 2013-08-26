#! /bin/bash

RELSCRPATH=`dirname $0`
WD=`pwd`

echo ">> Cleaning mmc"
MMCPATH=$RELSCRPATH/../mmc/
make -f $RELSCRPATH/../Makefile PKGPATH=$MMCPATH TARGET=mmc CXXFLAGSDEP="-I$WD"

echo ">> Cleaning TSelector_SusyNtuple"
MYTSELPATH=$RELSCRPATH/../
make -f $RELSCRPATH/../Makefile PKGPATH=$MYTSELPATH TARGET=TSelector_SusyNtuple CXXFLAGSDEP="-I$RELSCRPATH/../../RootCore/include/ -I$WD" 

