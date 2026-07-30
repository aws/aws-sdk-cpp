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
import com.amazonaws.util.awsclientsmithygenerator.generators.model.SerdeStub;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.ShapeClassifier.EventStreamInfo;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.ShapeRenderer;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.shapes.MemberShape;
import software.amazon.smithy.model.shapes.ServiceShape;
import software.amazon.smithy.model.shapes.Shape;
import software.amazon.smithy.model.shapes.StructureShape;
import software.amazon.smithy.model.shapes.UnionShape;
import software.amazon.smithy.model.traits.DocumentationTrait;
import software.amazon.smithy.model.traits.ErrorTrait;
import software.amazon.smithy.model.traits.StreamingTrait;

import java.util.ArrayList;
import java.util.List;
import java.util.Optional;

/**
 * Renders C++ event stream artifacts for response-side (simplex) streaming operations:
 * the handler, initial response, and event stream union. Driven by the classifier's
 * {@link EventStreamInfo} list. Event structure shapes themselves are generated
 * elsewhere (as reachable sub-objects) and only referenced here.
 *
 * <p>No protocol-specific serialization is emitted; payload (de)serialization points
 * are protocol-agnostic TODO stubs via {@link SerdeStub}.
 */
public final class EventStreamRenderer implements ShapeRenderer {

    private final List<EventStreamInfo> eventStreams;
    private final Model model;
    private final ServiceShape service;
    private final Protocol protocol;
    private final String namespace;
    private final String exportMacro;
    private final String smithyServiceName;

    public EventStreamRenderer(List<EventStreamInfo> eventStreams, Model model, ServiceShape service,
                               Protocol protocol, String namespace, String exportMacro,
                               String smithyServiceName) {
        this.eventStreams = eventStreams;
        this.model = model;
        this.service = service;
        this.protocol = protocol;
        this.namespace = namespace;
        this.exportMacro = exportMacro;
        this.smithyServiceName = smithyServiceName;
    }

    @Override
    public void render(CppWriterDelegator writerDelegator) {
        for (EventStreamInfo info : eventStreams) {
            Optional<UnionShape> streamingUnion = findStreamingUnion(info.resultShape());
            if (streamingUnion.isEmpty()) {
                continue;
            }
            UnionShape union = streamingUnion.get();
            List<MemberShape> events = new ArrayList<>();
            List<MemberShape> exceptions = new ArrayList<>();
            partitionMembers(union, events, exceptions);

            renderHandlerHeader(writerDelegator, info.operationName(), events);
            renderHandlerSource(writerDelegator, info.operationName(), events);
            renderInitialResponse(writerDelegator, info.operationName());
            renderEventStreamUnion(writerDelegator, info.operationName(), union, events, exceptions);
        }
    }

    /** Finds the @streaming union targeted by a member of the result structure, if any. */
    private Optional<UnionShape> findStreamingUnion(StructureShape resultShape) {
        for (MemberShape member : resultShape.getAllMembers().values()) {
            Shape target = model.expectShape(member.getTarget());
            if (target.isUnionShape() && target.hasTrait(StreamingTrait.class)) {
                return target.asUnionShape();
            }
        }
        return Optional.empty();
    }

    /** Splits union members into events (non-exception) and exceptions, preserving order. */
    private void partitionMembers(UnionShape union, List<MemberShape> events, List<MemberShape> exceptions) {
        for (MemberShape member : union.getAllMembers().values()) {
            Shape target = model.expectShape(member.getTarget());
            if (target.hasTrait(ErrorTrait.class)) {
                exceptions.add(member);
            } else {
                events.add(member);
            }
        }
    }

    /** The C++ event type identifier (event shape name), e.g. "AlphaEvent". */
    private String eventShapeName(MemberShape member) {
        return member.getTarget().getName();
    }

    /** The wire member key, e.g. "alpha". */
    private String wireKey(MemberShape member) {
        return member.getMemberName();
    }

    /** The EventType enum constant: wire member key uppercased, e.g. "ALPHA". */
    private String enumConstant(MemberShape member) {
        return wireKey(member).toUpperCase();
    }

    // ---- Handler ------------------------------------------------------------

    private void renderHandlerHeader(CppWriterDelegator writerDelegator, String opName,
                                     List<MemberShape> events) {
        String className = opName + "Handler";
        String fileName = "include/aws/" + smithyServiceName + "/model/" + className + ".h";
        writerDelegator.useFileWriter(fileName, writer -> {
            writer.write("#pragma once");
            writer.write("#include <aws/core/client/AWSError.h>");
            writer.write("#include <aws/core/utils/HashingUtils.h>");
            writer.write("#include <aws/core/utils/event/EventStreamHandler.h>");
            writer.write("#include <aws/$1L/$2LErrors.h>", smithyServiceName, namespace);
            writer.write("#include <aws/$1L/$2L_EXPORTS.h>", smithyServiceName, namespace);
            writer.write("#include <aws/$1L/model/$2LInitialResponse.h>", smithyServiceName, opName);
            for (MemberShape event : events) {
                writer.write("#include <aws/$1L/model/$2L.h>", smithyServiceName, eventShapeName(event));
            }
            writer.write("");
            writer.writeNamespaceOpen("Aws");
            writer.writeNamespaceOpen(namespace);
            writer.writeNamespaceOpen("Model");

            // EventType enum
            StringBuilder enumBody = new StringBuilder("enum class ")
                .append(opName).append("EventType { INITIAL_RESPONSE, ");
            for (MemberShape event : events) {
                enumBody.append(enumConstant(event)).append(", ");
            }
            enumBody.append("UNKNOWN };");
            writer.write("$L", enumBody.toString());
            writer.write("");

            writer.openBlock("class $1L : public Aws::Utils::Event::EventStreamHandler {", "};", className, () -> {
                // Callback typedefs
                writer.write("typedef std::function<void(const $1LInitialResponse&)> $1LInitialResponseCallback;", opName);
                writer.write("typedef std::function<void(const $1LInitialResponse&, const Utils::Event::InitialResponseType)> $1LInitialResponseCallbackEx;", opName);
                for (MemberShape event : events) {
                    String ev = eventShapeName(event);
                    writer.write("typedef std::function<void(const $1L&)> $1LCallback;", ev);
                }
                writer.write("typedef std::function<void(const Aws::Client::AWSError<$1LErrors>& error)> ErrorCallback;", namespace);
                writer.write("");
                writer.dedent();
                writer.write("public:");
                writer.indent();
                writer.write("$1L $2L();", exportMacro, className);
                writer.write("$1L $2L& operator=(const $2L&) = default;", exportMacro, className);
                writer.write("$1L $2L(const $2L&) = default;", exportMacro, className);
                writer.write("");
                writer.write("$1L virtual void OnEvent() override;", exportMacro);
                writer.write("");
                writer.write("///@{");
                writer.write("/**");
                writer.write(" * Sets an initial response callback. This callback gets called on the initial $1L Operation response.", opName);
                writer.write(" *   This can be either \"initial-response\" decoded event frame or decoded HTTP headers received on connection.");
                writer.write(" *   This callback may get called more than once (i.e. on connection headers received and then on the initial-response event received).");
                writer.write(" * @param callback");
                writer.write(" */");
                writer.write("inline void SetInitialResponseCallbackEx(const $1LInitialResponseCallbackEx& callback) { m_onInitialResponse = callback; }", opName);
                writer.write("/**");
                writer.write(" * Sets an initial response callback (a legacy one that does not distinguish whether response originates from headers or from the event).");
                writer.write(" */");
                writer.openBlock("inline void SetInitialResponseCallback(const $1LInitialResponseCallback& noArgCallback) {", "}", opName, () -> {
                    writer.write("m_onInitialResponse = [noArgCallback](const $1LInitialResponse& rs, const Utils::Event::InitialResponseType) {", opName);
                    writer.write("return noArgCallback(rs);");
                    writer.write("};");
                });
                writer.write("///@}");
                for (MemberShape event : events) {
                    String ev = eventShapeName(event);
                    writer.write("inline void Set$1LCallback(const $1LCallback& callback) { m_on$1L = callback; }", ev);
                }
                writer.write("inline void SetOnErrorCallback(const ErrorCallback& callback) { m_onError = callback; }");
                writer.write("");
                writer.write("inline $1LInitialResponseCallbackEx& GetInitialResponseCallbackEx() { return m_onInitialResponse; }", opName);
                writer.write("");
                writer.dedent();
                writer.write("private:");
                writer.indent();
                writer.write("$1L void HandleEventInMessage();", exportMacro);
                writer.write("$1L void HandleErrorInMessage();", exportMacro);
                writer.write("$1L void MarshallError(const Aws::String& errorCode, const Aws::String& errorMessage);", exportMacro);
                writer.write("");
                writer.write("$1LInitialResponseCallbackEx m_onInitialResponse;", opName);
                for (MemberShape event : events) {
                    String ev = eventShapeName(event);
                    writer.write("$1LCallback m_on$1L;", ev);
                }
                writer.write("ErrorCallback m_onError;");
            });
            writer.write("");

            writer.writeNamespaceOpen(opName + "EventMapper");
            writer.write("$1L $2LEventType Get$2LEventTypeForName(const Aws::String& name);", exportMacro, opName);
            writer.write("");
            writer.write("$1L Aws::String GetNameFor$2LEventType($2LEventType value);", exportMacro, opName);
            writer.writeNamespaceClose(opName + "EventMapper");

            writer.writeNamespaceClose("Model");
            writer.writeNamespaceClose(namespace);
            writer.writeNamespaceClose("Aws");
        });
    }

    private void renderHandlerSource(CppWriterDelegator writerDelegator, String opName,
                                     List<MemberShape> events) {
        String className = opName + "Handler";
        String fileName = "source/model/" + className + ".cpp";
        String tag = opName.toUpperCase() + "_HANDLER_CLASS_TAG";
        writerDelegator.useFileWriter(fileName, writer -> {
            writer.write("#include <aws/core/client/CoreErrors.h>");
            writer.write("#include <aws/core/utils/event/EventStreamErrors.h>");
            writer.write("#include <aws/core/utils/logging/LogMacros.h>");
            writer.write("#include <aws/$1L/$2LErrorMarshaller.h>", smithyServiceName, namespace);
            writer.write("#include <aws/$1L/model/$2LHandler.h>", smithyServiceName, opName);
            writer.write("");
            writer.write("using namespace Aws::$1L::Model;", namespace);
            writer.write("using namespace Aws::Utils::Event;");
            writer.write("");
            writer.write("AWS_CORE_API extern const char MESSAGE_LOWER_CASE[];");
            writer.write("AWS_CORE_API extern const char MESSAGE_CAMEL_CASE[];");
            writer.write("");
            writer.writeNamespaceOpen("Aws");
            writer.writeNamespaceOpen(namespace);
            writer.writeNamespaceOpen("Model");
            writer.write("using namespace Aws::Client;");
            writer.write("");
            writer.write("static const char $1L[] = \"$2LHandler\";", tag, opName);
            writer.write("");

            // Constructor
            writer.openBlock("$1L::$1L() : EventStreamHandler() {", "}", className, () -> {
                writer.openBlock("m_onInitialResponse = [&](const $1LInitialResponse&, const Utils::Event::InitialResponseType eventType) {", "};", opName, () -> {
                    writer.write("AWS_LOGSTREAM_TRACE($1L, \"$2L initial response received from \" << (eventType == Utils::Event::InitialResponseType::ON_EVENT ? \"event\" : \"http headers\"));", tag, opName);
                });
                for (MemberShape event : events) {
                    String ev = eventShapeName(event);
                    writer.openBlock("m_on$1L = [&](const $1L&) {", "};", ev, () -> {
                        writer.write("AWS_LOGSTREAM_TRACE($1L, \"$2L received.\");", tag, ev);
                    });
                }
                writer.openBlock("m_onError = [&](const AWSError<$1LErrors>& error) {", "};", namespace, () -> {
                    writer.write("AWS_LOGSTREAM_TRACE($1L, \"$2L Errors received, \" << error);", tag, namespace);
                });
            });
            writer.write("");

            // OnEvent
            writer.openBlock("void $1L::OnEvent() {", "}", className, () -> {
                writer.openBlock("if (!*this) {", "}", () -> {
                    writer.write("AWSError<CoreErrors> error = EventStreamErrorsMapper::GetAwsErrorForEventStreamError(GetInternalError());");
                    writer.write("error.SetMessage(GetEventPayloadAsString());");
                    writer.write("m_onError(AWSError<$1LErrors>(error));", namespace);
                    writer.write("return;");
                });
                writer.write("const auto& headers = GetEventHeaders();");
                writer.write("auto messageTypeHeaderIter = headers.find(MESSAGE_TYPE_HEADER);");
                writer.openBlock("if (messageTypeHeaderIter == headers.end()) {", "}", () -> {
                    writer.write("AWS_LOGSTREAM_WARN($1L, \"Header: \" << MESSAGE_TYPE_HEADER << \" not found in the message.\");", tag);
                    writer.write("return;");
                });
                writer.openBlock("switch (Aws::Utils::Event::Message::GetMessageTypeForName(messageTypeHeaderIter->second.GetEventHeaderValueAsString())) {", "}", () -> {
                    writer.write("case Aws::Utils::Event::Message::MessageType::EVENT:");
                    writer.write("HandleEventInMessage();");
                    writer.write("break;");
                    writer.write("case Aws::Utils::Event::Message::MessageType::REQUEST_LEVEL_ERROR:");
                    writer.openBlock("case Aws::Utils::Event::Message::MessageType::REQUEST_LEVEL_EXCEPTION: {", "}", () -> {
                        writer.write("HandleErrorInMessage();");
                        writer.write("break;");
                    });
                    writer.write("default:");
                    writer.write("AWS_LOGSTREAM_WARN($1L, \"Unexpected message type: \" << messageTypeHeaderIter->second.GetEventHeaderValueAsString());", tag);
                    writer.write("break;");
                });
            });
            writer.write("");

            // HandleEventInMessage
            writer.openBlock("void $1L::HandleEventInMessage() {", "}", className, () -> {
                writer.write("const auto& headers = GetEventHeaders();");
                writer.write("auto eventTypeHeaderIter = headers.find(EVENT_TYPE_HEADER);");
                writer.openBlock("if (eventTypeHeaderIter == headers.end()) {", "}", () -> {
                    writer.write("AWS_LOGSTREAM_WARN($1L, \"Header: \" << EVENT_TYPE_HEADER << \" not found in the message.\");", tag);
                    writer.write("return;");
                });
                writer.openBlock("switch ($1LEventMapper::Get$1LEventTypeForName(eventTypeHeaderIter->second.GetEventHeaderValueAsString())) {", "}", opName, () -> {
                    writer.openBlock("case $1LEventType::INITIAL_RESPONSE: {", "}", opName, () -> {
                        writer.write("$1LInitialResponse event(GetEventHeadersAsHttpHeaders());", opName);
                        writer.write("m_onInitialResponse(event, Utils::Event::InitialResponseType::ON_EVENT);");
                        writer.write("break;");
                    });
                    for (MemberShape event : events) {
                        writer.openBlock("case $1LEventType::$2L: {", "}", opName, enumConstant(event), () -> {
                            SerdeStub.renderEventPayloadDecodeStub(writer, eventShapeName(event), "m_on" + eventShapeName(event));
                            writer.write("break;");
                        });
                    }
                    writer.write("default:");
                    writer.write("AWS_LOGSTREAM_WARN($1L, \"Unexpected event type: \" << eventTypeHeaderIter->second.GetEventHeaderValueAsString());", tag);
                    writer.write("break;");
                });
            });
            writer.write("");

            // HandleErrorInMessage
            writer.openBlock("void $1L::HandleErrorInMessage() {", "}", className, () -> {
                writer.write("const auto& headers = GetEventHeaders();");
                writer.write("Aws::String errorCode;");
                writer.write("Aws::String errorMessage;");
                writer.write("auto errorHeaderIter = headers.find(ERROR_CODE_HEADER);");
                writer.openBlock("if (errorHeaderIter == headers.end()) {", "}", () -> {
                    writer.write("errorHeaderIter = headers.find(EXCEPTION_TYPE_HEADER);");
                    writer.openBlock("if (errorHeaderIter == headers.end()) {", "}", () -> {
                        writer.write("AWS_LOGSTREAM_WARN($1L, \"Error type was not found in the event message.\");", tag);
                        writer.write("return;");
                    });
                });
                writer.write("errorCode = errorHeaderIter->second.GetEventHeaderValueAsString();");
                writer.write("errorHeaderIter = headers.find(ERROR_MESSAGE_HEADER);");
                writer.openBlock("if (errorHeaderIter == headers.end()) {", "}", () -> {
                    writer.write("// TODO: read error message from payload once protocol-specific serde lands");
                    SerdeStub.renderErrorPayloadParseStub(writer);
                });
                writer.openBlock("else {", "}", () -> {
                    writer.write("errorMessage = errorHeaderIter->second.GetEventHeaderValueAsString();");
                });
                writer.write("MarshallError(errorCode, errorMessage);");
            });
            writer.write("");

            // MarshallError (verbatim from C2J)
            writer.openBlock("void $1L::MarshallError(const Aws::String& errorCode, const Aws::String& errorMessage) {", "}", className, () -> {
                writer.write("$1LErrorMarshaller errorMarshaller;", namespace);
                writer.write("AWSError<CoreErrors> error;");
                writer.openBlock("if (errorCode.empty()) {", "}", () -> {
                    writer.write("error = AWSError<CoreErrors>(CoreErrors::UNKNOWN, \"\", errorMessage, false);");
                });
                writer.openBlock("else {", "}", () -> {
                    writer.write("error = errorMarshaller.FindErrorByName(errorCode.c_str());");
                    writer.openBlock("if (error.GetErrorType() != CoreErrors::UNKNOWN) {", "}", () -> {
                        writer.write("AWS_LOGSTREAM_WARN($1L, \"Encountered AWSError '\" << errorCode.c_str() << \"': \" << errorMessage.c_str());", tag);
                        writer.write("error.SetExceptionName(errorCode);");
                        writer.write("error.SetMessage(errorMessage);");
                    });
                    writer.openBlock("else {", "}", () -> {
                        writer.write("AWS_LOGSTREAM_WARN($1L, \"Encountered Unknown AWSError '\" << errorCode.c_str() << \"': \" << errorMessage.c_str());", tag);
                        writer.write("error = AWSError<CoreErrors>(CoreErrors::UNKNOWN, errorCode, \"Unable to parse ExceptionName: \" + errorCode + \" Message: \" + errorMessage, false);");
                    });
                });
                writer.write("m_onError(AWSError<$1LErrors>(error));", namespace);
            });
            writer.write("");

            // EventMapper
            writer.writeNamespaceOpen(opName + "EventMapper");
            writer.write("static const int INITIAL_RESPONSE_HASH = Aws::Utils::HashingUtils::HashString(\"initial-response\");");
            for (MemberShape event : events) {
                writer.write("static const int $1L_HASH = Aws::Utils::HashingUtils::HashString(\"$2L\");",
                    enumConstant(event), wireKey(event));
            }
            writer.write("");
            writer.openBlock("$1LEventType Get$1LEventTypeForName(const Aws::String& name) {", "}", opName, () -> {
                writer.write("int hashCode = Aws::Utils::HashingUtils::HashString(name.c_str());");
                writer.openBlock("if (hashCode == INITIAL_RESPONSE_HASH) {", "}", () -> {
                    writer.write("return $1LEventType::INITIAL_RESPONSE;", opName);
                });
                for (MemberShape event : events) {
                    writer.openBlock("else if (hashCode == $1L_HASH) {", "}", enumConstant(event), () -> {
                        writer.write("return $1LEventType::$2L;", opName, enumConstant(event));
                    });
                }
                writer.write("return $1LEventType::UNKNOWN;", opName);
            });
            writer.write("");
            writer.openBlock("Aws::String GetNameFor$1LEventType($1LEventType value) {", "}", opName, () -> {
                writer.openBlock("switch (value) {", "}", () -> {
                    writer.write("case $1LEventType::INITIAL_RESPONSE:", opName);
                    writer.write("return \"initial-response\";");
                    for (MemberShape event : events) {
                        writer.write("case $1LEventType::$2L:", opName, enumConstant(event));
                        writer.write("return \"$1L\";", wireKey(event));
                    }
                    writer.write("default:");
                    writer.write("return \"Unknown\";");
                });
            });
            writer.writeNamespaceClose(opName + "EventMapper");

            writer.writeNamespaceClose("Model");
            writer.writeNamespaceClose(namespace);
            writer.writeNamespaceClose("Aws");
        });
    }

    // ---- Placeholders filled in by Tasks 4 and 5 ----------------------------

    private void renderInitialResponse(CppWriterDelegator writerDelegator, String opName) {
        String className = opName + "InitialResponse";

        String headerFile = "include/aws/" + smithyServiceName + "/model/" + className + ".h";
        writerDelegator.useFileWriter(headerFile, writer -> {
            writer.write("#pragma once");
            writer.write("#include <aws/core/http/HttpTypes.h>");
            writer.write("#include <aws/$1L/$2L_EXPORTS.h>", smithyServiceName, namespace);
            writer.write("");
            writer.writeNamespaceOpen("Aws");
            renderSerdeForwardDeclarations(writer);
            writer.writeNamespaceOpen(namespace);
            writer.writeNamespaceOpen("Model");
            writer.write("");
            writer.openBlock("class $L {", "};", className, () -> {
                writer.write("public:");
                // The header-collection ctor sits before the serialize method (mainline ordering).
                SerdeStub.renderHeaderDeclarations(writer, protocol, exportMacro, className,
                    () -> writer.write("$1L $2L(const Http::HeaderValueCollection& responseHeaders);", exportMacro, className));
            });
            writer.write("");
            writer.writeNamespaceClose("Model");
            writer.writeNamespaceClose(namespace);
            writer.writeNamespaceClose("Aws");
        });

        String sourceFile = "source/model/" + className + ".cpp";
        writerDelegator.useFileWriter(sourceFile, writer -> {
            if (protocol.isJsonLike()) {
                writer.write("#include <aws/core/utils/json/JsonSerializer.h>");
            } else {
                writer.write("#include <aws/core/utils/xml/XmlSerializer.h>");
            }
            writer.write("#include <aws/core/utils/UnreferencedParam.h>");
            writer.write("#include <aws/$1L/model/$2L.h>", smithyServiceName, className);
            writer.write("");
            writer.write("using namespace Aws::$1L::Model;", namespace);
            if (protocol.isJsonLike()) {
                writer.write("using namespace Aws::Utils::Json;");
            } else {
                writer.write("using namespace Aws::Utils::Xml;");
            }
            writer.write("using namespace Aws::Utils;");
            writer.write("");
            SerdeStub.renderSerdeSourceStub(writer, protocol, className);
            writer.write("");
            writer.openBlock("$1L::$1L(const Http::HeaderValueCollection& responseHeaders) {", "}", className, () -> {
                writer.write("AWS_UNREFERENCED_PARAM(responseHeaders);");
            });
        });
    }

    /** Forward-declares the protocol serde types under Aws:: for header use. */
    private void renderSerdeForwardDeclarations(CppWriter writer) {
        if (protocol.isJsonLike()) {
            writer.writeNamespaceOpen("Utils");
            writer.writeNamespaceOpen("Json");
            writer.write("class JsonValue;");
            writer.write("class JsonView;");
            writer.writeNamespaceClose("Json");
            writer.writeNamespaceClose("Utils");
        } else {
            writer.writeNamespaceOpen("Utils");
            writer.writeNamespaceOpen("Xml");
            writer.write("class XmlNode;");
            writer.writeNamespaceClose("Xml");
            writer.writeNamespaceClose("Utils");
        }
    }

    private void renderEventStreamUnion(CppWriterDelegator writerDelegator, String opName,
                                        UnionShape union, List<MemberShape> events,
                                        List<MemberShape> exceptions) {
        String className = union.getId().getName();
        String errorType = namespace + "Error";

        String headerFile = "include/aws/" + smithyServiceName + "/model/" + className + ".h";
        writerDelegator.useFileWriter(headerFile, writer -> {
            writer.write("#pragma once");
            writer.write("#include <aws/$1L/$2L_EXPORTS.h>", smithyServiceName, namespace);
            writer.write("#include <aws/$1L/$2LErrors.h>", smithyServiceName, namespace);
            for (MemberShape event : events) {
                writer.write("#include <aws/$1L/model/$2L.h>", smithyServiceName, eventShapeName(event));
            }
            writer.write("");
            writer.write("#include <utility>");
            writer.write("");
            writer.writeNamespaceOpen("Aws");
            renderSerdeForwardDeclarations(writer);
            writer.writeNamespaceOpen(namespace);
            writer.writeNamespaceOpen("Model");
            writer.write("");
            MemberRenderer.renderClassDocComment(writer, union, smithyServiceName, service.getVersion());
            writer.openBlock("class $L {", "};", className, () -> {
                writer.write("public:");
                SerdeStub.renderHeaderDeclarations(writer, protocol, exportMacro, className);
                writer.write("");
                // Event member accessors, typed as their concrete shape.
                for (MemberShape event : events) {
                    String cppType = CppTypeMapper.getCppType(model.expectShape(event.getTarget()), model);
                    renderShapeAccessor(writer, className, cppType, event.getMemberName(), event);
                }
                // Exception member accessors, typed as <namespace>Error.
                for (MemberShape exc : exceptions) {
                    renderShapeAccessor(writer, className, errorType, exc.getMemberName(), exc);
                }
                writer.dedent();
                writer.write("private:");
                writer.indent();
                // Data members
                for (MemberShape event : events) {
                    String cppType = CppTypeMapper.getCppType(model.expectShape(event.getTarget()), model);
                    writer.write("$1L $2L;", cppType, "m_" + decapitalize(event.getMemberName()));
                }
                for (MemberShape exc : exceptions) {
                    writer.write("$1L $2L;", errorType, "m_" + decapitalize(exc.getMemberName()));
                }
                // HasBeenSet flags
                for (MemberShape event : events) {
                    writer.write("bool $1LHasBeenSet = false;", "m_" + decapitalize(event.getMemberName()));
                }
                for (MemberShape exc : exceptions) {
                    writer.write("bool $1LHasBeenSet = false;", "m_" + decapitalize(exc.getMemberName()));
                }
            });
            writer.write("");
            writer.writeNamespaceClose("Model");
            writer.writeNamespaceClose(namespace);
            writer.writeNamespaceClose("Aws");
        });

        // C2J generates the event stream union as a header-only type: the serde methods are
        // declared but never defined or referenced (the handler dispatches on the concrete
        // event shape, not the union). No .cpp is emitted, to match mainline parity.
    }

    /**
     * Renders a Get/HasBeenSet/Set/With accessor block for a union member, typed by the
     * given C++ type string. Used for both event members (concrete shape type) and
     * exception members (the service error wrapper). Mirrors the templated setter style
     * used by MemberRenderer.
     */
    private void renderShapeAccessor(CppWriter writer, String className, String cppType, String memberName,
                                     MemberShape member) {
        String getter = capitalize(memberName);
        String field = "m_" + decapitalize(memberName);
        String templateParam = getter + "T";
        writer.write("///@{");
        if (member.getTrait(DocumentationTrait.class).isPresent()) {
            MemberRenderer.writeDocComment(writer,
                MemberRenderer.collapseWhitespace(member.getTrait(DocumentationTrait.class).get().getValue()));
        } else {
            writer.write("");
        }
        writer.write("inline const $1L& Get$2L() const { return $3L; }", cppType, getter, field);
        writer.write("inline bool $1LHasBeenSet() const { return $2LHasBeenSet; }", getter, field);
        writer.write("template <typename $1L = $2L>", templateParam, cppType);
        writer.openBlock("void Set$1L($2L&& value) {", "}", getter, templateParam, () -> {
            writer.write("$1LHasBeenSet = true;", field);
            writer.write("$1L = std::forward<$2L>(value);", field, templateParam);
        });
        writer.write("template <typename $1L = $2L>", templateParam, cppType);
        writer.openBlock("$1L& With$2L($3L&& value) {", "}", className, getter, templateParam, () -> {
            writer.write("Set$1L(std::forward<$2L>(value));", getter, templateParam);
            writer.write("return *this;");
        });
        writer.write("///@}");
    }

    private static String capitalize(String s) {
        return s.substring(0, 1).toUpperCase() + s.substring(1);
    }

    private static String decapitalize(String s) {
        return s.substring(0, 1).toLowerCase() + s.substring(1);
    }

}
