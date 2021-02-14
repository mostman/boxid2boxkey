/***************************************************************
 * Name:      boxid2boxkey.cpp
 * Purpose:   Code for Application Frame
 * Author:    Minime (i_am_minime_2003@hotmail.com)
 * Created:   2011-06-16
 * Copyright: 2011-2021 Martin Östman (i_am_minime_2003@hotmail.com)
 * License:
 * All rights reserved.
 * Redistribution and use in source and binary forms, with or without modification, are
 * permitted provided that the following conditions are met:
 *
 * 1.Redistributions of source code must retain the above copyright
 *   notice, this list of conditions and the following disclaimer.
 *
 * 2.Redistributions in binary form must reproduce the above copyright notice, this list of
 *   conditions and the following disclaimer in the documentation and/or other materials provided
 *   with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY AUTHOR ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES,
 * INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE FREEBSD PROJECT OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA,
 * OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
 * OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 ***************************************************************/

#include "boxid2boxkey.h"
#include <sstream>

wxString BoxID2BoxKey::stringTohex(wxString strBoxID)
{
    wxString strHex = formatString(strBoxID);
    if (strHex.length() < 8)
    {
        strHex = "0"+strHex;
    }
    return strHex;
}

// String format, check and filtering
wxString BoxID2BoxKey::formatString(wxString strBoxID)
{
    wxString strPrep;
    if (strBoxID.length() == 11)
    {
        strPrep = strBoxID.Mid(0,strBoxID.length()-1);
    }
    if (strBoxID.length() == 17)
    {
        strPrep = strBoxID.Mid(6,strBoxID.length()-7);
    }
    return string2hex(strPrep).Upper();
}

// Converts string to int and then int to Hex.
wxString BoxID2BoxKey::string2hex(wxString strBoxID)
{
    int nBoxID = wxAtoi(strBoxID);
    std::stringstream ss;
    ss<< std::hex << nBoxID; // int decimal_value
    std::string res ( ss.str() );

    return res;
}
