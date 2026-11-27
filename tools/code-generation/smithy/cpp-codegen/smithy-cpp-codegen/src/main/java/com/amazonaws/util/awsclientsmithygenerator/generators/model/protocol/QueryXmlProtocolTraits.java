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
        ProtocolTraits.writeSerializableStructForwardDeclaration(writer);
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
        writer.write("$L $L(const $L& result);", exportMacro, className, RAW_RESULT_TYPE);
        writer.write("$L $L& operator=(const $L& result);", exportMacro, className, RAW_RESULT_TYPE);
        if (RequestBindings.nonEmptySchemaSerializable(RequestBindings.resultMembers(shape), model)) {
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
                    "aws/core/utils/component-registry/ComponentRegistry.h",
                    "atomic",
                    "mutex",
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
                    "aws/core/utils/component-registry/ComponentRegistry.h",
                    "atomic",
                    "mutex",
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
        writer.openBlock("$L::$L(const $L& result) {", "}",
            className, className, RAW_RESULT_TYPE, () -> writer.write("*this = result;"));
        writer.write("");
        writer.openBlock("$L& $L::operator=(const $L& result) {", "}",
            className, className, RAW_RESULT_TYPE, () -> {
            writer.write("m_HttpResponseCode = result.GetResponseCode();");
            // The body is not parsed here (it reaches the ClientProtocol raw), so the request id that query
            // carries in <ResponseMetadata> and ec2 in a top-level <requestId> is read from the
            // x-amzn-requestid header, which both protocols also send. It populates m_responseMetadata.
            writer.write("const auto& headers = result.GetHeaderValueCollection();");
            writer.write("const auto requestIdIter = headers.find(\"x-amzn-requestid\");");
            writer.openBlock("if (requestIdIter != headers.end()) {", "}", () -> {
                writer.write("m_responseMetadata.SetRequestId(requestIdIter->second);");
                writer.write("m_responseMetadataHasBeenSet = true;");
                writer.write("AWS_LOGSTREAM_DEBUG(\"Aws::$L::Model::$L\", "
                    + "\"x-amzn-request-id: \" << m_responseMetadata.GetRequestId());", namespace, className);
            });
            writeResultStatusCodeMembers(writer, shape, model);
            writer.write("return *this;");
        });
        // The body members are NOT read by operator= (which handles only the HTTP status and request id):
        // the client drives ClientProtocol::DeserializeResponse over GetSchemaSerdeOutput(), and the protocol
        // peels the aws-query <OperationResult> envelope (ec2 members sit at the response root).
        if (RequestBindings.nonEmptySchemaSerializable(RequestBindings.resultMembers(shape), model)) {
            writer.write("");
            SchemaSerdeRenderer.writeResultDeser(writer, className, RequestBindings.resultMembers(shape), model,
                memberTraits(), namespace);
        }
    }

    /** ec2 names members by {@code @ec2QueryName}; aws-query by {@code @xmlName}. */
    private SchemaSerdeRenderer.MemberTraits memberTraits() {
        return protocol == Protocol.EC2 ? SchemaSerdeRenderer::ec2MemberTraits : SchemaSerdeRenderer::xmlMemberTraits;
    }

    @Override
    public void writeRequestMethodDecls(CppWriter writer, String exportMacro,
                                        StructureShape shape, OperationShape operation, Model model) {
        if (RequestBindings.emitsSerializePayload(operation, model)) {
            writer.write("$L Aws::String SerializePayload() const override;", exportMacro);
            SchemaSerdeRenderer.writeOperationContextDecl(writer, exportMacro);
            if (RequestBindings.schemaSerializable(RequestBindings.members(shape), model)) {
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
                                        ServiceShape service, Model model, String namespace) {
        if (RequestBindings.emitsSerializePayload(operation, model)) {
            if (RequestBindings.schemaSerializable(RequestBindings.members(shape), model)) {
                // aws-query/ec2 wrap the member body with Action/Version (owned by the protocol via the
                // OperationRequestContext); ec2 uses Ec2QueryNameTrait wire names. HTTP binding traits are
                // ignored, so every member is a body field.
                SchemaSerdeRenderer.writeSerializePayload(writer, className, RequestBindings.members(shape), model,
                    memberTraits(), namespace);
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
