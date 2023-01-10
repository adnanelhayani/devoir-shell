1) ls -l | tr " " "*"                 (cat /etc/passwd | tr " " "*")

2) awk -F: '{print "nom: " $1,"UID: " $3}' /etc/passwd

3) who | awk '{print $1,$2}'

4) who | awk '{print $1,"     ",$2}'

5) 

6) awk -F: '{print NR,$1}' /etc/group

7) awk 'NR==5,NR==10' /etc/passwd   ou  sed -n '5,10p' /etc/passwd

8) awk ' END {print NR}' /etc/passwd

9) sed -n '$p' /etc/passwd

10) awk -F: '$NF == "" {print $1}' /etc/passwd

11) netstat -a | awk '{print $4 "-----" $6}' | grep "LISTEN"
