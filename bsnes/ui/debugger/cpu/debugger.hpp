struct CPUDebugger : TopLevelWindow {
  HorizontalLayout layout;
  EditBox output;
  VerticalLayout controlLayout;
  Button stepInto;
  Button stepOver;
  Button proceed;

  void create();
  void synchronize();
  void refreshDisassembly();
  void eventStepInto();
  void eventStepOver();

  uint8_t read(unsigned addr);
};

extern CPUDebugger cpuDebugger;