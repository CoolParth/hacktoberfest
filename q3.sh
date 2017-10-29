#!/bin/bash
var1=`expr $1 / 100`
var2=`expr $1 % 100 / 10`
var3=`expr  $1 % 10`
if [ $var1 -eq 0 ]
then
	pp=0
fi
if [ $var1 -eq 1 -o $var1 -eq 2 -o $var1 -eq 3 ]
then  
	for((i=1;i<=$var1;i++))
	do
		echo -n "C"	
	done
	fi      
if [ $var1 -eq 4 ]
then    
	echo -n "CD"
fi      
if [ $var1 -eq 5 ]
then    
	echo -n "D"
fi      
if [ $var1 -eq 6 -o $var1 -eq 7 -o $var1 -eq 8 ]
then    
	echo -n "D"
	for((i=6;i<=$var1;i++))
	do
		echo -n "C"
	done
fi      
if [ $var1 -eq 9 ]
then    
	echo -n "CM"
fi      
if [ $var2 -eq 0 ]
then
	ff=0
fi
if [ $var2 -eq 1 -o $var2 -eq 2 -o $var2 -eq 3 ]
then
        for((i=1;i<=$var2;i++))
	do 
	echo -n "X"  
	done
fi
if [ $var2 -eq 4 ]
then    
        echo -n "XL"
fi      
if [ $var2 -eq 5 ]
then    
        echo -n "L"
fi      
if [ $var2 -eq 6 -o $var2 -eq 7 -o $var2 -eq 8 ]
then    
        echo -n "L"
        for((i=6;i<=$var2;i++))
	do
	echo -n "X"
	done
fi
if [ $var2 -eq 9 ]
then
        echo -n "XC"
fi
if [ $var3 -eq 0 ]
then
	gg=0
fi
if [ $var3 -eq 1 -o $var3 -eq 2 -o $var3 -eq 3 ]
then
        for((i=1;i<=$var3;i++))
	do
	echo -n "I" 
	done	
fi
if [ $var3 -eq 4 ]
then
        echo -n "IV"
fi
if [ $var3 -eq 5 ]
then
        echo -n "V"
fi
if [ $var3 -eq 6 -o $var3 -eq 7 -o $var3 -eq 8 ]
then
        echo -n "V"
        for((i=6;i<=$var3;i++))
	do
	echo -n "I"
	done
fi
if [ $var3 -eq 9 ]
then
        echo -n "IX"
fi
echo
