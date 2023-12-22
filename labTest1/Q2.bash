#!/bin/bash
#Alam Rincon Rodrigues M00774667 Group 3
#Q2
var1=$1
var2=$2
fact() {
    if [ $1 -le 1 ]
    then 
        echo 1
    else
        f=$(fact $[ $1 - 1 ])
        echo $[ $f * $1 ]
    fi
}
fib() {
    if [ $1 -le 0 ]
    then 
        echo 0
    elif [ $1 -eq 1 ]
    then 
        echo 1
    else
        f_number_1=$(fib $[ $1 - 1 ])
        f_number_2=$(fib $[ $1 - 2 ])
        fib=$[ $f_number_1 + $f_number_2 ]
    fi
    echo $fib
}
if [ $var1 -gt $var2 ]
then
    echo "$var1 is greater than $var2"
    fact $var1
elif [ $var2 -gt $var1 ]
then 
    echo "$var2 is greater than $var1"
    fact $var2
else
    echo "$var1 and $var2 are equal"
    fib $var1 
fi