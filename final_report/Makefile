all: final_report.pdf

TEX_FILE = $(addsuffix .tex, $(basename $< .hal))
AUX_FILE = $(addsuffix .aux, $(basename $< .hal))

%.pdf: %.hal
	hal $< > $(TEX_FILE)
	lualatex -shell-escape $(TEX_FILE)
	bibtex   $(AUX_FILE)
	lualatex -shell-escape $(TEX_FILE)
	lualatex -shell-escape $(TEX_FILE)

slides.pdf: slides.hal
	hal $< > slides.tex
	lualatex slides.tex
