#!/bin/bash

filesdir=$1
searchstr=$2

if [ "$#" -eq 1 ]
then
	echo "Error: Arguments are missing"
	exit 1
fi
if [ ! -d $filesdir ]
then
	echo "Error : File directory is not present"
	exit 1
else
	X=$( ls "$filesdir" |wc -l )
	Y=$( grep -irn "$searchstr" "$filesdir" | wc -l )
	echo "The number of files are $X and the number of matching lines are $Y"
fi

