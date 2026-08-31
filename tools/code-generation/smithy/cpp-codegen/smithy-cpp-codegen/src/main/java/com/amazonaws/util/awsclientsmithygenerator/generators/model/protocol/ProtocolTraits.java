/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.protocol;

import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriter;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.CppNames;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.ProtocolResolver.Protocol;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.shapes.MemberShape;
import software.amazon.smithy.model.shapes.OperationShape;
import software.amazon.smithy.model.shapes.ServiceShape;
import software.amazon.smithy.model.shapes.StructureShape;

import java.util.List;

/**
 * Owns every protocol-specific rendering decision for generated model code.
 *
 * <p>Renderers receive a {@code ProtocolTraits} and call these methods; they never
 * branch on {@link Protocol} themselves. One implementation exists per serde
 * <em>family</em> (JSON-like, REST-XML, query-XML), not per protocol, so the
 * conditional arms that used to be repeated across renderers are now classes.
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

    /** Emits a result class's {@code AmazonWebServiceResult<...>} ctor and {@code operator=} declarations. */
    void writeResultSerdeDecls(CppWriter writer, String exportMacro, String className);

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
     * Whether {@code integer} members widen to {@code int64_t} (rather than {@code int}) in this
     * protocol's sub-object and result headers. C2J does this only for CBOR
     * ({@code CORAL_TYPE_TO_CBOR_CPP_TYPE_MAPPING}: {@code integer -> int64_t}, applied where the
     * template sets {@code $protocol == "smithy-rpc-v2-cbor"}). Request headers use the shared
     * {@code RequestHeader.vm}, which does not widen, so this never affects request members.
     */
    default boolean widensIntegers() {
        return false;
    }

    /**
     * Whether result classes for this protocol expose a top-level {@code GetRequestId()} /
     * {@code m_requestId} accessor. C2J emits it for every protocol <em>except</em> Query/EC2,
     * whose results instead carry the request id inside the injected {@code ResponseMetadata}
     * member. Query/EC2 override this to {@code false}.
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
        writer.openBlock("Aws::Http::HeaderValueCollection $L::GetRequestSpecificHeaders() const {", "}",
            className, () -> {
            writer.write("Aws::Http::HeaderValueCollection headers;");
            if (hasTargetHeader()) {
                writer.write("headers.insert(Aws::Http::HeaderValuePair(\"X-Amz-Target\", \"$L.$L\"));",
                    service.getId().getName(), operation.getId().getName());
            }
            writer.write("return headers;");
        });
    }

    /**
     * Declares the {@code HasEmbeddedError} override C2J emits under
     * {@code #if($shape.hasEmbeddedErrors())} in {@code RequestHeader.vm}. Text matches C2J exactly
     * (unqualified {@code IOStream} / {@code Http::HeaderValueCollection}, resolved via the request
     * header's {@code Aws} usings). Only S3 requests carry {@code EmbeddedErrorsTrait}, so the
     * caller gates emission on that marker.
     */
    default void writeHasEmbeddedErrorDecl(CppWriter writer, String exportMacro) {
        writer.write("$L bool HasEmbeddedError(IOStream &body, "
            + "const Http::HeaderValueCollection &header) const override;", exportMacro);
    }

    /**
     * Emits a stubbed {@code HasEmbeddedError} body. The real XML error-sniff is a serde concern
     * deferred plugin-wide; returning {@code false} with unnamed params keeps the override present
     * (byte-parity for the request header) without tripping {@code -Werror} on unused parameters.
     */
    default void writeHasEmbeddedErrorImpl(CppWriter writer, String className) {
        writer.write("bool $L::HasEmbeddedError(Aws::IOStream&, "
            + "const Aws::Http::HeaderValueCollection&) const { return false; }", className);
    }

    default void writeAddQueryStringParametersImpl(CppWriter writer, String className) {
        writer.openBlock("void $L::AddQueryStringParameters(Aws::Http::URI& uri) const {", "}",
            className, () -> {
            writer.write("AWS_UNREFERENCED_PARAM(uri);");
            writer.write("// TODO: serialize httpQuery/httpQueryParams members");
        });
    }

    // ------------------------------------------------------------------
    // Protocol-agnostic today; kept here so callers have one place to look.
    // ------------------------------------------------------------------

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
