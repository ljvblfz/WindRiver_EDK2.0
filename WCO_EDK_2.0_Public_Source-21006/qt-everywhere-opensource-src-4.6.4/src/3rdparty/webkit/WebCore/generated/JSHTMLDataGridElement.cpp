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

#if ENABLE(DATAGRID)

#include "JSHTMLDataGridElement.h"

#include "DataGridColumnList.h"
#include "HTMLDataGridElement.h"
#include "JSDataGridColumnList.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSHTMLDataGridElement);

/* Hash table */

static const HashTableValue JSHTMLDataGridElementTableValues[7] =
{
    { "dataSource", DontDelete, (intptr_t)jsHTMLDataGridElementDataSource, (intptr_t)setJSHTMLDataGridElementDataSource },
    { "columns", DontDelete|ReadOnly, (intptr_t)jsHTMLDataGridElementColumns, (intptr_t)0 },
    { "autofocus", DontDelete, (intptr_t)jsHTMLDataGridElementAutofocus, (intptr_t)setJSHTMLDataGridElementAutofocus },
    { "disabled", DontDelete, (intptr_t)jsHTMLDataGridElementDisabled, (intptr_t)setJSHTMLDataGridElementDisabled },
    { "multiple", DontDelete, (intptr_t)jsHTMLDataGridElementMultiple, (intptr_t)setJSHTMLDataGridElementMultiple },
    { "constructor", DontEnum|ReadOnly, (intptr_t)jsHTMLDataGridElementConstructor, (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSHTMLDataGridElementTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 63, JSHTMLDataGridElementTableValues, 0 };
#else
    { 18, 15, JSHTMLDataGridElementTableValues, 0 };
#endif

/* Hash table for constructor */

static const HashTableValue JSHTMLDataGridElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSHTMLDataGridElementConstructorTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSHTMLDataGridElementConstructorTableValues, 0 };
#else
    { 1, 0, JSHTMLDataGridElementConstructorTableValues, 0 };
#endif

class JSHTMLDataGridElementConstructor : public DOMConstructorObject {
public:
    JSHTMLDataGridElementConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
        : DOMConstructorObject(JSHTMLDataGridElementConstructor::createStructure(globalObject->objectPrototype()), globalObject)
    {
        putDirect(exec->propertyNames().prototype, JSHTMLDataGridElementPrototype::self(exec, globalObject), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    virtual bool getOwnPropertyDescriptor(ExecState*, const Identifier&, PropertyDescriptor&);
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    static PassRefPtr<Structure> createStructure(JSValue proto) 
    { 
        return Structure::create(proto, TypeInfo(ObjectType, StructureFlags)); 
    }
    
protected:
    static const unsigned StructureFlags = OverridesGetOwnPropertySlot | ImplementsHasInstance | DOMConstructorObject::StructureFlags;
};

const ClassInfo JSHTMLDataGridElementConstructor::s_info = { "HTMLDataGridElementConstructor", 0, &JSHTMLDataGridElementConstructorTable, 0 };

bool JSHTMLDataGridElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLDataGridElementConstructor, DOMObject>(exec, &JSHTMLDataGridElementConstructorTable, this, propertyName, slot);
}

bool JSHTMLDataGridElementConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSHTMLDataGridElementConstructor, DOMObject>(exec, &JSHTMLDataGridElementConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSHTMLDataGridElementPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSHTMLDataGridElementPrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSHTMLDataGridElementPrototypeTableValues, 0 };
#else
    { 1, 0, JSHTMLDataGridElementPrototypeTableValues, 0 };
#endif

const ClassInfo JSHTMLDataGridElementPrototype::s_info = { "HTMLDataGridElementPrototype", 0, &JSHTMLDataGridElementPrototypeTable, 0 };

JSObject* JSHTMLDataGridElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSHTMLDataGridElement>(exec, globalObject);
}

const ClassInfo JSHTMLDataGridElement::s_info = { "HTMLDataGridElement", &JSHTMLElement::s_info, &JSHTMLDataGridElementTable, 0 };

JSHTMLDataGridElement::JSHTMLDataGridElement(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<HTMLDataGridElement> impl)
    : JSHTMLElement(structure, globalObject, impl)
{
}

JSObject* JSHTMLDataGridElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSHTMLDataGridElementPrototype(JSHTMLDataGridElementPrototype::createStructure(JSHTMLElementPrototype::self(exec, globalObject)));
}

bool JSHTMLDataGridElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLDataGridElement, Base>(exec, &JSHTMLDataGridElementTable, this, propertyName, slot);
}

bool JSHTMLDataGridElement::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSHTMLDataGridElement, Base>(exec, &JSHTMLDataGridElementTable, this, propertyName, descriptor);
}

JSValue jsHTMLDataGridElementDataSource(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSHTMLDataGridElement* castedThis = static_cast<JSHTMLDataGridElement*>(asObject(slot.slotBase()));
    return castedThis->dataSource(exec);
}

JSValue jsHTMLDataGridElementColumns(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSHTMLDataGridElement* castedThis = static_cast<JSHTMLDataGridElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    HTMLDataGridElement* imp = static_cast<HTMLDataGridElement*>(castedThis->impl());
    return toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->columns()));
}

JSValue jsHTMLDataGridElementAutofocus(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSHTMLDataGridElement* castedThis = static_cast<JSHTMLDataGridElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    HTMLDataGridElement* imp = static_cast<HTMLDataGridElement*>(castedThis->impl());
    return jsBoolean(imp->autofocus());
}

JSValue jsHTMLDataGridElementDisabled(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSHTMLDataGridElement* castedThis = static_cast<JSHTMLDataGridElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    HTMLDataGridElement* imp = static_cast<HTMLDataGridElement*>(castedThis->impl());
    return jsBoolean(imp->disabled());
}

JSValue jsHTMLDataGridElementMultiple(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSHTMLDataGridElement* castedThis = static_cast<JSHTMLDataGridElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    HTMLDataGridElement* imp = static_cast<HTMLDataGridElement*>(castedThis->impl());
    return jsBoolean(imp->multiple());
}

JSValue jsHTMLDataGridElementConstructor(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSHTMLDataGridElement* domObject = static_cast<JSHTMLDataGridElement*>(asObject(slot.slotBase()));
    return JSHTMLDataGridElement::getConstructor(exec, domObject->globalObject());
}
void JSHTMLDataGridElement::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    lookupPut<JSHTMLDataGridElement, Base>(exec, propertyName, value, &JSHTMLDataGridElementTable, this, slot);
}

void setJSHTMLDataGridElementDataSource(ExecState* exec, JSObject* thisObject, JSValue value)
{
    static_cast<JSHTMLDataGridElement*>(thisObject)->setDataSource(exec, value);
}

void setJSHTMLDataGridElementAutofocus(ExecState* exec, JSObject* thisObject, JSValue value)
{
    HTMLDataGridElement* imp = static_cast<HTMLDataGridElement*>(static_cast<JSHTMLDataGridElement*>(thisObject)->impl());
    imp->setAutofocus(value.toBoolean(exec));
}

void setJSHTMLDataGridElementDisabled(ExecState* exec, JSObject* thisObject, JSValue value)
{
    HTMLDataGridElement* imp = static_cast<HTMLDataGridElement*>(static_cast<JSHTMLDataGridElement*>(thisObject)->impl());
    imp->setDisabled(value.toBoolean(exec));
}

void setJSHTMLDataGridElementMultiple(ExecState* exec, JSObject* thisObject, JSValue value)
{
    HTMLDataGridElement* imp = static_cast<HTMLDataGridElement*>(static_cast<JSHTMLDataGridElement*>(thisObject)->impl());
    imp->setMultiple(value.toBoolean(exec));
}

JSValue JSHTMLDataGridElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSHTMLDataGridElementConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}


}

#endif // ENABLE(DATAGRID)
