/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model;

import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriter;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.ProtocolResolver.Protocol;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.shapes.StructureShape;

/**
 * Generates protocol-specific serde method declarations (header) and empty stub
 * implementations (source). The stubs will be replaced by schema-based serde.
 */
public final class SerdeStub {

    private SerdeStub() {
    }

    public static void renderHeaderDeclarations(CppWriter writer, Protocol protocol,
                                                String exportMacro, String className) {
        if (protocol.isJsonLike()) {
            writer.write("$L $L() = default;", exportMacro, className);
            writer.write("$L $L(Aws::Utils::Json::JsonView jsonValue);", exportMacro, className);
            writer.write("$L $L& operator=(Aws::Utils::Json::JsonView jsonValue);", exportMacro, className);
            writer.write("$L Aws::Utils::Json::JsonValue Jsonize() const;", exportMacro);
        } else if (protocol == Protocol.REST_XML) {
            writer.write("$L $L() = default;", exportMacro, className);
            writer.write("$L $L(const Aws::Utils::Xml::XmlNode& xmlNode);", exportMacro, className);
            writer.write("$L $L& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);", exportMacro, className);
            writer.write("$L void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;", exportMacro);
        } else if (protocol == Protocol.QUERY_XML || protocol == Protocol.EC2) {
            writer.write("$L $L() = default;", exportMacro, className);
            writer.write("$L $L(const Aws::Utils::Xml::XmlNode& xmlNode);", exportMacro, className);
            writer.write("$L $L& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);", exportMacro, className);
            writer.write("$L void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;", exportMacro);
            writer.write("$L void OutputToStream(Aws::OStream& ostream, const char* location) const;", exportMacro);
        }
    }

    public static void renderSourceImplementation(CppWriter writer, StructureShape shape,
                                                  Model model, Protocol protocol,
                                                  String className, String serviceName,
                                                  String projectName) {
        if (protocol.isJsonLike()) {
            renderJsonStub(writer, className);
        } else if (protocol == Protocol.REST_XML) {
            renderXmlStub(writer, className);
        } else {
            renderQueryXmlStub(writer, className);
        }
    }

    private static void renderJsonStub(CppWriter writer, String className) {
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

    private static void renderXmlStub(CppWriter writer, String className) {
        writer.write("$L::$L(const XmlNode& xmlNode) { *this = xmlNode; }", className, className);
        writer.write("");
        writer.openBlock("$L& $L::operator=(const XmlNode& xmlNode) {", "}", className, className, () -> {
            writer.write("return *this;");
        });
        writer.write("");
        writer.openBlock("void $L::AddToNode(XmlNode& parentNode) const {", "}", className, () -> {
        });
    }

    private static void renderQueryXmlStub(CppWriter writer, String className) {
        writer.write("$L::$L(const XmlNode& xmlNode) { *this = xmlNode; }", className, className);
        writer.write("");
        writer.openBlock("$L& $L::operator=(const XmlNode& xmlNode) {", "}", className, className, () -> {
            writer.write("return *this;");
        });
        writer.write("");
        writer.openBlock("void $L::OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const {", "}", className, () -> {
        });
        writer.write("");
        writer.openBlock("void $L::OutputToStream(Aws::OStream& ostream, const char* location) const {", "}", className, () -> {
        });
    }
}
