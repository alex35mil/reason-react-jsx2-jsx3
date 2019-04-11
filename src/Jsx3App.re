[@bs.config {jsx: 3}];

[@react.component]
let make = () => <Button id="Jsx3App"> "Jsx3App"->React.string </Button>;

module Jsx2 = {
  let component = ReasonReact.statelessComponent(__MODULE__);
  let make = children =>
    ReasonReactCompat.wrapReactForReasonReact(make, makeProps(), children);
};
