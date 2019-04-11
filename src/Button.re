let component = ReasonReact.statelessComponent(__MODULE__);
let make = (~id, children) => {
  ...component,
  render: _ => <button id> ...children </button>,
};
