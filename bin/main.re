let page = (~message, ~path, ()) => {
  <html>
    <head> <title> {JSX.string("Hello, world")} </title> </head>
    <body>
      <h1> {JSX.string(message)} </h1>
      <p> {JSX.string("Current path: " ++ path)} </p>
    </body>
  </html>;
};

let home = req => {
  let path = Dream.target(req);
  let message = "Home page";

  JSX.render(<page message path />) |> Dream.html;
};

let () =
  Dream.run @@
  Dream.logger @@
  Dream_livereload.inject_script() @@
  Dream.router([Dream.get("/", home), Dream_livereload.route()]);
