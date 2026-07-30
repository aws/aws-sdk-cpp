/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.renderers;

import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriter;
import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriterDelegator;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.CppTypeMapper;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.MemberRenderer;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.ProtocolResolver.Protocol;
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
import java.util.Set;
import java.util.TreeSet;

/**
 * Renders C++ headers and sources for request (operation input) shapes.
 */
public final class RequestRenderer implements ShapeRenderer {

    private final List<RequestInfo> requests;
    private final Model model;
    private final ServiceShape service;
    private final Protocol protocol;
    private final String namespace;
    private final String exportMacro;
    private final String smithyServiceName;

    public RequestRenderer(List<RequestInfo> requests, Model model, ServiceShape service,
                           Protocol protocol, String namespace, String exportMacro,
                           String smithyServiceName) {
        this.requests = requests;
        this.model = model;
        this.service = service;
        this.protocol = protocol;
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
                              StructureShape shape, OperationShape operation) {
        String className = operation.getId().getName() + "Request";
        String fileName = "include/aws/" + smithyServiceName + "/model/" + className + ".h";
        writerDelegator.useFileWriter(fileName, writer -> {
            writer.write("#pragma once");

            Set<String> includes = new TreeSet<>();
            includes.add("<aws/" + smithyServiceName + "/" + namespace + "_EXPORTS.h>");
            includes.add("<aws/" + smithyServiceName + "/" + namespace + "Request.h>");
            List<String> memberIncludes = CppTypeMapper.getIncludesForShape(shape, model, smithyServiceName);
            includes.addAll(memberIncludes);
            for (String include : includes) {
                writer.write("#include $L", include);
            }

            boolean allPrimitive = shape.getAllMembers().values().stream()
                .map(m -> model.expectShape(m.getTarget()))
                .allMatch(CppTypeMapper::isPrimitive);
            if (!allPrimitive) {
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

            String baseClass = namespace + "Request";
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
                writer.write("$L Aws::String SerializePayload() const override;", exportMacro);
                writer.write("");
                writer.write("$L Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;", exportMacro);

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

                if (!shape.getAllMembers().isEmpty()) {
                    writer.dedent();
                    writer.write("private:");
                    writer.indent();
                    if (streamingResponse) {
                        // Mainline places the handler/decoder after the data members and
                        // before the HasBeenSet flags.
                        MemberRenderer.renderPrivateDataMembers(writer, shape, model);
                        String handlerType = operation.getId().getName() + "Handler";
                        writer.write("$1L m_handler;", handlerType);
                        writer.write("Aws::Utils::Event::EventStreamDecoder m_decoder{Utils::Event::EventStreamDecoder(&m_handler)};");
                        writer.write("");
                        MemberRenderer.renderPrivateHasBeenSetFlags(writer, shape, model);
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
        String fileName = "source/model/" + className + ".cpp";
        writerDelegator.useFileWriter(fileName, writer -> {

            if (protocol.isJsonLike()) {
                writer.write("#include <aws/core/utils/json/JsonSerializer.h>");
            } else {
                writer.write("#include <aws/core/utils/xml/XmlSerializer.h>");
            }
            writer.write("#include <aws/$L/model/$L.h>", smithyServiceName, className);
            writer.write("");
            writer.write("#include <utility>");
            writer.write("");

            writer.write("using namespace Aws::$L::Model;", namespace);
            if (protocol.isJsonLike()) {
                writer.write("using namespace Aws::Utils::Json;");
                writer.write("using namespace Aws::Utils;");
            } else {
                writer.write("using namespace Aws::Utils::Xml;");
                writer.write("using namespace Aws::Utils;");
            }
            writer.write("");

            writer.write("Aws::String $L::SerializePayload() const { return \"{}\"; }", className);
            writer.write("");
            writer.write("Aws::Http::HeaderValueCollection $L::GetRequestSpecificHeaders() const { return {}; }", className);

            if (hasEndpointContextParams(operation, shape)) {
                writer.write("");
                renderEndpointContextParams(writer, className, operation, shape);
            }
            writer.write("");
        });
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
