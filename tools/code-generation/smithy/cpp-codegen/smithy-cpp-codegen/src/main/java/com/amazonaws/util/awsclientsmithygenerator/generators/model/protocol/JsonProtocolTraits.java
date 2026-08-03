/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.protocol;

import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriter;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.ProtocolResolver.Protocol;

/**
 * JSON-flavored serde rendering. Serves both {@link Protocol#JSON} and
 * {@link Protocol#CBOR}, which share an identical C++ surface today (CBOR reuses the
 * JSON model types and differs only on the wire).
 */
public final class JsonProtocolTraits implements ProtocolTraits {

    private final Protocol protocol;

    public JsonProtocolTraits(Protocol protocol) {
        if (protocol != Protocol.JSON && protocol != Protocol.CBOR) {
            throw new IllegalArgumentException(
                "JsonProtocolTraits only serves JSON and CBOR, got: " + protocol);
        }
        this.protocol = protocol;
    }

    @Override
    public Protocol protocol() {
        return protocol;
    }

    @Override
    public String serdeNamespace() {
        return protocol.getSerdeNamespace();
    }

    @Override
    public void writeShapeForwardDeclarations(CppWriter writer) {
        writer.writeNamespaceOpen("Utils");
        writer.writeNamespaceOpen("Json");
        writer.write("class JsonValue;");
        writer.write("class JsonView;");
        writer.writeNamespaceClose("Json");
        writer.writeNamespaceClose("Utils");
    }

    @Override
    public void writeResultForwardDeclarations(CppWriter writer) {
        writer.writeNamespaceOpen("Utils");
        writer.writeNamespaceOpen("Json");
        writer.write("class JsonValue;");
        writer.writeNamespaceClose("Json");
        writer.writeNamespaceClose("Utils");
    }

    @Override
    public void writeSerdeMethodDecls(CppWriter writer, String exportMacro, String className,
                                      Runnable beforeSerializeMethod) {
        writer.write("$L $L() = default;", exportMacro, className);
        writer.write("$L $L($L jsonValue);", exportMacro, className, protocol.getViewType());
        writer.write("$L $L& operator=($L jsonValue);", exportMacro, className, protocol.getViewType());
        if (beforeSerializeMethod != null) {
            beforeSerializeMethod.run();
        }
        writer.write("$L $L $L() const;", exportMacro, protocol.getValueType(),
            protocol.getSerializeMethodName());
    }

    @Override
    public void writeResultSerdeDecls(CppWriter writer, String exportMacro, String className) {
        writer.write("$L $L(const Aws::AmazonWebServiceResult<$L>& result);",
            exportMacro, className, protocol.getValueType());
        writer.write("$L $L& operator=(const Aws::AmazonWebServiceResult<$L>& result);",
            exportMacro, className, protocol.getValueType());
    }

    @Override
    public void writeSerdeInclude(CppWriter writer) {
        writer.write("#include <aws/core/utils/json/JsonSerializer.h>");
    }

    @Override
    public void writeSerdeUsingDeclarations(CppWriter writer) {
        writer.write("using namespace Aws::Utils::Json;");
        writer.write("using namespace Aws::Utils;");
    }

    @Override
    public void writeSerdeMethodImpls(CppWriter writer, String className) {
        writer.write("$L::$L(JsonView jsonValue) { *this = jsonValue; }", className, className);
        writer.write("");
        writer.openBlock("$L& $L::operator=(JsonView jsonValue) {", "}", className, className, () -> {
            writer.write("return *this;");
        });
        writer.write("");
        writer.openBlock("JsonValue $L::Jsonize() const {", "}", className, () -> {
            writer.write("JsonValue payload;");
            writer.write("return payload;");
        });
    }

    @Override
    public void writeResultSerdeImpls(CppWriter writer, String className) {
        writer.openBlock("$L::$L(const Aws::AmazonWebServiceResult<JsonValue>& result) {", "}",
            className, className, () -> writer.write("*this = result;"));
        writer.write("");
        writer.openBlock("$L& $L::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {", "}",
            className, className, () -> writer.write("return *this;"));
    }
}
