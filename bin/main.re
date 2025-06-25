let () = {
  Dream.run @@
  Dream.logger @@
  Dream.router([
    Dream.get("/", App.Handlers.Home.welcome),
    Dream.get("/about", App.Handlers.Home.about),
    Dream.get("/contact", App.Handlers.Home.contact),
    Dream.get("/services", App.Handlers.Home.services),
  ]);
};
