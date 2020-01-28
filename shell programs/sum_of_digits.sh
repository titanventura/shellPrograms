echo "enter number to calculate sum of digits"
read num

x=$num
sum=0

while [ $x -gt 0 ]
do
desired=`expr $x % 10`
sum=`expr $sum + $desired`
x=`expr $x / 10`
done

echo "$sum" 
