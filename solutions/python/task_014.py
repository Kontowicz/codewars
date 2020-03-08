def make_readable(seconds):
    hours = seconds // 3600
    seconds = seconds % 3600
    min = seconds // 60
    seconds =seconds % 60
    return '{:02d}'.format(hours) + ':' + '{:02d}'.format(min) + ':' + '{:02d}'.format(seconds)

assert make_readable(0) == "00:00:00"
assert make_readable(5) == "00:00:05"
assert make_readable(60) == "00:01:00"
assert make_readable(86399) == "23:59:59"
assert make_readable(359999) == "99:59:59"

print('Test pass.')