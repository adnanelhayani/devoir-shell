
//exercice 1

#!/bin/bash
if tset -d $home/$1;then
   echo $1" existe sur le compte"
else
   echo $1" n'est existe pas "
fi 


//exercic 2

#!/bin/bash
read -p"entre le nom de dossier": nom
if test -d $nom ;then
  echo "le fichier existe"
else
    if mkdir $nom 2>/dev/null;then
     echo "le fichier est creer"
    else
      echo "le repertoire n'est creer pas"
    fi
fi 
