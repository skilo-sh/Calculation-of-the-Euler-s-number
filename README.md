# Calculation of the Euler's number

Qu'est ce que le nombre d'Euler ? 
    --> https://en.wikipedia.org/wiki/E_(mathematical_constant)

Une manière simple de calculer e est d'utiliser la série de Taylor.
La série de Taylor est une série infinie qui permet de développer une fonction en une somme infinie de termes. 

Pour la fonction $e^x$, nous avons :

$$e^x = \sum_{n=0}^{\infty} \frac{x^n}{n!}$$

Dans cette relation, e est la base de l'exponentielle, x est une valeur quelconque et n! désigne la factorielle de n (par exemple, 4! = 4 x 3 x 2 x 1 = 24). <br>

La valeure de $e^x$ est obtenue en faisant la somme des termes de la série. Plus on ajoute de termes, plus la valeur de $e^x$ sera précise.

Dans mon code je prends x = 1 afin de trouver $e^1$ donc e, nous avons alors : 
$$e = 1 + 1 + \frac{1^2}{2!} + \frac{1^3}{3!} + \frac{1^4}{4!} + \dots$$

En faisant la somme des 30 premiers termes, j'obtiens $e = 2.71828$ ce qui va dans le sens du e qu'on connait car il vaut lui : $$2.71828182845904523536028747135266249775724709369995.... $$
