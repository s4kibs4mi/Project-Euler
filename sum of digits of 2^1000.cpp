number=2**1000
digit_sum=0
while(number>0):
	digit=number%10
	number=number/10
	digit_sum+=digit

print digit_sum
