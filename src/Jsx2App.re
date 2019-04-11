let component = ReasonReact.statelessComponent(__MODULE__);
let make = _ => {
  ...component,
  render: _ => <Button.Jsx2 id="id"> "Click me"->React.string </Button.Jsx2>,
};
