
# Solution by : Ganesha Danu (github.com/blinfoldking)

if __name__ == '__main__':
    inp = input().split()
    curr = inp[0]
    count = 1

    res = []

    for i in range(1, len(inp)):
        if (inp[i] != curr) or count == 255:
            res.append(count)
            res.append(curr)
            curr = inp[i]
            count = 1
        else:
            count += 1
    res.append(count)
    res.append(curr)
    out  = ' '
    print (len(res))
    print (out.join([str(s) for s in res]))