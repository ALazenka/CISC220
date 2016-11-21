
# For: Margaret Lamb, CISC 220
# Written by: Renee Rosario (10192027), Andrew Lazenka (10176676)
# pigLatin.sh  takes in one parameter which is a word to be converted
# If the word starts with a vowel, it will remain the same and add 'way' on the end of the word
# If the word starts with one or more consonents, they will be taken off up until a vowel is found,
# then added back onto the end of the word, and add 'ay' after that
# The program will throw and error message if the user has inputted more than one parameter

consonents="" # keeps track of any consonents found at the start of the word (if any)
output="" # the final constructed word to be outputted to the console
string=$1 # stores parameter into string
stringLength=${#string} # stores the size of the string
i=0 # variable for the for loop
stillInLoop=0 # acts as a boolean parameter to check if the while loop must continue or not

if [ $# -eq 1 ] # if the number of parameters is equal to 1
then
	while (( $i!=$stringLength )) && ((  $stillInLoop==0 )) # continue if i does equal the length of string, and we are still in the loop
	do
		checkVowel=0 # acts as a boolean parameter to check if a vowel has been found
		letterInWord=${string:$i:1} # evaluates to the current letter in the string based on the value of i
		for j in a e i o u A E I O U # set j to be the set of upper and lower case vowels
		do
			if [ "$letterInWord" = "$j" ] # if the current letter evaluates to a vowel
			then
				checkVowel=$(( checkVowel+1 )) # flip the boolean on, this will exit the for and while loop
			fi # end if
		done # end for
		if (( $checkVowel==0 )) # if a vowel has not been found
		then
			consonents=$consonents$letterInWord # set the block of consonents equal to itself plus the new letter
			((i++))
		else
			if ((${#consonents} == 0)) # check if the string starts with a vowel or a consonent
			then
				output=$string"way" # the output is set to the string with 'way' on the end
				((stillInLoop++)) # flip the boolean on, exitting the loop
			else
				output=${string:$i:$stringLength}$consonents"ay" # the output is set to the rest of the string, the block of consonents, and then 'ay' at the end
				((stillInLoop++)) # flip the boolean on, exitting the loop
			fi # end inner if
		fi # end outer if
	done # end while
	echo $output # echos the word stored in output
else
	echo "error: wrong number of arguments for pigLatin.sh (needs exactly one)" # echos that the user has entered too many parameters
fi # end outer most if
