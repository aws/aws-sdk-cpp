/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.protocol;

import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriter;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.CppNames;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.ProtocolResolver.Protocol;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.renderers.RequestHeaderSerializer;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.renderers.RequestQuerySerializer;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms.AdditionalRequestHeadersTrait;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.shapes.MemberShape;
import software.amazon.smithy.model.shapes.OperationShape;
import software.amazon.smithy.model.shapes.ServiceShape;
import software.amazon.smithy.model.shapes.StructureShape;

import java.util.List;

/**
 * Owns every protocol-specific rendering decision for generated model code.
 *
 * <p>Renderers receive a {@code ProtocolTraits} and call these methods; they never branch on
 * {@link Protocol}. One implementation exists per serde <em>family</em> (JSON-like, REST-XML,
 * query-XML), not per protocol.
 *
 * <p>Obtain an instance from
 * {@code ProtocolResolver.traitsFor(ProtocolResolver.resolve(service, model))}.
 */
public interface ProtocolTraits {

    /** The protocol this instance was resolved for. */
    Protocol protocol();

    /** C++ namespace holding the serde utilities, e.g. {@code Aws::Utils::Json}. */
    String serdeNamespace();

    // ------------------------------------------------------------------
    // Include / using SETS (data-driven; preferred over the write-hooks below)
    // ------------------------------------------------------------------

    /** Protocol-specific serde {@code #include} paths (no angle brackets) for the given file kind. */
    List<String> serdeIncludes(FileKind kind);

    /** {@code using namespace} targets for the given file kind. */
    List<String> serdeUsings(FileKind kind);

    // ------------------------------------------------------------------
    // Header side
    // ------------------------------------------------------------------

    /**
     * Forward-declares the serde types a shape (sub-object / request / event) header
     * needs: both the value and the view type for JSON-like protocols, the node type
     * for XML-like ones. Emits its own {@code Utils}/{@code Json}|{@code Xml}
     * namespace nesting; the caller has already opened {@code Aws}.
     */
    void writeShapeForwardDeclarations(CppWriter writer);

    /**
     * Forward-declares the serde types a <em>result</em> header needs. This differs
     * from {@link #writeShapeForwardDeclarations}: results reference the document
     * type ({@code JsonValue} / {@code XmlDocument}) and never the view type.
     */
    void writeResultForwardDeclarations(CppWriter writer);

    /**
     * Emits the serde method declarations for a model class: the default ctor, the
     * deserializing ctor, {@code operator=}, and the serialize method
     * ({@code Jsonize} / {@code AddToNode} / {@code OutputToStream}).
     *
     * @param beforeSerializeMethod optional hook run after the deserializing ctor and
     *        {@code operator=} but before the serialize method, used to inject extra
     *        constructors at the mainline position. Ignored when {@code null}.
     */
    void writeSerdeMethodDecls(CppWriter writer, String exportMacro, String className,
                               Runnable beforeSerializeMethod);

    /**
     * Emits a result class's {@code AmazonWebServiceResult<...>} ctor and {@code operator=} declarations,
     * plus (for all-scalar-body results) the client-driven {@code GetSchemaSerdeOutput()} hook. {@code
     * shape}/{@code model} gate the schema-serde hook.
     */
    void writeResultSerdeDecls(CppWriter writer, String exportMacro, String className, StructureShape shape, Model model);

    // ------------------------------------------------------------------
    // Source side
    // ------------------------------------------------------------------

    /**
     * Emits the serde method bodies matching {@link #writeSerdeMethodDecls}.
     * Bodies are currently empty stubs pending schema-based serde.
     */
    void writeSerdeMethodImpls(CppWriter writer, String className);

    /**
     * Emits the result ctor / {@code operator=} bodies matching {@link #writeResultSerdeDecls}.
     *
     * @param namespace the C++ model namespace (e.g. {@code "IAM"}), used for fully-qualified
     *                  log tags in protocols that log during deserialization
     */
    void writeResultSerdeImpls(CppWriter writer, String className, StructureShape shape, Model model,
                               String namespace);

    /**
     * Emits the trailing status-code assignment block for every result member carrying the
     * {@code @httpResponseCode} trait: {@code m_x = static_cast<int>(result.GetResponseCode());}
     * plus its has-been-set flag. Called from inside each protocol's result {@code operator=}
     * body, immediately before {@code return *this;}, matching the legacy C2J ordering.
     */
    default void writeResultStatusCodeMembers(CppWriter writer, StructureShape shape, Model model) {
        for (java.util.Map.Entry<String, MemberShape> entry : shape.getAllMembers().entrySet()) {
            if (entry.getValue().hasTrait(software.amazon.smithy.model.traits.HttpResponseCodeTrait.class)) {
                String name = entry.getKey();
                String field = CppNames.fieldName(name);
                writer.write("$L = static_cast<int>(result.GetResponseCode());", field);
                writer.write("$LHasBeenSet = true;", field);
            }
        }
    }

    /**
     * Emits the header-bound result member deserialization plus the top-level {@code x-amzn-requestid},
     * matching C2J's result source: scalars / enums / timestamps parse from the header text, list headers
     * only mark has-been-set (C2J parity), and an {@code @httpPrefixHeaders} map collects every header
     * carrying the prefix. Called from inside the result {@code operator=}, after the body and before the
     * status-code members. Emits nothing when the result has neither.
     */
    default void writeResultHeaderMembers(CppWriter writer, StructureShape shape, Model model) {
        writeResultHeaderMembers(writer, shape, model, true);
    }

    /**
     * {@link #writeResultHeaderMembers(CppWriter, StructureShape, Model)}; with {@code includeMembers} false
     * only the top-level request id is read (the HTTP-binding protocol deserializes the bound members).
     */
    default void writeResultHeaderMembers(CppWriter writer, StructureShape shape, Model model, boolean includeMembers) {
        boolean requestId = resultHasTopLevelRequestId() && shape.getAllMembers().keySet().stream()
            .noneMatch(name -> CppNames.capitalize(name).equals("RequestId"));
        boolean hasHeaders = includeMembers && shape.getAllMembers().values().stream().anyMatch(m ->
            m.hasTrait(software.amazon.smithy.model.traits.HttpHeaderTrait.class)
                || m.hasTrait(software.amazon.smithy.model.traits.HttpPrefixHeadersTrait.class));
        if (!requestId && !hasHeaders) {
            return;
        }
        writer.write("");
        writer.write("const auto& headers = result.GetHeaderValueCollection();");
        for (java.util.Map.Entry<String, MemberShape> entry : includeMembers
                ? shape.getAllMembers().entrySet() : java.util.Collections.<String, MemberShape>emptyMap().entrySet()) {
            String name = entry.getKey();
            MemberShape member = entry.getValue();
            String field = CppNames.fieldName(name);
            java.util.Optional<software.amazon.smithy.model.traits.HttpHeaderTrait> header =
                member.getTrait(software.amazon.smithy.model.traits.HttpHeaderTrait.class);
            if (header.isPresent()) {
                String iter = name + "Iter";
                writer.write("const auto& $L = headers.find(\"$L\");", iter,
                    header.get().getValue().toLowerCase(java.util.Locale.ROOT));
                writer.openBlock("if ($L != headers.end()) {", "}", iter, () -> {
                    String parsed = headerValueExpr(member, model, iter + "->second");
                    if (parsed != null) {
                        writer.write("$L = $L;", field, parsed);
                    }
                    writer.write("$LHasBeenSet = true;", field);
                });
                writer.write("");
                continue;
            }
            java.util.Optional<software.amazon.smithy.model.traits.HttpPrefixHeadersTrait> prefix =
                member.getTrait(software.amazon.smithy.model.traits.HttpPrefixHeadersTrait.class);
            if (prefix.isPresent()) {
                String lowered = prefix.get().getValue().toLowerCase(java.util.Locale.ROOT);
                writer.write("std::size_t prefixSize = sizeof(\"$L\") - 1;  // subtract the NULL terminator out", lowered);
                writer.openBlock("for (const auto& item : headers) {", "}", () -> {
                    writer.write("std::size_t foundPrefix = item.first.find(\"$L\");", lowered);
                    writer.write("");
                    writer.openBlock("if (foundPrefix != std::string::npos) {", "}", () -> {
                        writer.write("$L[item.first.substr(prefixSize)] = item.second;", field);
                        writer.write("$LHasBeenSet = true;", field);
                    });
                });
                writer.write("");
            }
        }
        if (requestId) {
            writer.write("const auto& requestIdIter = headers.find(\"x-amzn-requestid\");");
            writer.openBlock("if (requestIdIter != headers.end()) {", "}", () -> {
                writer.write("m_requestId = requestIdIter->second;");
                writer.write("m_requestIdHasBeenSet = true;");
            });
            writer.write("");
        }
    }

    /**
     * The C++ expression parsing a header's text ({@code text}, an {@code Aws::String}) into the member's
     * type, or {@code null} when C2J only marks the member set (list headers / blobs).
     */
    private static String headerValueExpr(MemberShape member, Model model, String text) {
        software.amazon.smithy.model.shapes.Shape target = model.expectShape(member.getTarget());
        if (com.amazonaws.util.awsclientsmithygenerator.generators.model.CppTypeMapper.isEnum(target)) {
            String enumType = com.amazonaws.util.awsclientsmithygenerator.generators.model.CppTypeMapper.cppShapeName(target);
            return enumType + "Mapper::Get" + enumType + "ForName(" + text + ")";
        }
        switch (target.getType()) {
            case STRING:
                return text;
            case BYTE:
            case SHORT:
            case INTEGER:
            case INT_ENUM:
                return "Aws::Utils::StringUtils::ConvertToInt32(" + text + ".c_str())";
            case LONG:
                return "Aws::Utils::StringUtils::ConvertToInt64(" + text + ".c_str())";
            case FLOAT:
            case DOUBLE:
                return "Aws::Utils::StringUtils::ConvertToDouble(" + text + ".c_str())";
            case BOOLEAN:
                return "Aws::Utils::StringUtils::ConvertToBool(" + text + ".c_str())";
            case TIMESTAMP: {
                String format = member.getMemberTrait(model, software.amazon.smithy.model.traits.TimestampFormatTrait.class)
                    .map(software.amazon.smithy.model.traits.TimestampFormatTrait::getValue)
                    .orElse(software.amazon.smithy.model.traits.TimestampFormatTrait.HTTP_DATE);
                if (software.amazon.smithy.model.traits.TimestampFormatTrait.EPOCH_SECONDS.equals(format)) {
                    return "Aws::Utils::DateTime(Aws::Utils::StringUtils::ConvertToDouble(" + text + ".c_str()))";
                }
                String dateFormat = software.amazon.smithy.model.traits.TimestampFormatTrait.DATE_TIME.equals(format)
                    ? "ISO_8601" : "RFC822";
                return "Aws::Utils::DateTime(" + text + ".c_str(), Aws::Utils::DateFormat::" + dateFormat + ")";
            }
            default:
                return null;
        }
    }

    // ------------------------------------------------------------------
    // Request (operation input) contract
    // ------------------------------------------------------------------

    /**
     * Emits the request-specific serialization method <em>declarations</em> for an
     * operation-input class, matching the legacy C2J contract for this protocol family:
     * <ul>
     *   <li>JSON / REST-JSON: {@code SerializePayload()} plus {@code GetRequestSpecificHeaders()}</li>
     *   <li>REST-XML: {@code SerializePayload()} only</li>
     *   <li>Query / EC2: {@code SerializePayload()} plus {@code DumpBodyToUrl(Aws::Http::URI&)}</li>
     * </ul>
     * The caller has already emitted {@code GetServiceRequestName} and any event-stream
     * accessors; this fills in the wire-format contract.
     */
    void writeRequestMethodDecls(CppWriter writer, String exportMacro,
                                 StructureShape shape, OperationShape operation, Model model);

    /**
     * Emits the request-specific serialization method <em>bodies</em> matching
     * {@link #writeRequestMethodDecls}. Payload bodies are currently empty stubs pending
     * schema-based serde; {@code DumpBodyToUrl} / {@code GetRequestSpecificHeaders} carry
     * their fixed C2J implementations.
     */
    void writeRequestMethodImpls(CppWriter writer, String className,
                                 StructureShape shape, OperationShape operation,
                                 ServiceShape service, Model model);

    /** True when this protocol always attaches an {@code X-Amz-Target} header (AWS JSON-RPC). */
    default boolean hasTargetHeader() {
        return false;
    }

    /**
     * Whether this protocol honors HTTP binding traits ({@code @httpHeader} /
     * {@code @httpPrefixHeaders} / {@code @httpQuery} / {@code @httpQueryParams}) by serializing
     * those members onto the wire.
     *
     * <p>REST protocols return {@code true}. RPC protocols (awsJson, rpcv2Cbor) route these members
     * into the body and return {@code false}: they still emit fixed protocol headers but no member
     * header/query serialization and no {@code AddQueryStringParameters}. C2J parity.
     */
    default boolean serializesHttpBindingMembers() {
        return true;
    }

    /**
     * Whether {@code integer} members widen to {@code int64_t} in this protocol's sub-object and
     * result headers. C2J does this only for CBOR; request headers never widen.
     */
    default boolean widensIntegers() {
        return false;
    }

    /**
     * Whether result classes expose a top-level {@code GetRequestId()} / {@code m_requestId}
     * accessor. C2J emits it for every protocol except Query/EC2 (which carry the request id inside
     * the injected {@code ResponseMetadata}); Query/EC2 override to {@code false}.
     */
    default boolean resultHasTopLevelRequestId() {
        return true;
    }

    default void writeGetRequestSpecificHeadersDecl(CppWriter writer, String exportMacro) {
        writer.write("$L Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;", exportMacro);
    }

    default void writeAddQueryStringParametersDecl(CppWriter writer, String exportMacro) {
        writer.write("$L void AddQueryStringParameters(Aws::Http::URI& uri) const override;", exportMacro);
    }

    default void writeGetRequestSpecificHeadersImpl(CppWriter writer, String className,
                                                    StructureShape shape, OperationShape operation,
                                                    ServiceShape service, Model model) {
        writeGetRequestSpecificHeadersImpl(writer, className, shape, operation, service, model, true);
    }

    /**
     * {@link #writeGetRequestSpecificHeadersImpl(CppWriter, String, StructureShape, OperationShape, ServiceShape, Model)};
     * with {@code includeMembers} false only the constant headers are emitted (the HTTP-binding protocol
     * serializes the header-bound members).
     */
    default void writeGetRequestSpecificHeadersImpl(CppWriter writer, String className,
                                                    StructureShape shape, OperationShape operation,
                                                    ServiceShape service, Model model, boolean includeMembers) {
        writer.openBlock("Aws::Http::HeaderValueCollection $L::GetRequestSpecificHeaders() const {", "}",
            className, () -> {
            writer.write("Aws::Http::HeaderValueCollection headers;");
            if (hasTargetHeader()) {
                writer.write("headers.insert(Aws::Http::HeaderValuePair(\"X-Amz-Target\", \"$L.$L\"));",
                    service.getId().getName(), operation.getId().getName());
            }
            // Per-service constant request headers (C2J metadata.additionalHeaders, e.g. Glacier's
            // x-amz-glacier-version). Streaming requests bypass <Prefix>Request::GetHeaders, so
            // these are emitted here (after X-Amz-Target, before member-driven headers). Trait-gated.
            shape.getTrait(AdditionalRequestHeadersTrait.class).ifPresent(trait ->
                trait.getHeaders().forEach((name, value) ->
                    writer.write("headers.insert(Aws::Http::HeaderValuePair(\"$L\", \"$L\"));", name, value)));
            // C2J declares the stringstream once after `headers` whenever the request has >=1
            // header member. RPC protocols route HTTP-binding members to the body, so they emit
            // neither the stringstream nor member serialization.
            if (includeMembers && serializesHttpBindingMembers() && RequestBindings.hasHeaderMembers(shape, model)) {
                writer.write("Aws::StringStream ss;");
            }
            if (includeMembers && serializesHttpBindingMembers()) {
                RequestHeaderSerializer.render(writer, shape, model);
            }
            writer.write("return headers;");
        });
    }

    /**
     * The {@code AddQueryStringParameters} body for a request whose query members the HTTP-binding
     * protocol serializes: the declaration stays (public API parity) but adds nothing.
     */
    default void writeEmptyAddQueryStringParametersImpl(CppWriter writer, String className) {
        writer.write("void $L::AddQueryStringParameters(Aws::Http::URI&) const {}", className);
    }

    /**
     * True when the request's HTTP bindings (path, query, headers, payload) are placed by the runtime
     * {@code HttpBindingProtocol} from the schema: a REST protocol, an {@code @http} operation with a
     * regular (non-streaming, non-event-stream) body, and every member schema-serde-capable.
     */
    default boolean bindsRequestViaSchemaSerde(StructureShape shape, OperationShape operation, Model model) {
        return (protocol() == Protocol.REST_JSON || protocol() == Protocol.REST_XML)
            && operation.hasTrait(software.amazon.smithy.model.traits.HttpTrait.class)
            && RequestBindings.emitsSerializePayload(operation, model)
            && RequestBindings.allMembersSchemaSerializable(shape, model);
    }

    /** True when every result member (headers, status, payload, body) is deserialized by the runtime {@code HttpBindingProtocol}. */
    default boolean bindsResultViaSchemaSerde(StructureShape shape, Model model) {
        return (protocol() == Protocol.REST_JSON || protocol() == Protocol.REST_XML)
            && RequestBindings.resultAllMembersSchemaDeserializable(shape, model);
    }

    /** The operation's {@code @http} URI pattern (e.g. {@code /items/{id}?x=y}). */
    static String uriPattern(OperationShape operation) {
        return operation.getTrait(software.amazon.smithy.model.traits.HttpTrait.class)
            .map(t -> t.getUri().toString()).orElse("");
    }

    /** The operation's {@code @endpoint} host prefix, or empty. */
    static String hostPrefix(OperationShape operation) {
        return operation.getTrait(software.amazon.smithy.model.traits.EndpointTrait.class)
            .map(t -> t.getHostPrefix().toString()).orElse("");
    }

    default void writeAddQueryStringParametersImpl(CppWriter writer, String className,
                                                   StructureShape shape, Model model) {
        writer.openBlock("void $L::AddQueryStringParameters(Aws::Http::URI& uri) const {", "}",
            className, () -> {
            // C2J declares the stringstream unconditionally in AddQueryStringParameters; every query
            // case routes its value through it.
            writer.write("Aws::StringStream ss;");
            RequestQuerySerializer.render(writer, shape, model);
        });
    }

    // ------------------------------------------------------------------
    // Protocol-agnostic today; kept here so callers have one place to look.
    // ------------------------------------------------------------------

    /**
     * Emits the extra {@code <op>InitialResponse} constructor declaration that sits before the
     * body serde method, beyond the body serde ctor already emitted by
     * {@link #writeSerdeMethodDecls}. JSON/CBOR initial responses arrive as an event message with
     * headers, so they add a {@code (const Http::HeaderValueCollection&)} ctor; REST-XML builds its
     * initial response from the XML body root via its {@code XmlNode} serde ctor and adds nothing.
     *
     * <p>Default: no extra ctor (REST-XML / query-XML).
     */
    default void writeInitialResponseCtorDecl(CppWriter writer, String exportMacro, String className) {
    }

    /**
     * Emits the body for the extra ctor declared by {@link #writeInitialResponseCtorDecl}.
     *
     * <p>Default: nothing (protocols with no extra ctor).
     */
    default void writeInitialResponseCtorImpl(CppWriter writer, String className) {
    }

    /**
     * Emits the statement(s) that build the {@code event} local in the event-stream handler's
     * {@code INITIAL_RESPONSE} case. JSON/CBOR build it from the event message headers in a single
     * statement; REST-XML parses the event payload as an XML document first (declaring the
     * {@code xmlDoc} local and guarding {@code WasParseSuccessful} with a WARN + {@code break}),
     * then builds the event from the XML root element.
     *
     * @param handlerClassTag the handler's log-tag identifier (e.g.
     *        {@code SELECTOBJECTCONTENT_HANDLER_CLASS_TAG}), used by protocols that log during
     *        construction. Protocols that build purely from headers ignore it.
     *
     * <p>Default: throws — a protocol with event streams must define how its initial response is
     * constructed. (Query-XML has no event streams, so this is never reached.)
     */
    default void writeInitialResponseHandlerConstruction(CppWriter writer, String className,
                                                         String handlerClassTag) {
        throw new UnsupportedOperationException(
            "Protocol " + protocol() + " does not define event-stream initial-response construction");
    }

    /**
     * Emits a placeholder for an event-stream event case body: a TODO marker plus a
     * compilable callback invocation with a default-constructed event.
     */
    default void writeEventPayloadDecode(CppWriter writer, String eventShapeName,
                                         String callbackMember) {
        writer.write("// TODO: protocol-specific event payload deserialization");
        writer.write("$L($L{});", callbackMember, eventShapeName);
    }

    /**
     * Emits a placeholder in place of the protocol-specific error-payload parse. The
     * header-derived error code/message still flow to MarshallError at the call site.
     */
    default void writeErrorPayloadParse(CppWriter writer) {
        writer.write("// TODO: protocol-specific error payload deserialization");
    }

    /**
     * Emits the {@code :content-type} header and {@code WriteEventPayload(...)} call for an
     * outgoing event whose payload is a structure or list — the only protocol-specific arm of
     * event-stream encoding (blob and string payloads write the same way for every protocol).
     * Default is JSON ({@code application/json} + {@code Jsonize().View().WriteCompact()});
     * CBOR overrides. {@code msgVar} is the {@code Aws::Utils::Event::Message} local and
     * {@code valueExpr} is the C++ expression that yields the event value to serialize.
     */
    default void writeStructureEventPayload(CppWriter writer, String msgVar, String valueExpr) {
        writer.write("$L.InsertEventHeader(\":content-type\", Aws::String(\"application/json\"));", msgVar);
        writer.write("$L.WriteEventPayload($L.Jsonize().View().WriteCompact());", msgVar, valueExpr);
    }
}
