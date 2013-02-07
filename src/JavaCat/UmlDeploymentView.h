// *************************************************************************
//
// Copyright 2004-2010 Bruno PAGES  .
// Copyright 2012-2013 Nikolai Marchenko.
// Copyright 2012-2013 Leonardo Guilherme.
//
// This file is part of the DOUML Uml Toolkit.
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
//
// e-mail : enmarantispam@gmail.com
// home   : http://sourceforge.net/projects/douml
//
// *************************************************************************

#ifndef UMLDEPLOYMENTVIEW_H
#define UMLDEPLOYMENTVIEW_H

#include "UmlBaseDeploymentView.h"
//Added by qt3to4:
#include <Q3CString>
#include <Q3PtrList>

// This class manages 'deployment view'
// You can modify it as you want (except the constructor)

class UmlDeploymentView : public UmlBaseDeploymentView
{
public:
    UmlDeploymentView(void * id, const Q3CString & n)
        : UmlBaseDeploymentView(id, n) {}

#ifdef ROUNDTRIP
    virtual bool set_roundtrip_expected();
    virtual void mark_useless(Q3PtrList<UmlItem> & l);
    virtual void scan_it(int & n);
    virtual void send_it(int n);
#endif
};

#endif
