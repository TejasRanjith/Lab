echo "Enter the Number"
read n
$fact
$i
fact=1
i=1
while [ $i -le $n ]
do
fact=`expr $i \* $fact`
i=`expr $i + 1`
done
echo "the factorial number of $n is $fact"

#Enter the Number
#5
#the factorial number of 5 is 120

#Enter the Number
#4
#the factorial number of 4 is 24

