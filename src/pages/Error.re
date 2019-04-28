[@react.component]
let make = (~code) => {
  <div>
    {(
       switch (code) {
       | 404 => "Couldn't find that page!"
       | _ => "An error occurred!"
       }
     )
     |> React.string}
  </div>;
};