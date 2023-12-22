cut -c 47-200 farben|sed -r "s/(.*)\W+=(.*)\;/int SFcolorCode::get_\1\(\) \\{ return \2;\\}/g;"
