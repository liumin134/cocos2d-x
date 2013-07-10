//
//  CCFontOS.h
//  TestNewStringStuff
//
//  Created by Carlo Morgantini on 5/20/13.
//
//

#ifndef _Font_h
#define _Font_h

#include <string>

#include "cocos2d.h"

NS_CC_BEGIN

class GlyphDef;

class Font
{
public:
    virtual ~Font() {}
    virtual bool createFontObject(const std::string &fontName, int fontSize)                        = 0;
    virtual GlyphDef            * getGlyphsForText(const char *pText, int &outNumGlyphs)              = 0;
    virtual Size                * getAdvancesForText(const char *pText, int &outNumLetters)         = 0;
    virtual Size                * getAdvancesForTextUTF8(unsigned short *pText, int &outNumLetters) = 0;
    virtual unsigned short int  * getUTF8Text(const char *pText, int &outNumLetters)                = 0;
    virtual const char          * trimUTF8Text(const char *pText, int newBegin, int newEnd)         = 0;
    virtual Size                  getTextWidthAndHeight(const char *pText)                          = 0;
    virtual int                   getUTF8TextLenght(const char *pText)                              = 0;
};

NS_CC_END


#endif
