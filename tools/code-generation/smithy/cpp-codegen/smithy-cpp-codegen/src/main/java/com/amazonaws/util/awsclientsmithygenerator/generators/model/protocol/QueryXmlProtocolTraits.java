/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.protocol;

import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriter;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.ProtocolResolver.Protocol;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.shapes.OperationShape;
import software.amazon.smithy.model.shapes.ServiceShape;
import software.amazon.smithy.model.shapes.StructureShape;

import java.util.List;

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
    public boolean resultHasTopLevelRequestId() {
        // Query/EC2 results carry the request id inside the injected ResponseMetadata member,
        // so there is no top-level GetRequestId / m_requestId.
        return false;
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
    public List<String> serdeIncludes(FileKind kind) {
        switch (kind) {
            case SUBOBJECT_HEADER:
                return List.of("aws/core/utils/memory/stl/AWSStreamFwd.h");
            case RESULT_HEADER:
                // Query/EC2 result headers forward-declare XmlDocument; no serde include.
                return List.of();
            // Request sources additionally serialize @httpHeader/@httpQuery members via the shared
            // serializers, which need URI (AddQueryStringParameter), StringUtils, the stringstream,
            // and <numeric> (std::accumulate for comma-joined list @httpHeader members). URI.h is
            // added only here to avoid widening the other source kinds.
            case REQUEST_SOURCE:
                return List.of(
                    "aws/core/utils/xml/XmlSerializer.h",
                    "aws/core/utils/logging/LogMacros.h",
                    "aws/core/utils/UnreferencedParam.h",
                    "aws/core/utils/StringUtils.h",
                    "aws/core/utils/memory/stl/AWSStringStream.h",
                    "aws/core/utils/HashingUtils.h",
                    "aws/core/http/URI.h",
                    "numeric");
            case SUBOBJECT_SOURCE:
            case RESULT_SOURCE:
            case STREAMING_RESULT_SOURCE:
            case EVENT_HANDLER_SOURCE:
            case INITIAL_RESPONSE_SOURCE:
                // All source kinds share one union (supersets allowed). Usings are unchanged.
                // No Query source arm carried <utility>, so the union omits it.
                return List.of(
                    "aws/core/utils/xml/XmlSerializer.h",
                    "aws/core/utils/logging/LogMacros.h",
                    "aws/core/utils/UnreferencedParam.h",
                    "aws/core/utils/StringUtils.h",
                    "aws/core/utils/memory/stl/AWSStringStream.h",
                    "aws/core/utils/HashingUtils.h");
            default:
                throw new UnsupportedOperationException(
                    "No serde includes defined for FileKind " + kind + " in QueryXmlProtocolTraits");
        }
    }

    @Override
    public List<String> serdeUsings(FileKind kind) {
        switch (kind) {
            case RESULT_SOURCE:
                return List.of("Aws::Utils::Xml", "Aws::Utils::Logging", "Aws::Utils");
            case INITIAL_RESPONSE_SOURCE:
                return List.of("Aws::Utils::Xml", "Aws::Utils");
            case REQUEST_SOURCE:
                return List.of("Aws::Utils");
            case EVENT_HANDLER_SOURCE:
                return List.of(serdeNamespace());
            case SUBOBJECT_SOURCE:
                return List.of("Aws::Utils::Xml", "Aws::Utils");
            default:
                throw new UnsupportedOperationException(
                    "No serde usings defined for FileKind " + kind + " in QueryXmlProtocolTraits");
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
        writer.openBlock("void $L::OutputToStream(Aws::OStream& ostream, const char* location, "
            + "unsigned index, const char* locationValue) const {", "}", className, () -> {
        });
        writer.write("");
        writer.openBlock("void $L::OutputToStream(Aws::OStream& ostream, const char* location) const {",
            "}", className, () -> {
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
            writer.write("m_HttpResponseCode = result.GetResponseCode();");
            writer.write("const XmlDocument& xmlDocument = result.GetPayload();");
            writer.write("XmlNode rootNode = xmlDocument.GetRootElement();");
            writer.write("// TODO: protocol-specific body member deserialization");
            // Query extracts <ResponseMetadata>; EC2 extracts a top-level <requestId>. Both
            // populate m_responseMetadata; rest-xml/json/cbor do neither.
            if (protocol == Protocol.EC2) {
                writer.openBlock("if (!rootNode.IsNull()) {", "}", () -> {
                    writer.write("XmlNode requestIdNode = rootNode.FirstChild(\"requestId\");");
                    writer.openBlock("if (!requestIdNode.IsNull()) {", "}", () -> {
                        writer.write("m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));");
                        writer.write("m_responseMetadataHasBeenSet = true;");
                    });
                });
            } else {
                writer.openBlock("if (!rootNode.IsNull()) {", "}", () -> {
                    writer.write("XmlNode responseMetadataNode = rootNode.FirstChild(\"ResponseMetadata\");");
                    writer.write("m_responseMetadata = responseMetadataNode;");
                    writer.write("m_responseMetadataHasBeenSet = true;");
                    writer.write("AWS_LOGSTREAM_DEBUG(\"Aws::$L::Model::$L\", "
                        + "\"x-amzn-request-id: \" << m_responseMetadata.GetRequestId());",
                        namespace, className);
                });
            }
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
        writer.write("");
        // DumpBodyToUrl is a protected virtual in AmazonWebServiceRequest, so the override
        // is bracketed under protected: and the section restored to public: afterwards,
        // matching the legacy C2J layout.
        writer.dedent();
        writer.write("protected:");
        writer.indent();
        writer.write("$L void DumpBodyToUrl(Aws::Http::URI& uri) const override;", exportMacro);
        writer.dedent();
        writer.write("");
        writer.write("public:");
        writer.indent();
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
        writer.write("");
        writer.write("void $L::DumpBodyToUrl(Aws::Http::URI& uri) const { uri.SetQueryString(SerializePayload()); }",
            className);
    }
}
