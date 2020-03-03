def pig_it(text):
    to_return = ''
    
    for word in text.split(' '):
        if word not in {'.', ',', '?', '!', '-'}:
            tmp = word[1::]+word[0]+'ay'
            to_return += tmp + ' '
        else:
            to_return = to_return.strip()
            to_return += ' ' + word + ' '
        
    return to_return.strip()

assert pig_it('Pig latin is cool') == 'igPay atinlay siay oolcay'
assert pig_it('This is my string') == 'hisTay siay ymay tringsay'
print('Test pass.')