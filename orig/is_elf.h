#define IS_ELF(ehdr)                       \
  (((ehdr).e_ident[EI_MAG0] == ELFMAG0) && \
   ((ehdr).e_ident[EI_MAG1] == ELFMAG1) && \
   ((ehdr).e_ident[EI_MAG2] == ELFMAG2) && \
   ((ehdr).e_ident[EI_MAG3] == ELFMAG3))
