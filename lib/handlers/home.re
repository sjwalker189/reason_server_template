let welcome = _req => {
  <h1> {JSX.string("Hello")} </h1> |> JSX.render |> Dream.html;
};

let about = _req => {
  <h1> {JSX.string("About")} </h1> |> JSX.render |> Dream.html;
};

let contact = _req => {
  <h1> {JSX.string("Contact")} </h1> |> JSX.render |> Dream.html;
};

let services = _req => {
  <h1> {JSX.string("Services")} </h1> |> JSX.render |> Dream.html;
};
