# 42_read_document

Rush 02 de la piscina de 42 Urduliz, Octubre 2023.

**El reto**: Crear un programa en C que abra y lea un documento externo en el que transforme los dígitos en caracteres (de forma que cuando al programa le pasamos, por ejemplo, el 23, sepa que tiene que devolvernos "Twenty three").

>Ejemplo de documento:
>1: One
>2: Two
>3: Three
>4: Four
>5: Five
>...
>10: Ten
>20: Twenty
>...

**El resultado**: Conseguimos hacer una muy buena gestión de errores y que el programa nos devolviera el número solamente si estaba en el documento. Es decir, si le pedimos 23, nos aparece un mensaje de error, pero si le pedimos 20, nos devuelve "Twenty". Aun así, hay algunos errores dependiendo del número que solicitemos.

