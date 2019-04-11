let component = ReasonReact.statelessComponent(__MODULE__);
let make = (_: unit) => {
  ...component,
  render: _ => <Button.Jsx2 id="id"> "Click me"->React.string </Button.Jsx2>,
};

/**
 * This is a wrapper created to let this component be used from the new React api.
 * Please convert this component to a [@react.component] function and then remove this wrapping code.
 */
let make =
  ReasonReactCompat.wrapReasonReactForReact(
    ~component, (reactProps: {. "children": 'children}) =>
    make(reactProps##children)
  );
[@bs.obj]
external makeProps: (~children: 'children, unit) => {. "children": 'children} =
  "";
