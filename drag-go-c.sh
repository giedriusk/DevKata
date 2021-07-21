#!/bin/bash

echo "c goes into the track:"

for i in {1..32}
do

	read up rest </proc/uptime; t1="${up%.*}${up#*.}"
	./c/sortinsertion > /dev/null
	read up rest </proc/uptime; t2="${up%.*}${up#*.}"

	millisec=$(( 10*(t2-t1) ))
	echo $millisec

done

echo "go goes into the track:"

for i in {1..32}
do

        read up rest </proc/uptime; t1="${up%.*}${up#*.}"
        ./go/sortinsertion > /dev/null
        read up rest </proc/uptime; t2="${up%.*}${up#*.}"

        millisec=$(( 10*(t2-t1) ))
        echo $millisec

done

