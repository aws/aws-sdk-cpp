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
            // Request sources additionally serialize @httpHeader/@httpQuery members, which need
            // StringUtils (to_string), URI (URLEncodePath for x-amz-copy-source), and <numeric>
            // (std::accumulate for comma-joined list headers). C2J pulls these per-shape; the
            // data-driven set carries them for every request source (superset).
            case REQUEST_SOURCE:
                return List.of(
                    "aws/core/utils/xml/XmlSerializer.h",
                    "aws/core/utils/memory/stl/AWSStringStream.h",
                    "aws/core/utils/UnreferencedParam.h",
                    "aws/core/utils/HashingUtils.h",
                    "aws/core/utils/StringUtils.h",
                    "aws/core/http/URI.h",
                    "numeric",
                    "utility");
            // The remaining source kinds share one union (supersets allowed).
            case SUBOBJECT_SOURCE:
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
            // Request sources add Aws::Http so URI::URLEncodePath resolves unqualified (C2J emits
            // `using namespace Aws::Http;` in every XML request source that serializes headers/query).
            case REQUEST_SOURCE:
                return List.of("Aws::Utils::Xml", "Aws::Utils", "Aws::Http");
            case RESULT_SOURCE:
            case INITIAL_RESPONSE_SOURCE:
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
            writeAddQueryStringParametersImpl(writer, className, shape, model);
        }
        if (shape.hasTrait(EmbeddedErrorsTrait.class)) {
            writer.write("");
            writeHasEmbeddedErrorImpl(writer, className);
        }
    }

    // C2J RequestHeader.vm decl: unqualified IOStream / Http::HeaderValueCollection, resolved via the
    // request header's Aws usings. Only S3 requests carry EmbeddedErrorsTrait, so the caller gates.
    private void writeHasEmbeddedErrorDecl(CppWriter writer, String exportMacro) {
        writer.write("$L bool HasEmbeddedError(IOStream &body, "
            + "const Http::HeaderValueCollection &header) const override;", exportMacro);
    }

    // Constant XML error-sniff body, identical across C2J's S3 request-source templates
    // (XmlRequestSource / StreamRequestSource / PutBucketNotificationConfigurationRequest): parse the
    // response body as XML and report an embedded error when the root element is <Error>. It is not
    // shape-dependent, so there is nothing to defer. XmlSerializer.h + UnreferencedParam.h and the
    // Aws::Utils::Xml / Aws::Utils usings are already in the REQUEST_SOURCE serde includes/usings.
    private void writeHasEmbeddedErrorImpl(CppWriter writer, String className) {
        writer.openBlock("bool $L::HasEmbeddedError(Aws::IOStream& body, "
            + "const Aws::Http::HeaderValueCollection& header) const {", "}", className, () -> {
            writer.write("AWS_UNREFERENCED_PARAM(header);");
            writer.write("auto readPointer = body.tellg();");
            writer.write("Utils::Xml::XmlDocument doc = XmlDocument::CreateFromXmlStream(body);");
            writer.write("body.seekg(readPointer);");
            writer.openBlock("if (!doc.WasParseSuccessful()) {", "}",
                () -> writer.write("return false;"));
            writer.openBlock("if (!doc.GetRootElement().IsNull() "
                + "&& doc.GetRootElement().GetName() == Aws::String(\"Error\")) {", "}",
                () -> writer.write("return true;"));
            writer.write("return false;");
        });
    }
}
