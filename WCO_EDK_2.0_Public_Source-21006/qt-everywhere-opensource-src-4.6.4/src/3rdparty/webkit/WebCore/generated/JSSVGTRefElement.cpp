/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include "config.h"

#if ENABLE(SVG)

#include "JSSVGTRefElement.h"

#include "JSSVGAnimatedString.h"
#include "SVGTRefElement.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGTRefElement);

/* Hash table */

static const HashTableValue JSSVGTRefElementTableValues[2] =
{
    { "href", DontDelete|ReadOnly, (intptr_t)jsSVGTRefElementHref, (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSSVGTRefElementTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSSVGTRefElementTableValues, 0 };
#else
    { 2, 1, JSSVGTRefElementTableValues, 0 };
#endif

/* Hash table for prototype */

static const HashTableValue JSSVGTRefElementPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSSVGTRefElementPrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSSVGTRefElementPrototypeTableValues, 0 };
#else
    { 1, 0, JSSVGTRefElementPrototypeTableValues, 0 };
#endif

const ClassInfo JSSVGTRefElementPrototype::s_info = { "SVGTRefElementPrototype", 0, &JSSVGTRefElementPrototypeTable, 0 };

JSObject* JSSVGTRefElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGTRefElement>(exec, globalObject);
}

const ClassInfo JSSVGTRefElement::s_info = { "SVGTRefElement", &JSSVGTextPositioningElement::s_info, &JSSVGTRefElementTable, 0 };

JSSVGTRefElement::JSSVGTRefElement(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGTRefElement> impl)
    : JSSVGTextPositioningElement(structure, globalObject, impl)
{
}

JSObject* JSSVGTRefElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSSVGTRefElementPrototype(JSSVGTRefElementPrototype::createStructure(JSSVGTextPositioningElementPrototype::self(exec, globalObject)));
}

bool JSSVGTRefElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGTRefElement, Base>(exec, &JSSVGTRefElementTable, this, propertyName, slot);
}

bool JSSVGTRefElement::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGTRefElement, Base>(exec, &JSSVGTRefElementTable, this, propertyName, descriptor);
}

JSValue jsSVGTRefElementHref(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGTRefElement* castedThis = static_cast<JSSVGTRefElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGTRefElement* imp = static_cast<SVGTRefElement*>(castedThis->impl());
    RefPtr<SVGAnimatedString> obj = imp->hrefAnimated();
    return toJS(exec, castedThis->globalObject(), obj.get(), imp);
}


}

#endif // ENABLE(SVG)
