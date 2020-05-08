#include"Process.h"

//default parametrized constructor
Process::Process(const int _id,const int _lines){
    count++;
    //proceed to set/mutate attributes only if proc id is valid
    if(_id>0){
	id=_id;
	//update attributes related to proc lines if arg if valid
	if(_lines>0){
	    lines=_lines;
	    totalLinesOfCode+=lines;
	
	    if(_lines>maxLinesOfCode){
		maxLinesOfCode=_lines;
	    }
	    else if(_lines<minLinesOfCode){
		minLinesOfCode=_lines;
	    }
	}
    }
    else{
	id=0, lines=0;
    }
    //update the average
    avgLinesPerProcess=totalLinesOfCode/count;
}

//copy constructor
Process::Process(const Process& _proc){
    //update count ot proc
    count++;
    //set id
    id=_proc.id;
    //set lines
    lines=_proc.lines;
    //update static member totallinesofcode with the new total of proc lines
    totalLinesOfCode+=lines;
    //update static member avglinesperprocess with avg of total lines per proc
    avgLinesPerProcess=totalLinesOfCode/count;
}

//destructor
Process::~Process(){
    id=0;
    lines=0;
    totalLinesOfCode=0;
    maxLinesOfCode=0;
    minLinesOfCode=0;
    avgLinesPerProcess=0;
}

//setters/mutators
void Process::set_lines(const int _lines){
    if(_lines>0){	
	totalLinesOfCode-=lines;//delete current lines of  proc from total
	lines=_lines;//update lines with new _lines
	totalLinesOfCode+=lines;//update total with new _lines

	//update other lines related static attributes
	if(_lines>maxLinesOfCode){
	    maxLinesOfCode=_lines;
	}
	else if(_lines<minLinesOfCode){
	    minLinesOfCode=_lines;
	}
    }
}

//getters
int Process::get_id()const{
    return id;
}

int Process::get_lines()const{
    return lines;
}

int Process::get_totalLinesOfCode(){
    return totalLinesOfCode;
}

int Process::get_maxLinesOfCode(){
    return maxLinesOfCode;
}

int Process::get_minLinesOfCode(){
    return minLinesOfCode;
}

int Process::get_avgLinesPerProcess(){
    return avgLinesPerProcess;
}

//others
void Process::display(){
    cout<<"\n\tTotal Lines: "<<totalLinesOfCode;
    cout<<"\n\tMaximum Lines in a Process: "<<maxLinesOfCode;
    cout<<"\n\tMin lines in a process: "<<minLinesOfCode;
    cout<<"\n\tAverage Lines per process"<<avgLinesPerProcess;
}

void print(const Process* _procs,const int size){
    for(int i=0;i<size;i++){
	cout<<"\n\tProcess ID: "<<_procs[i].get_id();
	cout<<"\n\tLines: "<<_procs[i].get_lines();
	cout<<endl;
    }
}
