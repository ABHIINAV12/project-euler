
def main():
	ans=1
	for i in range(1,501):
		add=2*i
		start=4*i*i - 2*i + 1
		for j in range(0,4):
			ans+=start
			start+=add
	print(ans)
main()