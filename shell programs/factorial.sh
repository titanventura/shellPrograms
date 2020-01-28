echo "Enter a number for factorial calculation"
read num

x=$num
fact=1

while [ $x -gt 1 ]
do
number=$x
fact=`expr $fact \* $number`
x=`expr $x - 1`
done

echo "the factorial of $num is $fact"
