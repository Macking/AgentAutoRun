#include "MainFrm.h"
bool MyApp::OnInit()
{
    MyFrame *frame = new MyFrame(wxT("Minimal wxWidgets App"));
    frame->Show(true);
    return true;
}

BEGIN_EVENT_TABLE(MyFrame, wxFrame)
EVT_MENU(wxID_ABOUT, MyFrame::OnAbout)
EVT_MENU(wxID_EXIT, MyFrame::OnQuit)
//EVT_BUTTON(wxID_OK, MyFrame::OnButtonOK)
END_EVENT_TABLE()

void MyFrame::OnAbout(wxCommandEvent& event)
{
  wxString msg;
  msg.Printf(wxT("Hello and welcome to %s"), wxVERSION_STRING);
  wxMessageBox(msg, wxT("About Minimal"), wxOK | wxICON_INFORMATION, this);
}

void MyFrame::OnQuit(wxCommandEvent& event)
{
  Close();
}

/*
void MyFrame::OnButtonOK(wxCommandEvent& event)
{
  wxString msg;
  msg.Printf(wxT("The value is %s", txtbox->GetValue());
  wxMessageBox(msg,wxT("OKButton"), wxOK, this);
  }*/

MyFrame::MyFrame(const wxString& title):wxFrame(NULL, wxID_ANY, title)
{
  wxMenu *fileMenu = new wxMenu;
  wxMenu *helpMenu = new wxMenu;
  helpMenu->Append(wxID_ABOUT, wxT("&About...\tF1"), wxT("Show about dialog"));
  fileMenu->Append(wxID_EXIT, wxT("E&xit\tAlt-X"), wxT("Quit this program"));

  wxMenuBar *menuBar = new wxMenuBar();
  menuBar->Append(fileMenu, wxT("&File"));
  menuBar->Append(helpMenu, wxT("&Help"));
  SetMenuBar(menuBar);
  CreateStatusBar(2);
  SetStatusText(wxT("Welcome to wxWidgets!"));
}
