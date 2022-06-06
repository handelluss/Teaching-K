def s(n):
    return sum(list(map(int, list(str(n)))))

def dp(cur, end):
    if cur == end:
        return 1
    elif cur > end:
        return 0
    else:
        return dp(cur+2, end) + dp(cur+s(cur), end)


print(dp(3,29) * dp(29, 68))
