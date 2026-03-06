#include <iostream>
#include <vector>
#include <string>
#include "clsString.h"

using namespace std;

int main() {
    clsString String1("hOw abOut yOu?");

    cout << "Original String                 : " << String1.GetValue() << '\n';
    cout << "Count Words                     : " << String1.CountString() << '\n';

    vector<string> Parts = String1.SplitString(" ");
    cout << "Split by space                  : ";
    for (const auto& Part : Parts) {
        cout << "[" << Part << "] ";
    }
    cout << '\n';

    cout << "Upper First Letter Each Word    : " << String1.UpperFirstLetterOfEachWord() << '\n';
    cout << "Lower First Letter Each Word    : " << String1.LowerFirstLetterOfEachWord() << '\n';
    cout << "Upper All String                : " << String1.UpperAllString() << '\n';
    cout << "Lower All String                : " << String1.LowerAllString() << '\n';
    cout << "Invert First Letter Each Word   : " << String1.InvertLetterCase() << '\n';
    cout << "Invert All Letter Case          : " << String1.InvertAllLetterCase() << '\n';

    cout << "Count Letters                   : " << String1.CountLetters() << '\n';
    cout << "Count Capital Letters           : " << String1.CountCapitalLetter() << '\n';
    cout << "Count Small Letters             : " << String1.CountSmallLetter() << '\n';
    cout << "Count Specific Letter ('o', no case): " << String1.CountSpecificLetter('o', false) << '\n';

    cout << "Has Vowel                       : " << (String1.HasVowel() ? "Yes" : "No") << '\n';
    cout << "Count Vowels                    : " << String1.CountVowels() << '\n';

    clsString String2("        Trim Left");
    clsString String3("Trim Right        ");
    clsString String4("        Full Trim        ");

    cout << "Trim Left                       : [" << String2.TrimLeft() << "]\n";
    cout << "Trim Right                      : [" << String3.TrimRight() << "]\n";
    cout << "Trim                            : [" << String4.Trim() << "]\n";

    vector<string> Names = {"Amine", "Bendawya", "Bertie"};
    cout << "Join String                     : " << clsString::JoinString(Names, " ") << '\n';

    cout << "Reverse Words                   : " << String1.ReverseWordsInStrings() << '\n';
    cout << "Replace Word (You? -> Me?)      : " << String1.ReplaceWord("You?", "Me?", false) << '\n';
    cout << "Remove Punctuations             : " << String1.RemovePunctuations() << '\n';

    return 0;
}
