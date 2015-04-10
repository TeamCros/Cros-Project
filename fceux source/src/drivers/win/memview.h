void DoMemView();
void KillMemView();
void UpdateMemoryView(int draw_all);
void UpdateColorTable();
void ChangeMemViewFocus(int newEditingMode, int StartOffset,int EndOffset);

void ApplyPatch(int addr,int size, uint8* data);
void UndoLastPatch();

void SetHexEditorAddress(int gotoaddress);

extern HWND hMemView;
extern int EditingMode;
