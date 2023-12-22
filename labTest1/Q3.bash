#!/bin/bash
#Alam Rincon Rodrigues M00774667 Group 3
#Q3 
myArray=(1 2 3 4 5)
smallest=100
largest=0
for item in ${myArray[@]};
    if [ $item -gt $largest ]
    then 
        largest=$item
    if [ $item -lt $smallest]
    then 
        smallest=$item
    fi
    done
echo "largest is $largest, smallest is $smallest