/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.protocol;

import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriter;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.ProtocolResolver.Protocol;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms.EmbeddedErrorsTrait;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.shapes.OperationShape;
import software.amazon.smithy.model.shapes.ServiceShape;
import software.amazon.smithy.model.shapes.StructureShape;

import java.util.List;

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
    public List<String> serdeIncludes(FileKind kind) {
        switch (kind) {
            // Sub-object and result headers forward-declare XmlNode/XmlDocument; no serializer include.
            case SUBOBJECT_HEADER:
            case RESULT_HEADER:
                return List.of();
            // All source kinds share one union (supersets allowed). Usings are unchanged.
            case SUBOBJECT_SOURCE:
            case REQUEST_SOURCE:
            case RESULT_SOURCE:
            case STREAMING_RESULT_SOURCE:
            case EVENT_HANDLER_SOURCE:
            case INITIAL_RESPONSE_SOURCE:
                return List.of(
                    "aws/core/utils/xml/XmlSerializer.h",
                    "aws/core/utils/memory/stl/AWSStringStream.h",
                    "aws/core/utils/UnreferencedParam.h",
                    "aws/core/utils/HashingUtils.h",
                    "utility");
            default:
                throw new UnsupportedOperationException(
                    "No serde includes defined for FileKind " + kind + " in RestXmlProtocolTraits");
        }
    }

    @Override
    public List<String> serdeUsings(FileKind kind) {
        switch (kind) {
            case EVENT_HANDLER_SOURCE:
                return List.of(serdeNamespace());
            case RESULT_SOURCE:
            case INITIAL_RESPONSE_SOURCE:
            case REQUEST_SOURCE:
            case SUBOBJECT_SOURCE:
                return List.of("Aws::Utils::Xml", "Aws::Utils");
            default:
                throw new UnsupportedOperationException(
                    "No serde usings defined for FileKind " + kind + " in RestXmlProtocolTraits");
        }
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
    public void writeResultSerdeImpls(CppWriter writer, String className, StructureShape shape, Model model,
                                      String namespace) {
        writer.openBlock("$L::$L(const Aws::AmazonWebServiceResult<XmlDocument>& result) {", "}",
            className, className, () -> writer.write("*this = result;"));
        writer.write("");
        writer.openBlock("$L& $L::operator=(const Aws::AmazonWebServiceResult<XmlDocument>& result) {", "}",
            className, className, () -> {
            writeResultStatusCodeMembers(writer, shape, model);
            writer.write("return *this;");
        });
    }

    @Override
    public void writeRequestMethodDecls(CppWriter writer, String exportMacro,
                                        StructureShape shape, OperationShape operation, Model model) {
        if (RequestBindings.emitsSerializePayload(operation, model)) {
            writer.write("$L Aws::String SerializePayload() const override;", exportMacro);
        }
        if (RequestBindings.hasHeaderMembers(shape, model)) {
            writer.write("");
            writeGetRequestSpecificHeadersDecl(writer, exportMacro);
        }
        if (RequestBindings.hasQueryStringMembers(shape, model)) {
            writer.write("");
            writeAddQueryStringParametersDecl(writer, exportMacro);
        }
        if (shape.hasTrait(EmbeddedErrorsTrait.class)) {
            writer.write("");
            writeHasEmbeddedErrorDecl(writer, exportMacro);
        }
    }

    @Override
    public void writeRequestMethodImpls(CppWriter writer, String className,
                                        StructureShape shape, OperationShape operation,
                                        ServiceShape service, Model model) {
        if (RequestBindings.emitsSerializePayload(operation, model)) {
            writer.write("Aws::String $L::SerializePayload() const { return {}; }", className);
        }
        if (RequestBindings.hasHeaderMembers(shape, model)) {
            writer.write("");
            writeGetRequestSpecificHeadersImpl(writer, className, shape, operation, service, model);
        }
        if (RequestBindings.hasQueryStringMembers(shape, model)) {
            writer.write("");
            writeAddQueryStringParametersImpl(writer, className);
        }
        if (shape.hasTrait(EmbeddedErrorsTrait.class)) {
            writer.write("");
            writeHasEmbeddedErrorImpl(writer, className);
        }
    }
}
