

let i=0

while [ $i -lt 100 ]; do
   ./taschenrechner "sinus(${i}/10.0)"
   let i=$i+1
done
