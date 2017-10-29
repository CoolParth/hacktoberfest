#!/bin/bash
for ((i=1;i<=$#;i++))
	do
	arr[i]=${!i}	
	done
#	echo ${arr[@]}
	for((i=1;i<=$#;i++))
	do
	#	echo ${arr[$i]}
		for((j=i+1;j<=$#;j++))
		do
			if [ ${arr[$i]} -gt ${arr[$j]} ]
			then
				swap=${arr[$i]}
				arr[$i]=${arr[$j]}
				arr[$j]=$swap

			fi
		done
	done
	echo ${arr[@]}
