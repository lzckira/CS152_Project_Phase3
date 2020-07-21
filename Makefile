Exp: phase3.lex Exp.yy
	bison -v -d --file-prefix=Exp Exp.yy
	flex phase3.lex
	g++ -std=c++11 -o Exp_parser Exp.tab.cc lex.yy.c -lfl
AyinDJ: phase3.lex AyinDJ.yy
	bison -v -d --file-prefix=AyinDJ AyinDJ.yy
	flex phase3.lex
	g++ -std=c++11 -o AyinDJ_parser AyinDJ.tab.cc lex.yy.c -lfl
clean:
	rm -f lex.yy.c parser.tab.* parser.output *.o parser location.hh position.hh stack.hh 
