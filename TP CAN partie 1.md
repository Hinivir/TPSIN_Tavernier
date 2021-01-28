# TP CAN partie 1

> Question 1 : Quelles-sont les grandeurs physiques présentes en entrée et en sortie du capteur de luminosité ?


![](https://i.imgur.com/w2xJUdy.png)
En entrée on a de l'énergie lumineuse et en sortie de l'énergie électrique.

>Question 2 : Sur la documentation du constructeur du capteur GL5528, la figure présentant la réponse spectrale fait apparaître trois courbes. A quoi correspondent-elles ?

CdS correspond à PhotoCell on utilise CdS car elles sont faite de calcium sulfite
CdSe est une autre PhotoCell elle est faite en Séléniure de cadmium
Cd(S.Se) est la dernière est aussi une PhotoCell fait en Cadmium
[Lien du site](https://wiki.mchobby.be/index.php?title=Photo-r%C3%A9sistance)


>Question 3 : Déterminer pour quelle longueur d’onde le capteur GL5528 a la meilleure sensibilité.

Le capteur CdS est à son maximum pour 530 nm
Le capteur Cd(S.Se) est à son maximum pour 620 nm
Le capteur CdSe est à son maximum pour 710 nm

>Question 4 : Quelles-sont les longueurs d’ondes que le capteur de lumière GL5528 est capable de détecter en présentant une atténuation de sa sensibilité comprise entre 0dB et 6dB ? 

Elle peut atteindre 540 nm

>Question 5 : La figure 2 détaille la décomposition spectrale de la lumière. Quelles-sont les couleurs que le capteur de lumière GL5528 est capable de détecter en présentant une atténuation de sa sensibilité comprise entre 0dB et 6dB ?

Le capteur de lumière peut détecter du vert au rouge clair.

>Question 6 : A l’aide du document fourni en annexe 0, déterminer quel-est le flux lumineux moyen présent dans une salle de classe ?

Le flux lumineux dans une salle de classe est de 500 lux.

>Question 7 : A l’aide de la documentation constructeur du GL5528, estimer quelle sera la résistance présente aux bornes du capteur de lumière pour ce flux lumineux ?

La résistance présente à la borne du capteur est de 1 kΩ.

>Question 8 : Exprimer la relation qui lie la tension V+ à la tension Vcc en fonction de Ph1 et R1.

V+ = Vcc *  R1 / RPh1 + R1

>Question 9 : L’amplificateur opérationnel TL082 est monté en suiveur. Donner à présent la relation qui lie la tension Vs à la tension Vcc en fonction de Ph1 et R1.

Vs = Vcc * R1 / RPh1 + R1

>Question 10 : Quel-est l’intérêt d’utiliser un montage suiveur en électronique ?


C'est utiliser quand le montage qui fournit la tension d'alimentation est trop faible (risque que la tension s'écroule avec une charge trop élevé)
alors qu'un aop en suiveur a une impédance d'entrée très grand (megohm)
[Lien du site](https://forums.futura-sciences.com/electronique/65681-a-quoi-sert-sert-un-suiveur.html#:~:text=Le%20suiveur%20recopie%20la%20tension,des%20tensions%20de%20faible%20amplitude.)
