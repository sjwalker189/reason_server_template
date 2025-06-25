run: 
	dune exec bin/main.exe

dev:
	# Build the project in watch mode and live-reload webserver after each build
	dune build @devserver --watch

build:
	dune build

watch:
	dune build --watch

clean:
	dune clean
