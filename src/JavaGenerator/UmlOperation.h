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

#ifndef UMLOPERATION_H
#define UMLOPERATION_H

#include <q3intdict.h>
//Added by qt3to4:
#include <Q3CString>
#include <QTextStream>

#include "UmlBaseOperation.h"

class QTextStream;

class UmlOperation : public UmlBaseOperation
{
private:
    static Q3IntDict<char> bodies;

public:
    UmlOperation(void * id, const Q3CString & n)
        : UmlBaseOperation(id, n) {};

    virtual void generate(QTextStream & f, const Q3CString & cl_stereotype,
                          Q3CString indent);
    virtual void generate_enum_pattern_item(QTextStream &, int &,
                                            const Q3CString &, Q3CString);
    virtual void generate_enum_pattern_case(QTextStream &, Q3CString);
    virtual void generate_enum_member(QTextStream &, Q3CString);

    Q3CString compute_name();

    static void read_bodies(const char * path);

private:
    const char * generate_body(QTextStream & f, Q3CString indent, const char * p);
};

#endif
