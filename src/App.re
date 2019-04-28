[@react.component]
let make = () => {
  let url = ReasonReactRouter.useUrl();

  switch (url.path) {
  | [] => <Home />
  | ["about"] => <About />
  | _ => <Error code=404 />
  };
};