def dp(cur, end):
    if cur == end:
        return 1
    elif cur > end or cur == 6:
        return 0
    else:
        return dp(cur+2, end) + dp(cur*3, end)


print(dp(1, 25) * dp(25, 63))
