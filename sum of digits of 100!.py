number=1
# finding out the factorial of 100!
for i in range(1,100):
	number*=i
digit_sum=0
# finding out the sum of digits of 100!
while(number>0):
	digit=number%10
	number=number/10
	digit_sum+=digit

print digit_sum
