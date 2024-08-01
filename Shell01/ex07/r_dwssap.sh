export FT_LINE1=3 
export FT_LINE2=8 
cat /etc/passwd | grep -v '#' | sed '1!n;d' | cut -d':' -f1 | rev | sort -r | awk 'NR >= ENVIRON["FT_LINE1"] && NR <= ENVIRON["FT_LINE2"] {printf $0 ", "} END {print "."}'
