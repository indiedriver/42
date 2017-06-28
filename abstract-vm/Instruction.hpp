#ifndef INSTRUCTION_HPP
# define INSTRUCTION_HPP
# include "Operand.hpp"
# include <iostream>

enum eInstruction {
	Push,
	Pop,
	Dump,
	Assert,
	Add,
	Sub,
	Mul,
	Div,
	Mod,
	Print,
	Exit
};

/* Should always follow eInstruction enum */
const std::string instructionStr[] {
	"push",
	"pop",
	"dump",
	"assert",
	"add",
	"sub",
	"mul",
	"div",
	"mod",
	"print",
	"exit"
};

class Instruction {
	public:
		Instruction (eInstruction instruction, const IOperand *operand = nullptr);
		virtual ~Instruction (void);
		Instruction  & operator=(Instruction  const & rhs);

		void			exec();
		eInstruction	getInstruction();
		void 			setOperand(IOperand const *operand);
	private:
		Instruction (void);
		Instruction (Instruction  const & src);
		eInstruction	_instruction;
		const IOperand		*_operand = nullptr;

};

#endif
