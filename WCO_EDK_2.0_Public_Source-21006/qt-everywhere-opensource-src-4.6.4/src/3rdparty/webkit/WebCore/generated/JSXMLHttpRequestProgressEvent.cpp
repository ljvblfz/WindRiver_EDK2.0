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
#include "JSXMLHttpRequestProgressEvent.h"

#include "XMLHttpRequestProgressEvent.h"
#include <runtime/JSNumberCell.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSXMLHttpRequestProgressEvent);

/* Hash table */

static const HashTableValue JSXMLHttpRequestProgressEventTableValues[4] =
{
    { "position", DontDelete|ReadOnly, (intptr_t)jsXMLHttpRequestProgressEventPosition, (intptr_t)0 },
    { "totalSize", DontDelete|ReadOnly, (intptr_t)jsXMLHttpRequestProgressEventTotalSize, (intptr_t)0 },
    { "constructor", DontEnum|ReadOnly, (intptr_t)jsXMLHttpRequestProgressEventConstructor, (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSXMLHttpRequestProgressEventTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 15, JSXMLHttpRequestProgressEventTableValues, 0 };
#else
    { 9, 7, JSXMLHttpRequestProgressEventTableValues, 0 };
#endif

/* Hash table for constructor */

static const HashTableValue JSXMLHttpRequestProgressEventConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSXMLHttpRequestProgressEventConstructorTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSXMLHttpRequestProgressEventConstructorTableValues, 0 };
#else
    { 1, 0, JSXMLHttpRequestProgressEventConstructorTableValues, 0 };
#endif

class JSXMLHttpRequestProgressEventConstructor : public DOMConstructorObject {
public:
    JSXMLHttpRequestProgressEventConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
        : DOMConstructorObject(JSXMLHttpRequestProgressEventConstructor::createStructure(globalObject->objectPrototype()), globalObject)
    {
        putDirect(exec->propertyNames().prototype, JSXMLHttpRequestProgressEventPrototype::self(exec, globalObject), None);
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

const ClassInfo JSXMLHttpRequestProgressEventConstructor::s_info = { "XMLHttpRequestProgressEventConstructor", 0, &JSXMLHttpRequestProgressEventConstructorTable, 0 };

bool JSXMLHttpRequestProgressEventConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSXMLHttpRequestProgressEventConstructor, DOMObject>(exec, &JSXMLHttpRequestProgressEventConstructorTable, this, propertyName, slot);
}

bool JSXMLHttpRequestProgressEventConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSXMLHttpRequestProgressEventConstructor, DOMObject>(exec, &JSXMLHttpRequestProgressEventConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSXMLHttpRequestProgressEventPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSXMLHttpRequestProgressEventPrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSXMLHttpRequestProgressEventPrototypeTableValues, 0 };
#else
    { 1, 0, JSXMLHttpRequestProgressEventPrototypeTableValues, 0 };
#endif

static const HashTable* getJSXMLHttpRequestProgressEventPrototypeTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->globalData(), &JSXMLHttpRequestProgressEventPrototypeTable);
}
const ClassInfo JSXMLHttpRequestProgressEventPrototype::s_info = { "XMLHttpRequestProgressEventPrototype", 0, 0, getJSXMLHttpRequestProgressEventPrototypeTable };

JSObject* JSXMLHttpRequestProgressEventPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSXMLHttpRequestProgressEvent>(exec, globalObject);
}

static const HashTable* getJSXMLHttpRequestProgressEventTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->globalData(), &JSXMLHttpRequestProgressEventTable);
}
const ClassInfo JSXMLHttpRequestProgressEvent::s_info = { "XMLHttpRequestProgressEvent", &JSProgressEvent::s_info, 0, getJSXMLHttpRequestProgressEventTable };

JSXMLHttpRequestProgressEvent::JSXMLHttpRequestProgressEvent(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<XMLHttpRequestProgressEvent> impl)
    : JSProgressEvent(structure, globalObject, impl)
{
}

JSObject* JSXMLHttpRequestProgressEvent::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSXMLHttpRequestProgressEventPrototype(JSXMLHttpRequestProgressEventPrototype::createStructure(JSProgressEventPrototype::self(exec, globalObject)));
}

bool JSXMLHttpRequestProgressEvent::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSXMLHttpRequestProgressEvent, Base>(exec, getJSXMLHttpRequestProgressEventTable(exec), this, propertyName, slot);
}

bool JSXMLHttpRequestProgressEvent::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSXMLHttpRequestProgressEvent, Base>(exec, getJSXMLHttpRequestProgressEventTable(exec), this, propertyName, descriptor);
}

JSValue jsXMLHttpRequestProgressEventPosition(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSXMLHttpRequestProgressEvent* castedThis = static_cast<JSXMLHttpRequestProgressEvent*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    XMLHttpRequestProgressEvent* imp = static_cast<XMLHttpRequestProgressEvent*>(castedThis->impl());
    return jsNumber(exec, imp->position());
}

JSValue jsXMLHttpRequestProgressEventTotalSize(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSXMLHttpRequestProgressEvent* castedThis = static_cast<JSXMLHttpRequestProgressEvent*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    XMLHttpRequestProgressEvent* imp = static_cast<XMLHttpRequestProgressEvent*>(castedThis->impl());
    return jsNumber(exec, imp->totalSize());
}

JSValue jsXMLHttpRequestProgressEventConstructor(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSXMLHttpRequestProgressEvent* domObject = static_cast<JSXMLHttpRequestProgressEvent*>(asObject(slot.slotBase()));
    return JSXMLHttpRequestProgressEvent::getConstructor(exec, domObject->globalObject());
}
JSValue JSXMLHttpRequestProgressEvent::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSXMLHttpRequestProgressEventConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}


}
