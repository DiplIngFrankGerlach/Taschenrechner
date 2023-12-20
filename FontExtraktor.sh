cut -c15-200 fonts |sed "s/\([^ ]*\).*= \([^ ]*\); .*/int SFfont::getFontID_\1_(void) \{ return \2;\}"/g > fonts_impl
