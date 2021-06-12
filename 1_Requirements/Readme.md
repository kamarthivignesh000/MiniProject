# Requirements
## Introduction
	
  Logic gates are the basic building blocks of any digital system. It is an electronic circuit having one or more than one input and only one output. The relationship between the input and the output is based on a certain logic. Based on this, logic gates are named as AND gate, OR gate, NOT gate , NAND gate , NOR gate , XOR gate , XNOR gate .
	Combinational circuit is a circuit in which we combine the different gates in the circuit, for example half adder , full adder , half subtractor , full subtractor etc.

## Research
Half Adder:

![HALF ADDER]( https://www.researchgate.net/profile/Mahendra-Vucha-2/publication/261284864/figure/tbl1/AS:668856435630090@1536479209369/Truth-table-for-half-adder.png )

  The Half-Adder is a basic building block of adding two numbers as two inputs and produce out two outputs. 
	The adder is used to perform OR operation of two single bit binary numbers. 
	The augent and addent bits are two input states, and 'carry' and 'sum 'are two output states of the half adder.

Full Adder:

![FULL ADDER]( https://media.geeksforgeeks.org/wp-content/uploads/20201009113442/outputonlinepngtools4.png )

 Full Adder is the adder which adds three inputs and produces two outputs. The first two inputs are A and B and the third input is an input carry as C-IN. The output carry is   designated as C-OUT and the normal output is designated as S which is SUM.
	A full adder logic is designed in such a manner that can take eight inputs together to create a byte-wide adder and cascade the carry bit from one adder to the another.

Half Subtractor:

![HALF SUBTRACTOR]( https://static.javatpoint.com/tutorial/digital-electronics/images/half-subtractor2.png )

The half subtractor is also a building block for subtracting two binary numbers. It has two inputs and two outputs. This circuit is used to subtract two single bit binary numbers A and B. The 'diff' and 'borrow' are two output states of the half subtractor.
	'A' and 'B' are the input variables whose values are going to be subtracted.
	The 'Diff' and 'Borrow' are the variables whose values define the subtraction result, i.e., difference and borrow.
	
Full Subtractor:

![FULL SUBTRACTOR]( https://electricalvoice.com/wp-content/uploads/2018/05/full-subtractor-truth-table.jpg )

 A full subtractor is a combinational circuit that performs subtraction of two bits, one is minuend and other is subtrahend, taking into account borrow of the previous adjacent lower minuend bit. 
	This circuit has three inputs and two outputs. The three inputs A, B and Bin, denote the minuend, subtrahend, and previous borrow, respectively.
	The two outputs, D and Bout represent the difference and output borrow, respectively.

Multiplexer:

![MULTIPLEXER]( https://static.javatpoint.com/tutorial/digital-electronics/images/multiplexer.png )
In 2×1 multiplexer, there are only two inputs, i.e., A0 and A1, 1 selection line, i.e., S0 and single outputs, i.e., Y. On the basis of the combination of inputs which are present at the selection line S0, one of these 2 inputs will be connected to the output.

Demultiplexer:

![DEMULTIPLEXER]( https://www.tutorialspoint.com/digital_circuits/images/1_4_demultiplexer.jpg )
De-Multiplexer is a combinational circuit that performs the reverse operation of Multiplexer. It has single input, ‘n’ selection lines and maximum of 2n outputs. The input will be connected to one of these outputs based on the values of selection lines.

Since there are ‘n’ selection lines, there will be 2n possible combinations of zeros and ones. So, each combination can select only one output. De-Multiplexer is also called as De-Mux.

Decoder:

![DECODER]( https://media.geeksforgeeks.org/wp-content/uploads/decoder-truth-table.jpg )
The 2-to-4 line binary decoder depicted above consists of an array of four AND gates. The 2 binary inputs labeled A and B are decoded into one of 4 outputs, hence the description of a 2-to-4 binary decoder. Each output represents one of the minterms of the 2 input variables, (each output = a minterm).

Encoder:

![ENCODER]( https://media.geeksforgeeks.org/wp-content/uploads/Encoder-4x2.jpg )

The 4 to 2 Encoder consists of four inputs Y3, Y2, Y1 & Y0 and two outputs A1 & A0. At any time, only one of these 4 inputs can be ‘1’ in order to get the respective binary code at the output. The figure below shows the logic symbol of 4 to 2 encoder
	
## Cost and Features
   Cost of logic gate is less because of advance development of manufacturing techinques. Manufacturing of logic gate is very difficult. Logic gates are manufactured in extreme special conditions. 	
   Logic gates perform basic logical functions and are the fundamental building blocks of digital integrated circuits. Most logic gates take an input of two binary values, and output a single value of a 1 or 0. Some circuits may have only a few logic gates, while others, such as microprocessors, may have millions of them.
   By combining thousands or millions of logic gates, it is possible to perform highly complex operations. The maximum number of logic gates on an integrated circuit is determined by the size of the chip divided by the size of the logic gates. Since transistors make up most of the logic gates in computer processors, smaller transistors mean more complex and faster processors.
 
## SWOT ANALYSIS

![SWOT ANALYSIS](https://user-images.githubusercontent.com/80352730/114198644-2cfc0480-9971-11eb-9ae4-3d0904169df5.jpg)

# 4Ws and 1H

## Who

	Digital designers designs logic gates based on their requirement.

## What

	Logic gates are devices which perfoms or computes boolean expressions.

## When

	When digital system requires to compute logical operations then logic gates are used. 

## Where

	Every digital circuit requires logic gates. Digital devices are digital clock, mobile phone, computer, processors etc.

## How

	Logic gates are available in the form of Integrated Cicuits(ICs). These ICs are used to compute logical operations.

# Detail requirements

## High Level Requirements

Level  | Supply Voltage  | Range
-------| ----------------|--------
High   | 5 Volts         |  Max
Low    | 0 Volts         |  Min

## Low level Requirements

Transistor  |  Type  
------------|------------
   CMOS     | Unipolar 
   BJT      | Bipolar  
