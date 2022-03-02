#!/bin/sh

cat -e /etc/passwd | cut -d":" -f1  | sed -n 'n;p' | rev | sort -r | sed -n "$FT_LINE1,$FT_LINE2 p" | sed -z 's/\n/, /g' | sed 's/, $/./g'