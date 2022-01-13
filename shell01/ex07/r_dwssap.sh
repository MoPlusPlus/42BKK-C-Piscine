#cat /etc/passwd
#remove comment
#every other line starting from the second line
#reversing each login
#sorted in reverse alphabetical order
#and keeping only logins between FT_LINE1 and FT_LINE2 included
#and they must separated by ", "(without quotationmarks)
#and the output must end with a "."

 cat /etc/passwd | sed -e 's/#.*//' -e 's/[ ^I]*$//' -e '/^$/ d' -e 's/:.*//g' \
 | tr '\n' ',' | rev | tr "," "\n" | sort -r | tr "\n" ","  \
 | sed -e 's/, */, /g' -e 's/.$//' -e 's/.\{3\}$//'
