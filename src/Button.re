[@bs.config {jsx: 3}];

[@react.component]
let make = (~id, ~children) => {
  <button id> children </button>;
};

module Jsx2 = {
  let component = ReasonReact.statelessComponent(__MODULE__);
  let make = (~id, children) =>
    ReasonReactCompat.wrapReactForReasonReact(
      make,
      makeProps(~id, ~children=children[0], ()),
      children,
    );
};
