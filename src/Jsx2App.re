let component = ReasonReact.statelessComponent(__MODULE__);
let make = _ => {
  ...component,
  render: _ => <Button id="id"> "Click me"->React.string </Button>,
};
