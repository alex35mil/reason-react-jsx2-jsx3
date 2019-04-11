[@bs.config {jsx: 3}];

[@react.component]
let make = () => <Button id="id"> "Click me"->React.string </Button>;

module Jsx2 = {
  let component = ReasonReact.statelessComponent(__MODULE__);
  let make = children =>
    ReasonReactCompat.wrapReactForReasonReact(make, makeProps(), children);
};
