cut -c 47-200 farben|sed -r "s/(.*)\W+=(.*)\;/static int get_\1\(\);/g;"
