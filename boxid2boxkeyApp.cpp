/***************************************************************
 * Name:      boxid2boxkeyApp.cpp
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

#include "boxid2boxkeyApp.h"

//(*AppHeaders
#include "boxid2boxkeyMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(boxid2boxkeyApp);

bool boxid2boxkeyApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	boxid2boxkeyFrame* Frame = new boxid2boxkeyFrame(0);
        #if defined(__WXMSW__)
            Frame->SetIcon(wxIcon(aaaa));
        #elif defined(__UNIX__)
            Frame->SetIcon(wxIcon(wxT("icons/icon.xpm")));
        #endif
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
