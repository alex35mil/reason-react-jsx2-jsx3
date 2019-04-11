module Jsx2 = {
  let component = ReasonReact.statelessComponent(__MODULE__);
  let make = (~id, children) => {
    ...component,
    render: _ => <button id> ...children </button>,
  };
};
/**
 * This is a wrapper created to let this component be used from the new React api.
 * Please convert this component to a [@react.component] function and then remove this wrapping code.
 */
let make =
  ReasonReactCompat.wrapReasonReactForReact(
    ~component=Jsx2.component,
    (
      reactProps: {
        .
        "id": 'id,
        "children": 'children,
      },
    ) =>
    Jsx2.make(~id=reactProps##id, reactProps##children)
  );
[@bs.obj]
external makeProps:
  (~children: 'children, ~id: 'id, unit) =>
  {
    .
    "id": 'id,
    "children": 'children,
  } =
  "";
