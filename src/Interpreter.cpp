#include "tokenizer/Tokenizer.hpp"
#include "statements/Statement.hpp"

int main(int argc, char *argv[]) {
  Tokenizer program(argv[1]);
  Statement *statement;
  while (program.Remaining()) {
    statement = Statement::GetNext(program);
    statement->Execute();
  }
  return 0;
}
