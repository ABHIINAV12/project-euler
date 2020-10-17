from num2words import num2words

def main():
	ans=0
	for i in range(1,1001):
		string=num2words(i)
		for j in range(0,len(string)):
			if string[j]!=' ' and string[j]!='-':
				ans+=1
	print(ans)
main()
