a=1
b=1
i=1
while(1):
	numb=a
	digit_count=0
	while(numb>0):
		digit=numb%10
		numb=numb/10
		digit_count+=1
	print "Term : ", i, " | Number : ", a
	if(digit_count==1000):
		break;
	c=a+b
	a=b
	b=c
	i+=1
