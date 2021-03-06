#include "function_realization.hpp"
#include "gramm_analyzer.hpp"


// Main program
int main(int argc, const char * argv[]) {
    std::vector<std::vector<std::string> > result_text_analyzer;
    result_text_analyzer = read_file();
    
    bprinter::TablePrinter main_table = tableCreator(result_text_analyzer);
    bprinter::TablePrinter second_table = tableCreatorTwo(result_text_analyzer);
    
    gram_analyze(result_text_analyzer);
    
    return 0;
}