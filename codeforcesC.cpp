t = int(input())
for _ in range(t):
	n = int(input())
	ans=0
	c=3
	prev =1
	level=1
	#total = c*c
	while c<=n:
		total = c*c
		need = total-prev
		prev = total
		c+=2
		ans += (need*level)
		print(ans)
		level+=1
	print(ans)
