def fact(a):
	if a==1:
		return 1
	else:
		return a*fact(a-1)

def main():
	a=fact(40)
	b=fact(20)
	a//=b
	a//=b
	print(a)
main()
