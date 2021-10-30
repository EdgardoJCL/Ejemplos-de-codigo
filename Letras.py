#Este código leera si las letras de la palabra estan en mayuscula o en minuscula, y las cambiara, mayusculas a minuscula y alreves.
def swap_text(s): #nombre de la función
    result = ""
    for letter in s: #recorre la palabra, letra por letra, letter nombre de las iteraciones.
       if letter == letter.upper(): #hace una evaluación diciendo si la letra en la cual estamos es mayuscula
          result += letter.lower() #las letras nayusculas a minusculas, las letras indicada
       else: #se da este caso sino funciona el anterior
          result += letter.upper()
     print(result)      
    
swap_text("hola TODOS") #llamamos a la función

#Ten SIEMPRE PENDIENTE la indentación
