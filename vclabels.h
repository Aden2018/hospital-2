#if !defined(AFX_VCLABELS_H__0424D620_71D6_4FF4_94B8_FD6EABFC4E93__INCLUDED_)
#define AFX_VCLABELS_H__0424D620_71D6_4FF4_94B8_FD6EABFC4E93__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CVcLabel;

/////////////////////////////////////////////////////////////////////////////
// CVcLabels wrapper class

class CVcLabels : public COleDispatchDriver
{
public:
	CVcLabels() {}		// Calls COleDispatchDriver default constructor
	CVcLabels(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CVcLabels(const CVcLabels& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetCount();
	CVcLabel GetItem(short LabelIndex);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_VCLABELS_H__0424D620_71D6_4FF4_94B8_FD6EABFC4E93__INCLUDED_)
