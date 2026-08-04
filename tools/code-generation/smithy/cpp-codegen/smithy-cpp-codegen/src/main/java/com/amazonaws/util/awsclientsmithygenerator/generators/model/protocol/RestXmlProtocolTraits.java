/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.protocol;

import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriter;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.ProtocolResolver.Protocol;

/**
 * REST-XML serde rendering. Shapes serialize by attaching themselves to a parent
 * node via {@code AddToNode}.
 */
public final class RestXmlProtocolTraits implements ProtocolTraits {

    @Override
    public Protocol protocol() {
        return Protocol.REST_XML;
    }

    @Override
    public String serdeNamespace() {
        return Protocol.REST_XML.getSerdeNamespace();
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
        writer.write("$L void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;", exportMacro);
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
        writer.openBlock("void $L::AddToNode(XmlNode& parentNode) const {", "}", className, () -> {
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
