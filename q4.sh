#!/bin/bash
for ((i=1;i<=10;i++))
do
	var=`expr $i \* $i`
	echo $var
done
for ((i=1;i<=10;i++))
do
	var2=$i
	for ((j=1;j<i;j++)) 
        do
	var2=`expr $var2 \* $i`
	done
	echo $var2
done
 var3=1
 var4=1
 echo $var3
for ((k=3;k<=11;k++))
do	
	varn=$(( var3 + var4))
	var3=$var4
	var4=$varn
	varp=`expr $varn % 2`
	if [ $varp != 0 ]
	then
		echo $varn
	fi
done
