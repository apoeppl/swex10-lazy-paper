build/main.pdf: main.tex *.tex
	mkdir -p build
	latexmk -outdir=build -pdf $<

%.pdf: build/%.pdf
	mv $< $@ # atomic!
	cp $@ $<

.PHONY: show

show: main.pdf
	gnome-open $< || open $<

clean:
	rm -rf build
