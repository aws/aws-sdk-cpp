/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.renderers;

import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriter;
import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriterDelegator;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.CppTypeMapper;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.MemberRenderer;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.protocol.FileKind;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.protocol.ProtocolTraits;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.ShapeClassifier;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.ShapeClassifier.RequestInfo;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.ShapeRenderer;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.shapes.MemberShape;
import software.amazon.smithy.model.shapes.OperationShape;
import software.amazon.smithy.model.shapes.ServiceShape;
import software.amazon.smithy.model.shapes.StructureShape;
import software.amazon.smithy.rulesengine.traits.ContextParamTrait;
import software.amazon.smithy.rulesengine.traits.StaticContextParamsTrait;

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
    private final Model model;
    private final ServiceShape service;
    private final ProtocolTraits protocolTraits;
    private final String namespace;
    private final String exportMacro;
    private final String smithyServiceName;

    public RequestRenderer(List<RequestInfo> requests, Model model, ServiceShape service,
                           ProtocolTraits protocolTraits, String namespace, String exportMacro,
                           String smithyServiceName) {
        this.requests = requests;
        this.model = model;
        this.service = service;
        this.protocolTraits = protocolTraits;
        this.namespace = namespace;
        this.exportMacro = exportMacro;
        this.smithyServiceName = smithyServiceName;
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
        boolean rawStreamingPayload = ShapeClassifier.isRawStreamingPayloadRequest(operation, model);
        // An event-stream (input) member targets a @streaming union: C2J renders it as a
        // std::shared_ptr<Union> with a collision-renamed getter and an inline empty
        // SerializePayload + GetBody() override, so it is excluded from the generic member path.
        Optional<String> eventStreamMember = ShapeClassifier.eventStreamMemberName(rawShape, model);
        StructureShape includeShape = rawStreamingPayload
            ? shapeExcluding(rawShape, Set.of("contentType", "ContentType")) : rawShape;
        Set<String> genericExcluded = new java.util.HashSet<>();
        if (rawStreamingPayload) {
            // isRawStreamingPayloadRequest guarantees a payload member; absence is a codegen bug.
            String payloadMember = ShapeClassifier.rawStreamingPayloadMemberName(rawShape, model)
                .orElseThrow(() -> new IllegalStateException(
                    "Raw streaming payload request without a payload member: " + rawShape.getId()));
            genericExcluded.add("contentType");
            genericExcluded.add("ContentType");
            genericExcluded.add(payloadMember);
        }
        eventStreamMember.ifPresent(genericExcluded::add);
        StructureShape shape = genericExcluded.isEmpty() ? rawShape : shapeExcluding(rawShape, genericExcluded);
        String fileName = "include/aws/" + smithyServiceName + "/model/" + className + ".h";
        writerDelegator.useFileWriter(fileName, writer -> {
            writer.write("#pragma once");

            Set<String> includes = new TreeSet<>();
            includes.add("<aws/" + smithyServiceName + "/" + namespace + "_EXPORTS.h>");
            includes.add("<aws/" + smithyServiceName + "/" + namespace + "Request.h>");
            // NOTE: request headers do NOT include <aws/core/http/URI.h> even when they
            // declare URI-taking methods (DumpBodyToUrl / AddQueryStringParameters). The
            // base AmazonWebServiceRequest.h forward-declares Aws::Http::URI, which is
            // sufficient for a reference parameter, and C2J relies on that forward decl.
            List<String> memberIncludes = CppTypeMapper.getIncludesForShape(includeShape, model, smithyServiceName);
            includes.addAll(memberIncludes);
            for (String include : includes) {
                writer.write("#include $L", include);
            }

            boolean allPrimitive = shape.getAllMembers().values().stream()
                .map(m -> model.expectShape(m.getTarget()))
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

            boolean streamingResponse = ShapeClassifier.isEventStreamResponseOperation(operation, model);
            boolean streamingRequest = ShapeClassifier.isEventStreamRequestOperation(operation, model);
            if (streamingResponse) {
                writer.write("#include <aws/core/utils/event/EventStreamDecoder.h>");
                writer.write("#include <aws/$1L/model/$2LHandler.h>", smithyServiceName, operation.getId().getName());
            }
            writer.write("");

            writer.writeNamespaceOpen("Aws");
            writer.writeNamespaceOpen(namespace);
            writer.writeNamespaceOpen("Model");
            writer.write("");

            MemberRenderer.renderClassDocComment(writer, shape, smithyServiceName, service.getVersion());

            // Raw-streaming-payload requests derive from Streaming<Prefix>Request (a typedef for
            // AmazonStreamingWebServiceRequest declared in <Prefix>Request.h), matching C2J.
            String baseClass = (rawStreamingPayload ? "Streaming" + namespace : namespace) + "Request";
            writer.openBlock("class $L : public $L {", "};", className, baseClass, () -> {
                writer.write("public:");
                writer.write("$L $L() = default;", exportMacro, className);
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
                    writer.write("$L Aws::String SerializePayload() const override { return {}; }", exportMacro);
                    writer.write("$L std::shared_ptr<Aws::IOStream> GetBody() const override;", exportMacro);
                }
                protocolTraits.writeRequestMethodDecls(writer, exportMacro, shape, operation, model);

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
                    writer.write("$L EndpointParameters GetEndpointContextParams() const override;", exportMacro);
                }

                writer.write("");
                MemberRenderer.renderPublicSection(writer, shape, model, exportMacro, className);
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
                        MemberRenderer.renderPrivateDataMembers(writer, shape, model);
                        eventStreamMember.ifPresent(m -> writer.write("std::shared_ptr<$1L> m_$2L;",
                            eventStreamUnionType(rawShape, m), decapitalize(m)));
                        String handlerType = operation.getId().getName() + "Handler";
                        writer.write("$1L m_handler;", handlerType);
                        writer.write("Aws::Utils::Event::EventStreamDecoder m_decoder{Utils::Event::EventStreamDecoder(&m_handler)};");
                        writer.write("");
                        MemberRenderer.renderPrivateHasBeenSetFlags(writer, shape, model);
                        eventStreamMember.ifPresent(m ->
                            writer.write("bool m_$1LHasBeenSet = false;", decapitalize(m)));
                    } else {
                        MemberRenderer.renderPrivateSection(writer, shape, model);
                    }
                }
            });
            writer.write("");

            writer.writeNamespaceClose("Model");
            writer.writeNamespaceClose(namespace);
            writer.writeNamespaceClose("Aws");
        });
    }

    private void renderSource(CppWriterDelegator writerDelegator,
                              StructureShape shape, OperationShape operation) {
        String className = operation.getId().getName() + "Request";
        Optional<String> eventStreamMember = ShapeClassifier.eventStreamMemberName(shape, model);
        String fileName = "source/model/" + className + ".cpp";
        writerDelegator.useFileWriter(fileName, writer -> {

            // A request with stream members (a raw @httpPayload blob/string body, or an event-stream
            // input) is sent via the request body stream, not a serialized JSON payload. C2J routes
            // it through StreamRequestSource.vm: AmazonWebServiceResult.h + the Stream/Utils/Aws
            // usings (not the JSON serde header/usings). The event-stream sub-case also defines
            // GetBody() returning its encoder member.
            boolean streaming = ShapeClassifier.isRawStreamingPayloadRequest(operation, model)
                || eventStreamMember.isPresent();
            if (streaming) {
                List<String> includes = new java.util.ArrayList<>(
                    IncludeSets.requestSourceBase(smithyServiceName, className));
                includes.add("aws/core/AmazonWebServiceResult.h");
                includes.add("utility");
                includes.addAll(CppTypeMapper.getSourceIncludesForShape(shape, model, smithyServiceName));
                IncludeSets.emit(writer, includes);
                writer.write("");
                writer.write("using namespace Aws::$L::Model;", namespace);
                writer.write("using namespace Aws::Utils::Stream;");
                writer.write("using namespace Aws::Utils;");
                writer.write("using namespace Aws;");
                writer.write("");
                eventStreamMember.ifPresent(m -> {
                    writer.write("std::shared_ptr<Aws::IOStream> $L::GetBody() const { return m_$L; }",
                        className, decapitalize(m));
                    writer.write("");
                });
                // Header/query method bodies (SerializePayload is gated off for streaming requests).
                protocolTraits.writeRequestMethodImpls(writer, className, shape, operation, service, model);
                if (hasEndpointContextParams(operation, shape)) {
                    writer.write("");
                    renderEndpointContextParams(writer, className, operation, shape);
                }
                writer.write("");
                return;
            }

            List<String> includes = new java.util.ArrayList<>(
                IncludeSets.requestSourceBase(smithyServiceName, className));
            includes.addAll(protocolTraits.serdeIncludes(FileKind.REQUEST_SOURCE));
            // Serde-implementation includes derived from members (HashingUtils.h for blob Base64
            // serde, AWSStringStream.h for header/query members), matching C2J computeSourceIncludes.
            includes.addAll(CppTypeMapper.getSourceIncludesForShape(shape, model, smithyServiceName));
            IncludeSets.emit(writer, includes);
            writer.write("");

            writer.write("using namespace Aws::$L::Model;", namespace);
            IncludeSets.emitUsings(writer, protocolTraits.serdeUsings(FileKind.REQUEST_SOURCE));
            writer.write("");

            protocolTraits.writeRequestMethodImpls(writer, className, shape, operation, service, model);

            if (hasEndpointContextParams(operation, shape)) {
                writer.write("");
                renderEndpointContextParams(writer, className, operation, shape);
            }
            writer.write("");
        });
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
        String cap = capitalize(memberName);
        String field = "m_" + decapitalize(memberName);
        String getter = cap.equals("Body") ? "GetMemberBody" : "Get" + cap;
        writer.write("");
        writer.write("///@{");
        MemberShape member = shape.getAllMembers().get(memberName);
        if (member.getTrait(software.amazon.smithy.model.traits.DocumentationTrait.class).isPresent()) {
            MemberRenderer.writeDocComment(writer, MemberRenderer.collapseWhitespace(
                member.getTrait(software.amazon.smithy.model.traits.DocumentationTrait.class).get().getValue()));
        }
        writer.write("$1L std::shared_ptr<$2L> $3L() const { return $4L; }", exportMacro, unionType, getter, field);
        writer.openBlock("$1L void Set$2L(const std::shared_ptr<$3L>& value) {", "}", exportMacro, cap, unionType, () -> {
            writer.write("$1LHasBeenSet = true;", field);
            writer.write("$1L = value;", field);
        });
        writer.openBlock("$1L $2L& With$3L(const std::shared_ptr<$4L>& value) {", "}",
            exportMacro, className, cap, unionType, () -> {
            writer.write("Set$1L(value);", cap);
            writer.write("return *this;");
        });
        writer.write("///@}");
    }

    private static String capitalize(String s) {
        return s.isEmpty() ? s : Character.toUpperCase(s.charAt(0)) + s.substring(1);
    }

    private static String decapitalize(String s) {
        return s.isEmpty() ? s : Character.toLowerCase(s.charAt(0)) + s.substring(1);
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
                staticParams.getParameters().forEach((name, def) -> {
                    def.getValue().accept(new software.amazon.smithy.model.node.NodeVisitor.Default<Void>() {
                        @Override
                        protected Void getDefault(software.amazon.smithy.model.node.Node node) {
                            return null;
                        }
                        @Override
                        public Void stringNode(software.amazon.smithy.model.node.StringNode node) {
                            writer.write("parameters.emplace_back(Aws::String(\"$L\"), \"$L\", Aws::Endpoint::EndpointParameter::ParameterOrigin::STATIC_CONTEXT);",
                                name, node.getValue());
                            return null;
                        }
                        @Override
                        public Void booleanNode(software.amazon.smithy.model.node.BooleanNode node) {
                            writer.write("parameters.emplace_back(Aws::String(\"$L\"), $L, Aws::Endpoint::EndpointParameter::ParameterOrigin::STATIC_CONTEXT);",
                                name, node.getValue());
                            return null;
                        }
                    });
                });
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
                        String capitalizedMember = memberName.substring(0, 1).toUpperCase() + memberName.substring(1);
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

}
