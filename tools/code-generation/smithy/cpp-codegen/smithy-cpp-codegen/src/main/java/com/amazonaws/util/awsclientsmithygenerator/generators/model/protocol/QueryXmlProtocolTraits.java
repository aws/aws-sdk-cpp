/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.protocol;

import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriter;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.ProtocolResolver.Protocol;

/**
 * Query-XML serde rendering. Serves both {@link Protocol#QUERY_XML} and
 * {@link Protocol#EC2}: shapes serialize into a flat, indexed query string via two
 * {@code OutputToStream} overloads rather than into a node tree.
 */
public final class QueryXmlProtocolTraits implements ProtocolTraits {

    private final Protocol protocol;

    public QueryXmlProtocolTraits(Protocol protocol) {
        if (protocol != Protocol.QUERY_XML && protocol != Protocol.EC2) {
            throw new IllegalArgumentException(
                "QueryXmlProtocolTraits only serves QUERY_XML and EC2, got: " + protocol);
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
        writer.writeNamespaceOpen("Xml");
        writer.write("class XmlNode;");
        writer.writeNamespaceClose("Xml");
        writer.writeNamespaceClose("Utils");
    }

    @Override
    public void writeResultForwardDeclarations(CppWriter writer) {
        writer.writeNamespaceOpen("Utils");
        writer.writeNamespaceOpen("Xml");
        writer.write("class XmlDocument;");
        writer.writeNamespaceClose("Xml");
        writer.writeNamespaceClose("Utils");
    }

    @Override
    public void writeSerdeMethodDecls(CppWriter writer, String exportMacro, String className,
                                      Runnable beforeSerializeMethod) {
        writer.write("$L $L() = default;", exportMacro, className);
        writer.write("$L $L(const Aws::Utils::Xml::XmlNode& xmlNode);", exportMacro, className);
        writer.write("$L $L& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);", exportMacro, className);
        if (beforeSerializeMethod != null) {
            beforeSerializeMethod.run();
        }
        writer.write("$L void OutputToStream(Aws::OStream& ostream, const char* location, "
            + "unsigned index, const char* locationValue) const;", exportMacro);
        writer.write("$L void OutputToStream(Aws::OStream& ostream, const char* location) const;", exportMacro);
    }

    @Override
    public void writeResultSerdeDecls(CppWriter writer, String exportMacro, String className) {
        writer.write("$L $L(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);",
            exportMacro, className);
        writer.write("$L $L& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);",
            exportMacro, className);
    }

    @Override
    public void writeSerdeInclude(CppWriter writer) {
        writer.write("#include <aws/core/utils/xml/XmlSerializer.h>");
    }

    @Override
    public void writeSerdeUsingDeclarations(CppWriter writer) {
        writer.write("using namespace Aws::Utils::Xml;");
        writer.write("using namespace Aws::Utils;");
    }

    @Override
    public void writeSerdeMethodImpls(CppWriter writer, String className) {
        writer.write("$L::$L(const XmlNode& xmlNode) { *this = xmlNode; }", className, className);
        writer.write("");
        writer.openBlock("$L& $L::operator=(const XmlNode& xmlNode) {", "}", className, className, () -> {
            writer.write("return *this;");
        });
        writer.write("");
        writer.openBlock("void $L::OutputToStream(Aws::OStream& ostream, const char* location, "
            + "unsigned index, const char* locationValue) const {", "}", className, () -> {
        });
        writer.write("");
        writer.openBlock("void $L::OutputToStream(Aws::OStream& ostream, const char* location) const {",
            "}", className, () -> {
        });
    }

    @Override
    public void writeResultSerdeImpls(CppWriter writer, String className) {
        writer.openBlock("$L::$L(const Aws::AmazonWebServiceResult<XmlDocument>& result) {", "}",
            className, className, () -> writer.write("*this = result;"));
        writer.write("");
        writer.openBlock("$L& $L::operator=(const Aws::AmazonWebServiceResult<XmlDocument>& result) {", "}",
            className, className, () -> writer.write("return *this;"));
    }
}
