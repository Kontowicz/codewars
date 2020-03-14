def domain_name(url):
    if 'http://' in url:
        url = url[0+len('http://')::]
    if 'https://' in url:
        url = url[0+len('https://')::]
    if 'www.' in url:
        url = url[0+len('www.')::]
        
    to_return = ''
    for c in url:
        if c == '.':
            break
        to_return += c
    return to_return

assert domain_name("http://google.com") == "google"
assert domain_name("http://google.co.jp") == "google"
assert domain_name("www.xakep.ru") == "xakep"
assert domain_name("https://youtube.com") == "youtube"
print('Test pass.')