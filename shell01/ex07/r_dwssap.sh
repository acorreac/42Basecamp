#!/bin/sh

cat /etc/passwd | grep -v "^#"  | awk -F ":" '{if(NR%2==0) print $1}' | rev | sort -r | awk -v lin1=$FT_LINE1 -v lin2=$FT_LINE2 '{if(NR>=lin1 && NR<=lin2) print $1}' | tr "\n" "," | sed -e 's/,/, /g' | sed -e 's/, $/./'
