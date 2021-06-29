N = (int)(input())
v = [(int)(i) for i in input().split()]
ans = v[0]
init = 0

for i in range(N) :
	init = max(init + v[i], v[i])
	ans = max(ans, init)

print (ans)
