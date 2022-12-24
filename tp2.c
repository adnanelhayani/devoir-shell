// exercice 1

#!/bin/bash
echo "entre le nom de fichier"
read nom
gcc $nom -o $nom.exe 2>/dev/null
if  [ $? -eq 0 ];then
   
   echo "le programe bien compile"
else
     echo "error de compilation "
     exit 1
fi
while echo "voulez vous exicute (o/n)"&& read o &&[ $0 !="o"];do
      echo "entre n pour quitee"
        if [ $0 == "n"];then
        exit 0
         fi
done 


//exercice 2

#!/bin/bash
until echo "entrer le mois"&& read mois && test $mois -gt 0 -a $mois -le 12;
do
  echo "le mois est une valeur entre 1 et 12 "
done
until echo "entrer l'annee"&& read annee &&
 test $annee -gt 0 -a $annee -le 2038;
do
  echo "l'annee est une valeur entre 1 et 2038 "
done

cal $mois $annee
