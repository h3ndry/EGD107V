DOC_NAME = sh_khoza_214651459_concept_paper

build: main.tex main.cls main.bib
	pdflatex -jobname=$(DOC_NAME) main.tex
	biber $(DOC_NAME)
	pdflatex -jobname=$(DOC_NAME) main.tex

clean:
	rm -rvf *.aux *.run.xml *.bcf *.pdf *.log *.out *.bbl *.blg

