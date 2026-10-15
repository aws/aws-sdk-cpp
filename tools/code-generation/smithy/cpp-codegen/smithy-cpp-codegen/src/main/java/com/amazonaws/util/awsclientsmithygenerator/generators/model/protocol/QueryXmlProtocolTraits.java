/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.protocol;

import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriter;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.ProtocolResolver.Protocol;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms.SupportsPresigningTrait;
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
        // Forward-declare the schema-serde adapter base for the GetSchemaSerdeOutput() return type.
        writer.write("}");  // close Aws (reopened below by the result body)
        writer.write("namespace smithy { namespace schema { class SerializableStruct; } }");
        writer.write("namespace Aws {");
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
    public void writeResultSerdeDecls(CppWriter writer, String exportMacro, String className,
                                      StructureShape shape, Model model) {
        writer.write("$L $L(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);",
            exportMacro, className);
        writer.write("$L $L& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);",
            exportMacro, className);
        if (RequestBindings.resultAllMembersSchemaDeserializable(shape, model)) {
            SchemaSerdeRenderer.writeResultDeserMethodDecls(writer, exportMacro);
        }
    }

    @Override
    public List<String> serdeIncludes(FileKind kind) {
        switch (kind) {
            case SUBOBJECT_HEADER:
                return List.of("aws/core/utils/memory/stl/AWSStreamFwd.h");
            case RESULT_HEADER:
                // Query/EC2 result headers forward-declare XmlDocument; AWSMemory is needed for the
                // Aws::UniquePtr return type of the schema-serde GetSchemaSerdeOutput() hook.
                return List.of("aws/core/utils/memory/AWSMemory.h");
            // Request sources also serialize @httpHeader/@httpQuery members, needing URI,
            // StringUtils, the stringstream, and <numeric> (std::accumulate for comma-joined list
            // headers). URI.h added only here to avoid widening other source kinds.
            case REQUEST_SOURCE:
                return List.of(
                    "aws/core/utils/xml/XmlSerializer.h",
                    "aws/core/utils/logging/LogMacros.h",
                    "aws/core/utils/UnreferencedParam.h",
                    "aws/core/utils/StringUtils.h",
                    "aws/core/utils/memory/stl/AWSStringStream.h",
                    "aws/core/utils/HashingUtils.h",
                    "aws/core/http/URI.h",
                    "aws/core/utils/memory/AWSMemory.h",
                    "smithy/client/schema/Schema.h",
                    "smithy/client/schema/SchemaBuilder.h",
                    "smithy/client/schema/SerializableStruct.h",
                    "smithy/client/schema/MapSerializer.h",
                    "smithy/client/schema/ShapeSerializer.h",
                    "smithy/client/schema/ClientProtocol.h",
                    "smithy/client/schema/XmlTraits.h",
                    "smithy/client/schema/SerdeTraits.h",
                    "smithy/client/schema/HttpTraits.h",
                    "smithy/client/schema/DocumentConversion.h",
                    "numeric");
            case RESULT_SOURCE:
                // Result sources also carry the schema-serde deserialize adapter (GetSchemaSerdeOutput),
                // needing the Schema/SerializableStruct/ShapeDeserializer headers + AWSMemory (MakeUnique).
                return List.of(
                    "aws/core/utils/xml/XmlSerializer.h",
                    "aws/core/utils/logging/LogMacros.h",
                    "aws/core/utils/UnreferencedParam.h",
                    "aws/core/utils/StringUtils.h",
                    "aws/core/utils/memory/stl/AWSStringStream.h",
                    "aws/core/utils/HashingUtils.h",
                    "aws/core/utils/memory/AWSMemory.h",
                    "smithy/client/schema/Schema.h",
                    "smithy/client/schema/SchemaBuilder.h",
                    "smithy/client/schema/SerializableStruct.h",
                    "smithy/client/schema/ShapeDeserializer.h",
                    "smithy/client/schema/XmlTraits.h",
                    "smithy/client/schema/SerdeTraits.h",
                    "smithy/client/schema/HttpTraits.h",
                    "smithy/client/schema/DocumentConversion.h");
            case SUBOBJECT_SOURCE:
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
        // Unnamed params: these are placeholder serde stubs (bodies pending); named params would trip
        // -Werror,-Wunused-parameter.
        writer.openBlock("$L& $L::operator=(const XmlNode&) {", "}", className, className, () -> {
            writer.write("return *this;");
        });
        writer.write("");
        writer.openBlock("void $L::OutputToStream(Aws::OStream&, const char*, unsigned, const char*) const {",
            "}", className, () -> {
        });
        writer.write("");
        writer.openBlock("void $L::OutputToStream(Aws::OStream&, const char*) const {",
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
            // Body-member deserialization is NOT done here: the result is protocol-agnostic and only
            // exposes GetSchemaSerdeOutput(). The client (which owns the ClientProtocol) drives
            // ClientProtocol::DeserializeResponse over that adapter — the protocol owns the response
            // envelope peel and deserializer choice. This operator= handles only the response transport
            // concerns (HTTP status + ResponseMetadata) it is handed via the XmlDocument.
            writer.write("return *this;");
        });
        // Client-driven schema-serde deserialization: an adapter that reads the response body members
        // into the result via setters. The client drives ClientProtocol::DeserializeResponse over it
        // (peeling the aws-query <OperationResult> envelope). Emitted alongside the legacy operator=
        // above until the response marshaller is switched to raw bytes. ec2 members sit at the response
        // root (no peel); both use the same adapter.
        if (RequestBindings.resultAllMembersSchemaDeserializable(shape, model)) {
            writer.write("");
            SchemaSerdeRenderer.writeResultDeser(writer, className, RequestBindings.resultMembers(shape), model,
                protocol == Protocol.EC2 ? SchemaSerdeRenderer::ec2MemberTraits : SchemaSerdeRenderer::xmlMemberTraits);
        }
    }

    @Override
    public void writeRequestMethodDecls(CppWriter writer, String exportMacro,
                                        StructureShape shape, OperationShape operation, Model model) {
        if (RequestBindings.emitsSerializePayload(operation, model)) {
            writer.write("$L Aws::String SerializePayload() const override;", exportMacro);
            SchemaSerdeRenderer.writeOperationContextDecl(writer, exportMacro);
            if (RequestBindings.allMembersSchemaSerializable(shape, model)) {
                SchemaSerdeRenderer.writeSchemaSerdeMethodDecls(writer, exportMacro);
            }
        }
        // aws-query / ec2 are RPC protocols: HTTP binding traits are ignored (C2J parity), so every member is
        // a body field and no header / query-string methods are declared.
        // The DumpBodyToUrl override decl is emitted protocol-agnostically by RequestRenderer
        // (gated on SupportsPresigningTrait); only the impl below is protocol-specific.
    }

    @Override
    public void writeRequestMethodImpls(CppWriter writer, String className,
                                        StructureShape shape, OperationShape operation,
                                        ServiceShape service, Model model) {
        if (RequestBindings.emitsSerializePayload(operation, model)) {
            if (RequestBindings.allMembersSchemaSerializable(shape, model)) {
                // aws-query/ec2 wrap the member body with Action/Version (owned by the protocol via the
                // OperationRequestContext); ec2 uses Ec2QueryNameTrait wire names. HTTP binding traits are
                // ignored, so every member is a body field.
                SchemaSerdeRenderer.writeSerializePayload(writer, className, new java.util.ArrayList<>(shape.getAllMembers().values()),
                    model, protocol == Protocol.EC2 ? SchemaSerdeRenderer::ec2MemberTraits : SchemaSerdeRenderer::xmlMemberTraits);
            } else {
                writer.write("Aws::String $L::SerializePayload() const { return {}; }", className);
            }
            // The operation context (Action/Version) is emitted for every request, not just serializable
            // ones: the response path uses the Action to peel the query <OperationResult> envelope.
            SchemaSerdeRenderer.writeOperationContext(writer, className, operation.getId().getName(), service.getVersion());
        }
        // Gate the DumpBodyToUrl impl on the same trait as the RequestRenderer decl so the two stay
        // symmetric.
        if (operation.hasTrait(SupportsPresigningTrait.class)) {
            writer.write("");
            writer.write("void $L::DumpBodyToUrl(Aws::Http::URI& uri) const { uri.SetQueryString(SerializePayload()); }",
                className);
        }
    }
}
