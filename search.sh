
ls | grep -q 'checker'
if [ $? -eq 1 ] ; then
    ./a.out > checker
fi

#./a.out > checker
grep -a '$1' checker

while [ $? -eq 1 ] ; do
    ./a.out > checker
    grep -a '$1' checker
done
