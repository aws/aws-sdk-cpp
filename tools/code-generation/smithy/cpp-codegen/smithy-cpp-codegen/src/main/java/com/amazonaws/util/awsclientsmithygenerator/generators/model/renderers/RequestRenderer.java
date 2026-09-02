/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.renderers;

import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriter;
import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriterDelegator;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.CppNames;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.CppTypeMapper;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.MemberRenderer;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.protocol.FileKind;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.RenderContext;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.ShapeClassifier;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.ShapeClassifier.RequestInfo;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.ShapeRenderer;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms.ChunkedEncodingTrait;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms.OverrideStreamingTrait;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms.SupportsPresigningTrait;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.renderers.endpointcontext.Emit;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.renderers.endpointcontext.SmithyEndpointsJmesPathVisitor;
import software.amazon.smithy.jmespath.JmespathExpression;
import software.amazon.smithy.model.node.BooleanNode;
import software.amazon.smithy.model.node.Node;
import software.amazon.smithy.model.node.NodeVisitor;
import software.amazon.smithy.model.node.StringNode;
import software.amazon.smithy.aws.traits.HttpChecksumTrait;
import software.amazon.smithy.aws.traits.auth.UnsignedPayloadTrait;
import software.amazon.smithy.model.shapes.MemberShape;
import software.amazon.smithy.model.shapes.OperationShape;
import software.amazon.smithy.model.shapes.StructureShape;
import software.amazon.smithy.model.traits.DocumentationTrait;
import software.amazon.smithy.model.traits.HttpChecksumRequiredTrait;
import software.amazon.smithy.model.traits.RequestCompressionTrait;
import software.amazon.smithy.rulesengine.traits.ContextParamTrait;
import software.amazon.smithy.rulesengine.traits.OperationContextParamDefinition;
import software.amazon.smithy.rulesengine.traits.OperationContextParamsTrait;
import software.amazon.smithy.rulesengine.traits.StaticContextParamsTrait;

import java.util.ArrayList;
import java.util.HashSet;
import java.util.List;
import java.util.Map;
import java.util.Optional;
import java.util.Set;
import java.util.TreeSet;

/**
 * Renders C++ headers and sources for request (operation input) shapes.
 */
public final class RequestRenderer implements ShapeRenderer {

    private final List<RequestInfo> requests;
    private final RenderContext ctx;

    public RequestRenderer(List<RequestInfo> requests, RenderContext ctx) {
        this.requests = requests;
        this.ctx = ctx;
    }

    @Override
    public void render(CppWriterDelegator writerDelegator) {
        for (RequestInfo reqInfo : requests) {
            renderHeader(writerDelegator, reqInfo.shape(), reqInfo.operation());
            renderSource(writerDelegator, reqInfo.shape(), reqInfo.operation());
        }
    }

    private void renderHeader(CppWriterDelegator writerDelegator,
                              StructureShape rawShape, OperationShape operation) {
        String className = operation.getId().getName() + "Request";
        // A request with a raw streaming @httpPayload member derives from Streaming<Prefix>Request,
        // whose base (AmazonStreamingWebServiceRequest) supplies GetBody/SetBody and
        // GetContentType/SetContentType, and emits no SerializePayload. Matching C2J: contentType
        // is stripped from the model entirely (affects includes AND rendering), while the payload
        // member stays for include computation but is skipped in accessor/private rendering.
        boolean rawStreamingPayload = ShapeClassifier.isRawStreamingPayloadRequest(operation, ctx.model());
        // An event-stream (input) member targets a @streaming union: C2J renders it as a
        // std::shared_ptr<Union> with a collision-renamed getter and an inline empty
        // SerializePayload + GetBody() override, so it is excluded from the generic member path.
        Optional<String> eventStreamMember = ShapeClassifier.eventStreamMemberName(rawShape, ctx.model());
        StructureShape includeShape = rawStreamingPayload
            ? shapeExcluding(rawShape, Set.of("contentType", "ContentType")) : rawShape;
        StructureShape shape = renderedShape(rawShape, operation);
        String fileName = "include/aws/" + ctx.smithyServiceName() + "/model/" + className + ".h";
        writerDelegator.useFileWriter(fileName, writer -> {
            writer.write("#pragma once");

            Set<String> includes = new TreeSet<>();
            includes.add("<aws/" + ctx.smithyServiceName() + "/" + ctx.namespace() + "_EXPORTS.h>");
            includes.add("<aws/" + ctx.smithyServiceName() + "/" + ctx.namespace() + "Request.h>");
            // NOTE: request headers do NOT include <aws/core/http/URI.h> even when they
            // declare URI-taking methods (DumpBodyToUrl / AddQueryStringParameters). The
            // base AmazonWebServiceRequest.h forward-declares Aws::Http::URI, which is
            // sufficient for a reference parameter, and C2J relies on that forward decl.
            List<String> memberIncludes = CppTypeMapper.getIncludesForShape(includeShape, ctx.model(), ctx.smithyServiceName());
            includes.addAll(memberIncludes);
            IncludeSets.emitAngleIncludes(writer, includes);

            boolean allPrimitive = shape.getAllMembers().values().stream()
                .map(m -> ctx.model().expectShape(m.getTarget()))
                .allMatch(CppTypeMapper::isPrimitive);
            if (eventStreamMember.isPresent()) {
                // The event-stream member is stored as std::shared_ptr<Union>.
                writer.write("");
                writer.write("#include <memory>");
                writer.write("#include <utility>");
            } else if (!allPrimitive) {
                writer.write("");
                writer.write("#include <utility>");
            }

            boolean streamingResponse = ShapeClassifier.isEventStreamResponseOperation(operation, ctx.model());
            boolean streamingRequest = ShapeClassifier.isEventStreamRequestOperation(operation, ctx.model());
            if (streamingResponse) {
                writer.write("#include <aws/core/utils/event/EventStreamDecoder.h>");
                writer.write("#include <aws/$1L/model/$2LHandler.h>", ctx.smithyServiceName(), operation.getId().getName());
            }
            writer.write("");

            ModelFile.modelNamespace(writer, ctx.namespace(), () -> {
            writer.write("");

            MemberRenderer.renderClassDocComment(writer, shape, ctx.smithyServiceName(), ctx.service().getVersion());

            // Raw-streaming-payload requests derive from Streaming<Prefix>Request (a typedef for
            // AmazonStreamingWebServiceRequest declared in <Prefix>Request.h), matching C2J.
            String baseClass = (rawStreamingPayload ? "Streaming" + ctx.namespace() : ctx.namespace()) + "Request";
            writer.openBlock("class $L : public $L {", "};", className, baseClass, () -> {
                writer.write("public:");
                writer.write("$L $L() = default;", ctx.exportMacro(), className);
                writer.write("");

                writer.write("// Service request name is the Operation name which will send this request out,");
                writer.write("// each operation should has unique request name, so that we can get operation's name from this request.");
                writer.write("// Note: this is not true for response, multiple operations may have the same response name,");
                writer.write("// so we can not get operation's name from response.");
                writer.write("inline virtual const char* GetServiceRequestName() const override { return \"$L\"; }",
                    operation.getId().getName());
                writer.write("");
                if (streamingRequest) {
                    writer.write("inline virtual bool IsEventStreamRequest() const override { return true; }");
                }
                if (streamingResponse) {
                    writer.write("inline virtual bool HasEventStreamResponse() const override { return true; }");
                }
                if (eventStreamMember.isPresent()) {
                    // The request body is sent as an encoded event stream via GetBody(), so
                    // SerializePayload is an inline no-op (matches C2J RequestHeader.vm).
                    writer.write("// SerializePayload will not be invoked.");
                    writer.write("// This request is sent by encoding its data in event-streams which is sent as IOStream via GetBody()");
                    writer.write("$L Aws::String SerializePayload() const override { return {}; }", ctx.exportMacro());
                    writer.write("$L std::shared_ptr<Aws::IOStream> GetBody() const override;", ctx.exportMacro());
                }
                ctx.protocolTraits().writeRequestMethodDecls(writer, ctx.exportMacro(), shape, operation, ctx.model());
                // DumpBodyToUrl is emitted protocol-agnostically (C2J RequestHeader.vm gates it only on
                // $shape.supportsPresigning). It is a protected virtual in AmazonWebServiceRequest, so the
                // override is bracketed under protected: and the section restored to public: afterwards.
                if (shape.hasTrait(SupportsPresigningTrait.class)) {
                    writer.write("");
                    writer.dedent();
                    writer.write("protected:");
                    writer.indent();
                    writer.write("$L void DumpBodyToUrl(Aws::Http::URI& uri) const override;", ctx.exportMacro());
                    writer.dedent();
                    writer.write("");
                    writer.write("public:");
                    writer.indent();
                }
                // Request-feature methods driven by operation traits, in C2J RequestHeader.vm order:
                // @httpChecksum, @httpChecksumRequired (legacy Content-MD5), then @requestCompression.
                renderChecksumDecls(writer, shape, operation);
                renderContentMd5Decl(writer, operation);
                renderSignBodyDecl(writer, shape, operation);

                // Chunked-encoding requests emit IsChunked() -> true right after SignBody and before
                // IsStreaming (C2J RequestHeader.vm order); the marker is stamped by
                // ChunkedEncodingTransform.
                if (shape.hasTrait(ChunkedEncodingTrait.class)) {
                    writer.write("$L bool IsChunked() const override { return true; }", ctx.exportMacro());
                }

                renderRequestCompressionDecl(writer, operation);

                // S3 flips a couple of streaming-base requests back to non-streaming (C2J
                // isOverrideStreaming); the marker is stamped by S3Transforms.
                if (shape.hasTrait(OverrideStreamingTrait.class)) {
                    writer.write("$L bool IsStreaming() const override { return false; }", ctx.exportMacro());
                }

                if (streamingResponse) {
                    String handlerType = operation.getId().getName() + "Handler";
                    writer.write("");
                    writer.write("/**");
                    writer.write(" * Underlying Event Stream Decoder.");
                    writer.write(" */");
                    writer.write("inline Aws::Utils::Event::EventStreamDecoder& GetEventStreamDecoder() { return m_decoder; }");
                    writer.write("");
                    writer.write("/**");
                    writer.write(" * Underlying Event Stream Handler which is used to define callback functions.");
                    writer.write(" */");
                    writer.write("inline $1L& GetEventStreamHandler() { return m_handler; }", handlerType);
                    writer.write("");
                    writer.write("/**");
                    writer.write(" * Underlying Event Stream Handler which is used to define callback functions.");
                    writer.write(" */");
                    writer.openBlock("inline void SetEventStreamHandler(const $1L& value) {", "}", handlerType, () -> {
                        writer.write("m_handler = value;");
                        writer.write("m_decoder.ResetEventStreamHandler(&m_handler);");
                    });
                    writer.write("");
                    writer.write("/**");
                    writer.write(" * Underlying Event Stream Handler which is used to define callback functions.");
                    writer.write(" */");
                    writer.openBlock("inline $1LRequest& WithEventStreamHandler(const $2L& value) {", "}",
                        operation.getId().getName(), handlerType, () -> {
                        writer.write("SetEventStreamHandler(value);");
                        writer.write("return *this;");
                    });
                }

                if (hasEndpointContextParams(operation, shape)) {
                    writer.write("");
                    writer.write("/**");
                    writer.write(" * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.");
                    writer.write(" */");
                    writer.write("$L EndpointParameters GetEndpointContextParams() const override;", ctx.exportMacro());
                    if (operation.hasTrait(OperationContextParamsTrait.class)) {
                        writer.write("$L Aws::Vector<Aws::String> GetOperationContextParams() const;", ctx.exportMacro());
                    }
                }

                writer.write("");
                MemberRenderer members = MemberRenderer.forStructure(ctx.model(), shape, className);
                members.renderPublicAccessors(writer);
                eventStreamMember.ifPresent(m ->
                    renderEventStreamMemberAccessor(writer, className, rawShape, m));

                boolean hasAnyMember = !shape.getAllMembers().isEmpty() || eventStreamMember.isPresent();
                if (hasAnyMember) {
                    writer.dedent();
                    writer.write("private:");
                    writer.indent();
                    if (streamingResponse) {
                        // Mainline places the event-stream member, then the handler/decoder, after
                        // the data members and before the HasBeenSet flags.
                        members.renderDataMembers(writer);
                        eventStreamMember.ifPresent(m -> writer.write("std::shared_ptr<$1L> m_$2L;",
                            eventStreamUnionType(rawShape, m), CppNames.decapitalize(m)));
                        String handlerType = operation.getId().getName() + "Handler";
                        writer.write("$1L m_handler;", handlerType);
                        writer.write("Aws::Utils::Event::EventStreamDecoder m_decoder{Utils::Event::EventStreamDecoder(&m_handler)};");
                        writer.write("");
                        members.renderHasBeenSetFlags(writer);
                        eventStreamMember.ifPresent(m ->
                            writer.write("bool m_$1LHasBeenSet = false;", CppNames.decapitalize(m)));
                    } else {
                        members.renderPrivateSection(writer);
                    }
                }
            });
            writer.write("");
            });
        });
    }

    private void renderSource(CppWriterDelegator writerDelegator,
                              StructureShape rawShape, OperationShape operation) {
        String className = operation.getId().getName() + "Request";
        Optional<String> eventStreamMember = ShapeClassifier.eventStreamMemberName(rawShape, ctx.model());
        // Render request-method impls from the same member-stripped shape as the header (see
        // renderedShape): the declaration and definition gate GetRequestSpecificHeaders /
        // AddQueryStringParameters on this shape, so they must agree or the source emits an
        // out-of-line definition of a method the class never declares.
        StructureShape shape = renderedShape(rawShape, operation);
        String fileName = "source/model/" + className + ".cpp";
        writerDelegator.useFileWriter(fileName, writer -> {

            // A request with stream members (a raw @httpPayload blob/string body, or an event-stream
            // input) is sent via the request body stream, not a serialized JSON payload. C2J routes
            // it through StreamRequestSource.vm: AmazonWebServiceResult.h + the Stream/Utils/Aws
            // usings (not the JSON serde header/usings). The event-stream sub-case also defines
            // GetBody() returning its encoder member.
            boolean streaming = ShapeClassifier.isRawStreamingPayloadRequest(operation, ctx.model())
                || eventStreamMember.isPresent();
            if (streaming) {
                List<String> includes = new ArrayList<>(
                    IncludeSets.requestSourceBase(ctx.smithyServiceName(), className));
                includes.add("aws/core/AmazonWebServiceResult.h");
                includes.add("utility");
                // A raw-streaming-payload request sends its body via the streaming base class (no
                // protocol serde), but its header/query members still serialize, so the source
                // needs HashingUtils.h (blob Base64) and AWSStringStream.h unconditionally. It must
                // NOT pull the protocol serde header (e.g. JsonSerializer.h), matching C2J.
                includes.add("aws/core/utils/HashingUtils.h");
                includes.add("aws/core/utils/memory/stl/AWSStringStream.h");
                IncludeSets.emit(writer, includes);
                writer.write("");
                writer.write("using namespace Aws::$L::Model;", ctx.namespace());
                writer.write("using namespace Aws::Utils::Stream;");
                writer.write("using namespace Aws::Utils;");
                writer.write("using namespace Aws;");
                writer.write("");
                eventStreamMember.ifPresent(m -> {
                    writer.write("std::shared_ptr<Aws::IOStream> $L::GetBody() const { return m_$L; }",
                        className, CppNames.decapitalize(m));
                    writer.write("");
                });
                // Header/query method bodies (SerializePayload is gated off for streaming requests).
                ctx.protocolTraits().writeRequestMethodImpls(writer, className, shape, operation, ctx.service(), ctx.model());
                renderChecksumImpls(writer, className, shape, operation);
                renderRequestCompressionImpl(writer, className, operation, true);
                if (hasEndpointContextParams(operation, shape)) {
                    writer.write("");
                    renderEndpointContextParams(writer, className, operation, shape);
                    if (operation.hasTrait(OperationContextParamsTrait.class)) {
                        renderOperationContextParamsAccessor(writer, className, operation, shape);
                    }
                }
                writer.write("");
                return;
            }

            IncludeSets.emitSourceIncludes(writer,
                IncludeSets.requestSourceBase(ctx.smithyServiceName(), className),
                ctx.protocolTraits(), FileKind.REQUEST_SOURCE);
            writer.write("");

            writer.write("using namespace Aws::$L::Model;", ctx.namespace());
            IncludeSets.emitUsings(writer, ctx.protocolTraits().serdeUsings(FileKind.REQUEST_SOURCE));
            writer.write("");

            ctx.protocolTraits().writeRequestMethodImpls(writer, className, shape, operation, ctx.service(), ctx.model());
            renderChecksumImpls(writer, className, shape, operation);
            renderRequestCompressionImpl(writer, className, operation, false);

            if (hasEndpointContextParams(operation, shape)) {
                writer.write("");
                renderEndpointContextParams(writer, className, operation, shape);
                if (operation.hasTrait(OperationContextParamsTrait.class)) {
                    renderOperationContextParamsAccessor(writer, className, operation, shape);
                }
            }
            writer.write("");
        });
    }

    /**
     * The shape whose members drive request-method rendering. Raw-streaming-payload requests strip
     * {@code contentType} (supplied by the streaming base's GetContentType/SetContentType) and the
     * {@code @httpPayload} member (sent via the body stream); an event-stream input member is
     * rendered separately, not through the generic member path. Both the header (declarations) and
     * the source (definitions) MUST render from this same shape so their emitted method sets stay
     * in sync.
     */
    private StructureShape renderedShape(StructureShape rawShape, OperationShape operation) {
        Set<String> excluded = new HashSet<>();
        if (ShapeClassifier.isRawStreamingPayloadRequest(operation, ctx.model())) {
            // isRawStreamingPayloadRequest guarantees a payload member; absence is a codegen bug.
            String payloadMember = ShapeClassifier.rawStreamingPayloadMemberName(rawShape, ctx.model())
                .orElseThrow(() -> new IllegalStateException(
                    "Raw streaming payload request without a payload member: " + rawShape.getId()));
            excluded.add("contentType");
            excluded.add("ContentType");
            excluded.add(payloadMember);
        }
        ShapeClassifier.eventStreamMemberName(rawShape, ctx.model()).ifPresent(excluded::add);
        return excluded.isEmpty() ? rawShape : shapeExcluding(rawShape, excluded);
    }

    /** Builds a copy of {@code shape} with the named members removed (null names are ignored). */
    private StructureShape shapeExcluding(StructureShape shape, Set<String> excluded) {
        StructureShape.Builder builder = StructureShape.builder().id(shape.getId());
        shape.getAllTraits().values().forEach(builder::addTrait);
        for (MemberShape member : shape.getAllMembers().values()) {
            if (excluded.contains(member.getMemberName())) {
                continue;
            }
            builder.addMember(member.getMemberName(), member.getTarget(),
                b -> member.getAllTraits().values().forEach(b::addTrait));
        }
        return builder.build();
    }

    /** The C++ type name of the {@code @streaming} union targeted by the event-stream member. */
    private String eventStreamUnionType(StructureShape shape, String memberName) {
        MemberShape member = shape.getAllMembers().get(memberName);
        return member.getTarget().getName();
    }

    /**
     * Renders the accessor block for an event-stream (input) member: a {@code std::shared_ptr<Union>}
     * getter/setter/wither. The getter is renamed to {@code GetMember<Name>} because {@code GetBody}
     * is reserved by the streaming request base (matches C2J's collision handling).
     */
    private void renderEventStreamMemberAccessor(CppWriter writer, String className,
                                                 StructureShape shape, String memberName) {
        String unionType = eventStreamUnionType(shape, memberName);
        String cap = CppNames.capitalize(memberName);
        String field = CppNames.fieldName(memberName);
        String getter = cap.equals("Body") ? "GetMemberBody" : "Get" + cap;
        writer.write("");
        writer.write("///@{");
        MemberShape member = shape.getAllMembers().get(memberName);
        if (member.getTrait(DocumentationTrait.class).isPresent()) {
            MemberRenderer.writeDocComment(writer, MemberRenderer.collapseWhitespace(
                member.getTrait(DocumentationTrait.class).get().getValue()));
        }
        writer.write("$1L std::shared_ptr<$2L> $3L() const { return $4L; }", ctx.exportMacro(), unionType, getter, field);
        writer.openBlock("$1L void Set$2L(const std::shared_ptr<$3L>& value) {", "}", ctx.exportMacro(), cap, unionType, () -> {
            writer.write("$1LHasBeenSet = true;", field);
            writer.write("$1L = value;", field);
        });
        writer.openBlock("$1L $2L& With$3L(const std::shared_ptr<$4L>& value) {", "}",
            ctx.exportMacro(), className, cap, unionType, () -> {
            writer.write("Set$1L(value);", cap);
            writer.write("return *this;");
        });
        writer.write("///@}");
    }

    /**
     * Declares the request methods for an operation carrying {@code @httpChecksum}, gated per
     * sub-field, matching C2J's RequestHeader.vm:89-104:
     * <ul>
     *   <li>{@code requestAlgorithmMember} → {@code GetChecksumAlgorithmName} / {@code ChecksumAlgorithmIsSet}</li>
     *   <li>{@code requestValidationModeMember} → {@code ShouldValidateResponseChecksum}</li>
     *   <li>{@code requestChecksumRequired} → inline {@code RequestChecksumRequired}</li>
     *   <li>{@code responseAlgorithms} → {@code GetResponseChecksumAlgorithmNames}</li>
     * </ul>
     * All override base {@code AmazonWebServiceRequest} virtuals; no extra includes are needed.
     */
    private void renderChecksumDecls(CppWriter writer, StructureShape shape, OperationShape operation) {
        Optional<HttpChecksumTrait> maybeTrait = operation.getTrait(HttpChecksumTrait.class);
        if (maybeTrait.isEmpty()) {
            return;
        }
        HttpChecksumTrait trait = maybeTrait.get();
        if (trait.getRequestAlgorithmMember().isPresent()) {
            writer.write("$L Aws::String GetChecksumAlgorithmName() const override;", ctx.exportMacro());
            writer.write("$L bool ChecksumAlgorithmIsSet() const override;", ctx.exportMacro());
        }
        if (trait.getRequestValidationModeMember().isPresent()) {
            writer.write("$L bool ShouldValidateResponseChecksum() const override;", ctx.exportMacro());
        }
        if (trait.isRequestChecksumRequired()) {
            writer.write("inline bool RequestChecksumRequired() const override { return true; };");
        }
        if (!trait.getResponseAlgorithms().isEmpty()) {
            writer.write("$L Aws::Vector<Aws::String> GetResponseChecksumAlgorithmNames() const override;", ctx.exportMacro());
        }
    }

    /**
     * Defines the {@code @httpChecksum} request methods, matching C2J's ModelClassChecksumMembers.vm.
     * {@code GetChecksumAlgorithmName} defaults to {@code "crc64nvme"} when the algorithm member is
     * unset, else maps the enum via its generated Mapper. The bodies read only the request's own
     * enum members, so they are independent of the (stubbed) payload serde.
     */
    private void renderChecksumImpls(CppWriter writer, String className, StructureShape shape,
                                     OperationShape operation) {
        Optional<HttpChecksumTrait> maybeTrait = operation.getTrait(HttpChecksumTrait.class);
        if (maybeTrait.isEmpty()) {
            return;
        }
        HttpChecksumTrait trait = maybeTrait.get();
        trait.getRequestAlgorithmMember().ifPresent(memberName -> {
            String enumType = checksumMemberEnumType(shape, operation, memberName);
            String field = CppNames.fieldName(memberName);
            writer.openBlock("Aws::String $L::GetChecksumAlgorithmName() const {", "}", className, () -> {
                writer.openBlock("if ($L == $L::NOT_SET) {", "}", field, enumType, () ->
                    writer.write("return \"crc64nvme\";"));
                writer.openBlock("else {", "}", () ->
                    writer.write("return $1LMapper::GetNameFor$1L($2L);", enumType, field));
            });
            writer.write("");
            writer.openBlock("bool $L::ChecksumAlgorithmIsSet() const {", "}", className, () ->
                writer.write("return $L != $L::NOT_SET;", field, enumType));
            writer.write("");
        });
        trait.getRequestValidationModeMember().ifPresent(memberName -> {
            String enumType = checksumMemberEnumType(shape, operation, memberName);
            String field = CppNames.fieldName(memberName);
            writer.openBlock("bool $L::ShouldValidateResponseChecksum() const {", "}", className, () ->
                writer.write("return $L == $L::ENABLED;", field, enumType));
            writer.write("");
        });
        if (!trait.getResponseAlgorithms().isEmpty()) {
            writer.openBlock("Aws::Vector<Aws::String> $L::GetResponseChecksumAlgorithmNames() const {", "}",
                className, () -> {
                writer.write("Aws::Vector<Aws::String> responseChecksumAlgorithmNames;");
                for (String algorithm : trait.getResponseAlgorithms()) {
                    writer.write("responseChecksumAlgorithmNames.push_back(\"$L\");", algorithm);
                }
                writer.write("return responseChecksumAlgorithmNames;");
            });
            writer.write("");
        }
    }

    /**
     * Declares the inline {@code ShouldComputeContentMd5} override for an operation carrying the
     * legacy {@code @httpChecksumRequired} trait ({@code smithy.api#httpChecksumRequired}), which
     * requests a {@code Content-MD5} header. Distinct from the flexible {@code @httpChecksum} trait.
     * C2J derives an internal {@code Shape.computeContentMd5} flag from it; here it reads the trait
     * directly. Matches RequestHeader.vm:105-108 (no {@code .cpp} body).
     */
    private void renderContentMd5Decl(CppWriter writer, OperationShape operation) {
        if (operation.hasTrait(HttpChecksumRequiredTrait.class)) {
            writer.write("");
            writer.write("$L inline bool ShouldComputeContentMd5() const override { return true; }", ctx.exportMacro());
        }
    }

    /**
     * Declares the inline {@code SignBody} override for an operation carrying
     * {@code aws.auth#unsignedPayload} whose request has at least one member. C2J's
     * RequestHeader.vm emits this for a {@code v4-unsigned-body} request
     * ({@code #if(!$shape.signBody && $shape.members.size() > 0)}); the Smithy equivalent is the
     * {@code @unsignedPayload} operation trait. This closes {@code Model::}-namespace parity only:
     * the Smithy runtime does not consume {@code SignBody()} (it hardcodes signing).
     */
    private void renderSignBodyDecl(CppWriter writer, StructureShape shape, OperationShape operation) {
        if (operation.hasTrait(UnsignedPayloadTrait.class) && !shape.getAllMembers().isEmpty()) {
            writer.write("$L bool SignBody() const override { return false; }", ctx.exportMacro());
        }
    }

    /** The C++ enum type name of a checksum algorithm/validation-mode member named by @httpChecksum. */
    private String checksumMemberEnumType(StructureShape shape, OperationShape operation, String memberName) {
        MemberShape member = shape.getAllMembers().get(memberName);
        if (member == null) {
            throw new RuntimeException("@httpChecksum on " + operation.getId()
                + " references member '" + memberName + "' not present on " + shape.getId());
        }
        return CppTypeMapper.cppShapeName(ctx.model().expectShape(member.getTarget()));
    }

    /**
     * Declares {@code GetSelectedCompressionAlgorithm} for an operation carrying
     * {@code @requestCompression}. The method overrides a base {@code AmazonWebServiceRequest}
     * virtual, so no extra include is needed. Only gzip is supported (validated), so the
     * declaration is always guarded by {@code ENABLED_ZLIB_REQUEST_COMPRESSION}. Matches C2J's
     * {@code RequestHeader.vm}.
     */
    private void renderRequestCompressionDecl(CppWriter writer, OperationShape operation) {
        if (!operation.hasTrait(RequestCompressionTrait.class)) {
            return;
        }
        validateGzipEncoding(operation);
        writer.write("");
        writer.write("#ifdef ENABLED_ZLIB_REQUEST_COMPRESSION");
        writer.write("virtual Aws::Client::CompressionAlgorithm GetSelectedCompressionAlgorithm(Aws::Client::RequestCompressionConfig config) const override;");
        writer.write("#endif");
    }

    /**
     * Defines {@code GetSelectedCompressionAlgorithm}. Streaming requests can't size their body up
     * front, so they compress whenever enabled; non-streaming requests skip compression below the
     * configured minimum body size. Matches C2J's ModelClassRequiredCompression[Stream].vm. This
     * body only reads the already-serialized body via the base {@code GetBody()}, so it is
     * independent of the (currently stubbed) payload serde.
     */
    private void renderRequestCompressionImpl(CppWriter writer, String className,
                                              OperationShape operation, boolean streaming) {
        if (!operation.hasTrait(RequestCompressionTrait.class)) {
            return;
        }
        writer.write("#ifdef ENABLED_ZLIB_REQUEST_COMPRESSION");
        writer.openBlock("Aws::Client::CompressionAlgorithm $L::GetSelectedCompressionAlgorithm(Aws::Client::RequestCompressionConfig config) const {", "}",
            className, () -> {
            writer.openBlock("if (config.useRequestCompression == Aws::Client::UseRequestCompression::DISABLE) {", "}", () ->
                writer.write("return Aws::Client::CompressionAlgorithm::NONE;"));
            if (streaming) {
                writer.openBlock("else {", "}", () ->
                    writer.write("return Aws::Client::CompressionAlgorithm::GZIP;"));
            } else {
                writer.write("");
                writer.write("const auto& body = AmazonSerializableWebServiceRequest::GetBody();");
                writer.write("body->seekg(0, body->end);");
                writer.write("size_t bodySize = body->tellg();");
                writer.write("body->seekg(0, body->beg);");
                writer.openBlock("if (bodySize < config.requestMinCompressionSizeBytes) {", "}", () ->
                    writer.write("return Aws::Client::CompressionAlgorithm::NONE;"));
                writer.openBlock("else {", "}", () ->
                    writer.write("return Aws::Client::CompressionAlgorithm::GZIP;"));
            }
        });
        writer.write("#endif");
    }

    /**
     * Enforces the C2J contract that {@code @requestCompression} declares exactly the gzip encoding
     * (the only algorithm the SDK supports). Fails fast on an empty or unsupported encoding list,
     * mirroring the legacy C2J transformer.
     */
    private static void validateGzipEncoding(OperationShape operation) {
        List<String> encodings = operation.expectTrait(RequestCompressionTrait.class).getEncodings();
        if (encodings.isEmpty()) {
            throw new RuntimeException("@requestCompression on " + operation.getId()
                + " must declare at least one encoding.");
        }
        if (encodings.size() != 1 || !"gzip".equals(encodings.get(0))) {
            throw new RuntimeException("@requestCompression only supports the gzip algorithm, but "
                + operation.getId() + " declares: " + encodings);
        }
    }

    private boolean hasEndpointContextParams(OperationShape operation, StructureShape shape) {
        if (operation.hasTrait(StaticContextParamsTrait.class)
            || operation.hasTrait(OperationContextParamsTrait.class)) {
            return true;
        }
        for (MemberShape member : shape.getAllMembers().values()) {
            if (member.hasTrait(ContextParamTrait.class)) {
                return true;
            }
        }
        return false;
    }

    private void renderEndpointContextParams(CppWriter writer, String className,
                                             OperationShape operation, StructureShape shape) {
        writer.openBlock("$L::EndpointParameters $L::GetEndpointContextParams() const {", "}",
            className, className, () -> {
            writer.write("EndpointParameters parameters;");

            if (operation.hasTrait(StaticContextParamsTrait.class)) {
                writer.write("// Static context parameters");
                StaticContextParamsTrait staticParams = operation.expectTrait(StaticContextParamsTrait.class);
                staticParams.getParameters().forEach((name, def) ->
                    appendStaticContextParam(writer, name, def.getValue()));
            }

            boolean hasContextParams = shape.getAllMembers().values().stream()
                .anyMatch(m -> m.hasTrait(ContextParamTrait.class));
            if (hasContextParams) {
                writer.write("// Operation context parameters");
                for (Map.Entry<String, MemberShape> entry : shape.getAllMembers().entrySet()) {
                    MemberShape member = entry.getValue();
                    if (member.hasTrait(ContextParamTrait.class)) {
                        ContextParamTrait contextParam = member.expectTrait(ContextParamTrait.class);
                        String paramName = contextParam.getName();
                        String memberName = entry.getKey();
                        String capitalizedMember = CppNames.capitalize(memberName);
                        writer.openBlock("if ($LHasBeenSet()) {", "}", capitalizedMember, () -> {
                            writer.write("parameters.emplace_back(Aws::String(\"$L\"), this->Get$L(), Aws::Endpoint::EndpointParameter::ParameterOrigin::OPERATION_CONTEXT);",
                                paramName, capitalizedMember);
                        });
                    }
                }
            }

            if (operation.hasTrait(OperationContextParamsTrait.class)) {
                OperationContextParamsTrait opCtx = operation.expectTrait(OperationContextParamsTrait.class);
                Map.Entry<String, OperationContextParamDefinition> firstEntry =
                    opCtx.getParameters().entrySet().iterator().next();
                writer.write("// operation context params go here");
                writer.write(
                    "parameters.emplace_back(Aws::String{\"$L\"}, this->GetOperationContextParams(), "
                  + "Aws::Endpoint::EndpointParameter::ParameterOrigin::OPERATION_CONTEXT);",
                    firstEntry.getKey());
            }

            writer.write("return parameters;");
        });
    }

    private void renderOperationContextParamsAccessor(CppWriter writer, String className,
                                                      OperationShape operation, StructureShape shape) {
        OperationContextParamsTrait opCtx = operation.expectTrait(OperationContextParamsTrait.class);
        Map.Entry<String, OperationContextParamDefinition> firstEntry =
            opCtx.getParameters().entrySet().iterator().next();
        String path = firstEntry.getValue().getPath();

        Emit emit = JmespathExpression.parse(path).accept(
            new SmithyEndpointsJmesPathVisitor(this.ctx.model(), shape, "(*this)"));

        writer.write("// Accessor for dynamic context endpoint params");
        writer.openBlock("Aws::Vector<Aws::String> $L::GetOperationContextParams() const {", "}",
            className, () -> {
            writer.write("Aws::Vector<Aws::String> result;");
            // Visitor output is a single newline-separated string of flat (un-indented) statements;
            // CppWriter applies the block indentation and clang-format normalizes the rest. Each line
            // is passed as a $L argument so any $L or {n} tokens in the output are not reinterpreted.
            String raw = emit.statements();
            if (!raw.isEmpty()) {
                // Trim the single trailing newline the visitor always emits so we don't double-blank.
                String trimmed = raw.endsWith("\n") ? raw.substring(0, raw.length() - 1) : raw;
                for (String line : trimmed.split("\n", -1)) {
                    writer.write("$L", line);
                }
            }
            writer.write("return result;");
        });
    }

    private void appendStaticContextParam(CppWriter writer, String name, Node value) {
        value.accept(new NodeVisitor.Default<Void>() {
            @Override
            protected Void getDefault(Node node) {
                return null;
            }
            @Override
            public Void stringNode(StringNode node) {
                writer.write("parameters.emplace_back(Aws::String(\"$L\"), \"$L\", Aws::Endpoint::EndpointParameter::ParameterOrigin::STATIC_CONTEXT);",
                    name, node.getValue());
                return null;
            }
            @Override
            public Void booleanNode(BooleanNode node) {
                writer.write("parameters.emplace_back(Aws::String(\"$L\"), $L, Aws::Endpoint::EndpointParameter::ParameterOrigin::STATIC_CONTEXT);",
                    name, node.getValue());
                return null;
            }
        });
    }

}
