let component = ReasonReact.statelessComponent(__MODULE__);
let make = _ => {
  ...component,
  render: _ =>
    <Button.Jsx2 id="Jsx2App"> "Jsx2App"->React.string </Button.Jsx2>,
};
