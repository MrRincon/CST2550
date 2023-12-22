#!/bin/bash
#Alam Rincon Rodrigues M00774667 Group 3
#Q1
exec 5<&0
exec 0<student.txt

while read line 
do 
    echo $line
    done