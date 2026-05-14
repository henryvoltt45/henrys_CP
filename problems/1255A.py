t = int(input())
for _ in range(t):
    a, b = map(int, input().split())
    d = abs(a - b)
    
    ans = d // 5
    d %= 5
    ans += d // 2
    d %= 2
    ans += d
    
    print(ans)