senha_5d = 0
def cifrar_palavra(palavra_5c, senha_5d):
	cifrado = ""
	i = 0
	while i < 5:
		p = senha_5d.index(str(i))
		cifrado += palavra_5c[p]
		i += 1
	return cifrado

senha_5d = 0
def decifrar_palavra(palavra_5c, senha_5d):
	decifrado = ""
	sen = ""
	i = 0
	p = 0
	while i < 5:
		sen += "{}".format(senha_5d.index(str(i)))
		i += 1
	i = 0
	while i < 5:
		p = sen.index(str(i))
		decifrado += palavra_5c[p]
		i += 1
	return decifrado

def cifrar(frase, senha_5d):
	n = len(frase)
	frase = frase + (5 - (n % 5)) * " "
	cifrado = ""
	k = 0
	while k < len(frase):
		pa = frase[k:k+5]
		cifrado += cifrar_palavra(pa, senha_5d)
		k += 5
	return cifrado

def decifrar(frase, senha_5d):
    n = len(frase)
    frase = frase + (5 - (n % 5)) * " "
    decifrado = ""
    k = 0
    while k < len(frase):
        pa = frase[k:k+5]
        decifrado += decifrar_palavra(pa, senha_5d)
        k += 5
    return decifrado

op = ""
while op != '3':
	print("Deseja: \n")
	print("1 - Cifrar")
	print("2 - Decifrar")
	print("3 - Sair")
	op = input()
	if op == "1":
		fr = input("Digite uma frase: ")
		sn = input("Digite uma senha de 5 dígitos")
		cifr = cifrar(fr, sn)
		print("\nFrase cifrada: {}\n".format(cifr))
	elif op == '3':
		break
	else:
	    decifr = decifrar(cifr, sn)
	    print("\nFrase decifrada: {}\n".format(decifr))

