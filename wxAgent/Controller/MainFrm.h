#include <wx/wx.h>

//#define OKBTNID wxID_HIGHEST+21

class MyApp : public wxApp
{
 public:
  virtual bool OnInit();
};

class MyFrame : public wxFrame
{
  //private:
  //wxButton* button;
 public:
  MyFrame(const wxString& title);
  void OnQuit(wxCommandEvent& event);
  void OnAbout(wxCommandEvent& event);
  //void OnButtonOK(wxCommandEvent& event);
 private:
  DECLARE_EVENT_TABLE()
};

DECLARE_APP(MyApp)
IMPLEMENT_APP(MyApp)
