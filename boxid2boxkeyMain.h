/***************************************************************
 * Name:      boxid2boxkeyMain.h
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

#ifndef BOXID2BOXKEYMAIN_H
#define BOXID2BOXKEYMAIN_H

//(*Headers(boxid2boxkeyFrame)
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/menu.h>
#include <wx/panel.h>
#include <wx/sizer.h>
#include <wx/statusbr.h>
#include <wx/textctrl.h>
//*)
#include "boxid2boxkey.h"

class boxid2boxkeyFrame: public wxFrame
{
    public:

        boxid2boxkeyFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~boxid2boxkeyFrame();

    private:

        //(*Handlers(boxid2boxkeyFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnbtnConvertClick(wxCommandEvent& event);
        void OnbtnConvertClick1(wxCommandEvent& event);
        //*)
        void GenTemplate(wxString strBoxKey, wxString strCAID);

        //(*Identifiers(boxid2boxkeyFrame)
        static const long ID_TEXTBOXID;
        static const long ID_TEXTBOXKEY;
        static const long ID_BTNCONVERT;
        static const long ID_BTNQUIT;
        static const long ID_PANEL1;
        static const long idMenuQuit;
        static const long idCCCam;
        static const long idOSCam;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(boxid2boxkeyFrame)
        wxButton* btnConvert;
        wxButton* btnQuit;
        wxMenu* Menu3;
        wxMenuItem* MenuItemCCCam;
        wxMenuItem* MenuItemOSCam;
        wxPanel* Panel1;
        wxStatusBar* StatusBar1;
        wxTextCtrl* TextBoxID;
        wxTextCtrl* TextBoxKey;
        //*)

        BoxID2BoxKey boxid2boxkey;

        DECLARE_EVENT_TABLE()
};

#endif // BOXID2BOXKEYMAIN_H
