/*
 * Copyright (c) 2015 Igalia
 * Copyright (c) 2015 Igalia S.L.
 * Copyright (c) 2015 Igalia.
 * Copyright (c) 2015, 2016 Canon Inc. All rights reserved.
 * Copyright (c) 2015, 2016, 2017 Canon Inc.
 * Copyright (c) 2016, 2020 Apple Inc. All rights reserved.
 * Copyright (c) 2023 Codeblog Corp. All rights reserved.
 * 
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 
 * THIS SOFTWARE IS PROVIDED BY APPLE INC. AND ITS CONTRIBUTORS ``AS IS''
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL APPLE INC. OR ITS CONTRIBUTORS
 * BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF
 * THE POSSIBILITY OF SUCH DAMAGE.
 * 
 */

// DO NOT EDIT THIS FILE. It is automatically generated from JavaScript files for
// builtins by the script: Source/JavaScriptCore/Scripts/generate-js-builtins.py

#include "config.h"
#include "WritableStreamDefaultControllerBuiltins.h"

#include "WebCoreJSClientData.h"
#include <JavaScriptCore/IdentifierInlines.h>
#include <JavaScriptCore/ImplementationVisibility.h>
#include <JavaScriptCore/Intrinsic.h>
#include <JavaScriptCore/JSObjectInlines.h>
#include <JavaScriptCore/VM.h>

namespace WebCore {

const JSC::ConstructAbility s_writableStreamDefaultControllerInitializeWritableStreamDefaultControllerCodeConstructAbility = JSC::ConstructAbility::CannotConstruct;
const JSC::ConstructorKind s_writableStreamDefaultControllerInitializeWritableStreamDefaultControllerCodeConstructorKind = JSC::ConstructorKind::None;
const JSC::ImplementationVisibility s_writableStreamDefaultControllerInitializeWritableStreamDefaultControllerCodeImplementationVisibility = JSC::ImplementationVisibility::Public;
const int s_writableStreamDefaultControllerInitializeWritableStreamDefaultControllerCodeLength = 482;
static const JSC::Intrinsic s_writableStreamDefaultControllerInitializeWritableStreamDefaultControllerCodeIntrinsic = JSC::NoIntrinsic;
const char* const s_writableStreamDefaultControllerInitializeWritableStreamDefaultControllerCode =
    "(function ()\n" \
    "{\n" \
    "    \"use strict\";\n" \
    "\n" \
    "    @putByIdDirectPrivate(this, \"queue\", @newQueue());\n" \
    "    @putByIdDirectPrivate(this, \"abortSteps\", (reason) => {\n" \
    "        const result = @getByIdDirectPrivate(this, \"abortAlgorithm\").@call(@undefined, reason);\n" \
    "        @writableStreamDefaultControllerClearAlgorithms(this);\n" \
    "        return result;\n" \
    "    });\n" \
    "\n" \
    "    @putByIdDirectPrivate(this, \"errorSteps\", () => {\n" \
    "        @resetQueue(@getByIdDirectPrivate(this, \"queue\"));\n" \
    "    });\n" \
    "\n" \
    "    return this;\n" \
    "})\n" \
;

const JSC::ConstructAbility s_writableStreamDefaultControllerErrorCodeConstructAbility = JSC::ConstructAbility::CannotConstruct;
const JSC::ConstructorKind s_writableStreamDefaultControllerErrorCodeConstructorKind = JSC::ConstructorKind::None;
const JSC::ImplementationVisibility s_writableStreamDefaultControllerErrorCodeImplementationVisibility = JSC::ImplementationVisibility::Public;
const int s_writableStreamDefaultControllerErrorCodeLength = 372;
static const JSC::Intrinsic s_writableStreamDefaultControllerErrorCodeIntrinsic = JSC::NoIntrinsic;
const char* const s_writableStreamDefaultControllerErrorCode =
    "(function (e)\n" \
    "{\n" \
    "    \"use strict\";\n" \
    "\n" \
    "    if (@getByIdDirectPrivate(this, \"abortSteps\") === @undefined)\n" \
    "        throw @makeThisTypeError(\"WritableStreamDefaultController\", \"error\");\n" \
    "\n" \
    "    const stream = @getByIdDirectPrivate(this, \"stream\");\n" \
    "    if (@getByIdDirectPrivate(stream, \"state\") !== \"writable\")\n" \
    "        return;\n" \
    "    @writableStreamDefaultControllerError(this, e);\n" \
    "})\n" \
;


#define DEFINE_BUILTIN_GENERATOR(codeName, functionName, overriddenName, argumentCount) \
JSC::FunctionExecutable* codeName##Generator(JSC::VM& vm) \
{\
    JSVMClientData* clientData = static_cast<JSVMClientData*>(vm.clientData); \
    return clientData->builtinFunctions().writableStreamDefaultControllerBuiltins().codeName##Executable()->link(vm, nullptr, clientData->builtinFunctions().writableStreamDefaultControllerBuiltins().codeName##Source(), std::nullopt, s_##codeName##Intrinsic); \
}
WEBCORE_FOREACH_WRITABLESTREAMDEFAULTCONTROLLER_BUILTIN_CODE(DEFINE_BUILTIN_GENERATOR)
#undef DEFINE_BUILTIN_GENERATOR


} // namespace WebCore
