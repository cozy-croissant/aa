cat /etc/passwd | sed '/^#/d' | sed '1d; n; d'| cut -f1 -d ':' | rev | sort -r | awk -v st=$FT_LINE1 -v ed=$FT_LINE2 'NR>=st && NR<=ed' | tr '\n' ',' | sed 's/,/, /g' | sed 's/, $/./'
