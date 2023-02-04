void main() {
  print('***STACK***');
  push(1);
  push(2);
  push(3);
  printStack();
  peek();
  printStack();
  pop();
  print('***STACK AFTER POP***');
  printStack();
  peek();
  printStack();
}
List stack = [];
push(e) {
  stack.add(e);
}
pop() {
  stack.removeLast();
}
peek() {
  var top = stack.last;
  print('The top element: ' + top.toString());
}
printStack() {
  for (int i in stack.reversed) {
    print(i);
  }
}