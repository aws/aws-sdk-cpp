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
        } else {
            throw new UnsupportedOperationException("Unsupported protocol for serde header declarations: " + protocol);
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
        } else if (protocol == Protocol.QUERY_XML || protocol == Protocol.EC2) {
            renderQueryXmlStub(writer, className);
        } else {
            throw new UnsupportedOperationException("Unsupported protocol for serde source implementation: " + protocol);
        }
    }

    /**
     * Emits the empty per-protocol serde source bodies for a class that has no backing
     * StructureShape (event stream union / initial response). Mirrors
     * {@link #renderSourceImplementation} but keyed only on the class name.
     */
    public static void renderSerdeSourceStub(CppWriter writer, Protocol protocol, String className) {
        if (protocol.isJsonLike()) {
            renderJsonStub(writer, className);
        } else if (protocol == Protocol.REST_XML) {
            renderXmlStub(writer, className);
        } else if (protocol == Protocol.QUERY_XML || protocol == Protocol.EC2) {
            renderQueryXmlStub(writer, className);
        } else {
            throw new UnsupportedOperationException("Unsupported protocol for serde source stub: " + protocol);
        }
    }

    /**
     * Emits a protocol-agnostic stub for an event-stream event case body: a TODO marker
     * and a minimal, compilable callback invocation with a default-constructed event.
     * No protocol-specific deserialization is emitted.
     *
     * @param writer         the CppWriter
     * @param eventShapeName the C++ event shape type (e.g. "SubscribeToShardEvent")
     * @param callbackMember the handler callback member (e.g. "m_onSubscribeToShardEvent")
     */
    public static void renderEventPayloadDecodeStub(CppWriter writer, String eventShapeName,
                                                    String callbackMember) {
        writer.write("// TODO: protocol-specific event payload deserialization");
        writer.write("$L($L{});", callbackMember, eventShapeName);
    }

    /**
     * Emits a protocol-agnostic stub in place of the protocol-specific error-payload parse.
     * The header-derived error code/message still flow to MarshallError at the call site.
     */
    public static void renderErrorPayloadParseStub(CppWriter writer) {
        writer.write("// TODO: protocol-specific error payload deserialization");
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
