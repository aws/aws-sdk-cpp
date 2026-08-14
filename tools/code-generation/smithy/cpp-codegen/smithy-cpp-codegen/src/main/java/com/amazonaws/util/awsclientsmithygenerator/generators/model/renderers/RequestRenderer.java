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
import software.amazon.smithy.model.node.BooleanNode;
import software.amazon.smithy.model.node.Node;
import software.amazon.smithy.model.node.NodeVisitor;
import software.amazon.smithy.model.node.StringNode;
import software.amazon.smithy.model.shapes.MemberShape;
import software.amazon.smithy.model.shapes.OperationShape;
import software.amazon.smithy.model.shapes.StructureShape;
import software.amazon.smithy.model.traits.DocumentationTrait;
import software.amazon.smithy.model.traits.RequestCompressionTrait;
import software.amazon.smithy.rulesengine.traits.ContextParamTrait;
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
                // Request-feature methods driven by operation traits. Today: @requestCompression.
                // @httpChecksum (aws.protocols) for s3 will render alongside here when s3 moves to
                // the Smithy path (its own transform pipeline supplies the model; this seam stays).
                renderRequestCompressionDecl(writer, operation);

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
                renderRequestCompressionImpl(writer, className, operation, true);
                if (hasEndpointContextParams(operation, shape)) {
                    writer.write("");
                    renderEndpointContextParams(writer, className, operation, shape);
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
            renderRequestCompressionImpl(writer, className, operation, false);

            if (hasEndpointContextParams(operation, shape)) {
                writer.write("");
                renderEndpointContextParams(writer, className, operation, shape);
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
        if (operation.hasTrait(StaticContextParamsTrait.class)) {
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

            writer.write("return parameters;");
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
