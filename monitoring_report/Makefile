all: monitoring_report.pdf

TEX_FILE = $(addsuffix .tex, $(basename $< .hal))
AUX_FILE = $(addsuffix .aux, $(basename $< .hal))

%.pdf: %.hal
	hal $< > $(TEX_FILE)
	lualatex $(TEX_FILE)
	bibtex   $(AUX_FILE)
	lualatex $(TEX_FILE)
	lualatex $(TEX_FILE)

slides.pdf: slides.hal
	hal $< > slides.tex
	lualatex slides.tex
