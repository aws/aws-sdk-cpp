/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.renderers;

import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriter;
import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriterDelegator;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.CppTypeMapper;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.MemberRenderer;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.ShapeRenderer;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.protocol.ProtocolTraits;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.shapes.MemberShape;
import software.amazon.smithy.model.shapes.ServiceShape;
import software.amazon.smithy.model.shapes.Shape;
import software.amazon.smithy.model.shapes.StructureShape;
import software.amazon.smithy.model.shapes.UnionShape;
import software.amazon.smithy.model.traits.EventHeaderTrait;
import software.amazon.smithy.model.traits.EventPayloadTrait;

import java.util.List;
import java.util.Map;

/**
 * Renders outgoing (request-side / bidirectional) event streams: a {@code @streaming} union
 * bound to an operation input. C2J emits these header-only as an
 * {@code Aws::Utils::Event::EventEncoderStream} subclass with one {@code Write<Event>(...)}
 * method per union member (EventStreamHeader.vm), rather than as a tagged-union data type.
 *
 * <p>Only the structure/list payload serialization is protocol-specific; that arm is delegated
 * to {@link ProtocolTraits#writeStructureEventPayload}. Blob and string payloads write the same
 * way for every protocol.
 */
public final class OutgoingEventStreamRenderer implements ShapeRenderer {

    /** How an event's payload is encoded, mirroring C2J's eventPayloadType. */
    private enum PayloadKind { BLOB, STRING, STRUCTURE, NONE }

    private final List<Shape> outgoingEventStreams;
    private final Model model;
    private final ServiceShape service;
    private final ProtocolTraits protocolTraits;
    private final String namespace;
    private final String exportMacro;
    private final String smithyServiceName;

    public OutgoingEventStreamRenderer(List<Shape> outgoingEventStreams, Model model, ServiceShape service,
                                       ProtocolTraits protocolTraits, String namespace, String exportMacro,
                                       String smithyServiceName) {
        this.outgoingEventStreams = outgoingEventStreams;
        this.model = model;
        this.service = service;
        this.protocolTraits = protocolTraits;
        this.namespace = namespace;
        this.exportMacro = exportMacro;
        this.smithyServiceName = smithyServiceName;
    }

    @Override
    public void render(CppWriterDelegator writerDelegator) {
        for (Shape shape : outgoingEventStreams) {
            shape.asUnionShape().ifPresent(union -> renderHeader(writerDelegator, union));
        }
    }

    private void renderHeader(CppWriterDelegator writerDelegator, UnionShape union) {
        String className = CppTypeMapper.cppShapeName(union);
        String fileName = "include/aws/" + smithyServiceName + "/model/" + className + ".h";
        writerDelegator.useFileWriter(fileName, writer -> {
            writer.write("#pragma once");
            java.util.Set<String> includes = new java.util.TreeSet<>();
            includes.add("<aws/" + smithyServiceName + "/" + namespace + "_EXPORTS.h>");
            includes.add("<aws/core/utils/event/EventStream.h>");
            includes.add("<aws/core/utils/stream/HttpWriteDataStreamBuf.h>");
            for (MemberShape event : union.getAllMembers().values()) {
                includes.add("<aws/" + smithyServiceName + "/model/" + event.getTarget().getName() + ".h>");
            }
            for (String include : includes) {
                writer.write("#include $L", include);
            }
            writer.write("");
            writer.write("#include <utility>");
            writer.write("");

            writer.writeNamespaceOpen("Aws");
            writer.writeNamespaceOpen(namespace);
            writer.writeNamespaceOpen("Model");
            writer.write("");
            MemberRenderer.renderClassDocComment(writer, union, smithyServiceName, service.getVersion());
            writer.openBlock("class $L $L : public Aws::Utils::Event::EventEncoderStream {", "};",
                exportMacro, className, () -> {
                writer.write("public:");
                writer.write("$L() = default;", className);
                writer.write("explicit $L(std::shared_ptr<Aws::Utils::Stream::HttpWriteDataStreamBuf> streambuf)",
                    className);
                writer.write("    : Aws::Utils::Event::EventEncoderStream(std::move(streambuf)) {}");
                for (MemberShape event : union.getAllMembers().values()) {
                    writeEventWriter(writer, className, event);
                }
            });
            writer.write("");
            writer.writeNamespaceClose("Model");
            writer.writeNamespaceClose(namespace);
            writer.writeNamespaceClose("Aws");
        });
    }

    /** Emits one {@code Write<Event>(const <Event>& value)} method for a union member. */
    private void writeEventWriter(CppWriter writer, String className, MemberShape unionMember) {
        String eventShapeName = unionMember.getTarget().getName();
        String wireKey = unionMember.getMemberName();
        StructureShape event = model.expectShape(unionMember.getTarget(), StructureShape.class);
        writer.openBlock("$L& Write$L(const $L& value) {", "}", className, eventShapeName, eventShapeName, () -> {
            writer.write("Aws::Utils::Event::Message msg;");
            PayloadKind kind = payloadKind(event);
            switch (kind) {
                case BLOB: {
                    String getter = "value.Get" + capitalize(requirePayloadMember(event, kind)) + "()";
                    writer.openBlock("if (!$L.empty()) {", "}", getter, () -> {
                        writeEventHeaders(writer, wireKey);
                        writer.write("msg.InsertEventHeader(\":content-type\", Aws::String(\"application/octet-stream\"));");
                        writer.write("msg.WriteEventPayload($L);", getter);
                    });
                    break;
                }
                case STRING:
                    writeEventHeaders(writer, wireKey);
                    writer.write("msg.InsertEventHeader(\":content-type\", Aws::String(\"text/plain\"));");
                    writer.write("msg.WriteEventPayload(value.Get$L());", capitalize(requirePayloadMember(event, kind)));
                    break;
                case STRUCTURE:
                    writeEventHeaders(writer, wireKey);
                    protocolTraits.writeStructureEventPayload(writer, "msg", "value");
                    break;
                case NONE:
                default:
                    writeEventHeaders(writer, wireKey);
                    writer.write("AWS_UNREFERENCED_PARAM(value);");
                    break;
            }
            writer.write("WriteEvent(msg);");
            writer.write("return *this;");
        });
    }

    private void writeEventHeaders(CppWriter writer, String wireKey) {
        writer.write("msg.InsertEventHeader(\":message-type\", Aws::String(\"event\"));");
        writer.write("msg.InsertEventHeader(\":event-type\", Aws::String(\"$L\"));", wireKey);
    }

    /**
     * Determines how an event shape's payload is encoded, mirroring C2J's eventPayloadType logic
     * (C2jModelToGeneratorModelTransformer). A single blob/string non-header member serializes as
     * that member; a member explicitly marked {@code @eventPayload} likewise; otherwise the event
     * structure itself is the payload (structure encoding).
     */
    private PayloadKind payloadKind(StructureShape event) {
        List<Map.Entry<String, MemberShape>> nonHeader = event.getAllMembers().entrySet().stream()
            .filter(e -> !e.getValue().hasTrait(EventHeaderTrait.class))
            .collect(java.util.stream.Collectors.toList());
        if (nonHeader.isEmpty()) {
            return PayloadKind.NONE;
        }
        if (nonHeader.size() == 1) {
            MemberShape member = nonHeader.get(0).getValue();
            Shape target = model.expectShape(member.getTarget());
            if (target.isStringShape()) {
                return PayloadKind.STRING;
            }
            // A blob member is written as a raw blob only when explicitly @eventPayload; an
            // implicit single blob member makes the parent structure the payload (matches C2J).
            if (target.isBlobShape() && member.hasTrait(EventPayloadTrait.class)) {
                return PayloadKind.BLOB;
            }
        }
        return PayloadKind.STRUCTURE;
    }

    /**
     * The single non-header payload member name for the blob/string arms. These arms are only
     * reached when {@link #payloadKind} found exactly one such member, so absence is a codegen
     * bug rather than a modeled state — fail fast.
     */
    private String requirePayloadMember(StructureShape event, PayloadKind kind) {
        return event.getAllMembers().entrySet().stream()
            .filter(e -> !e.getValue().hasTrait(EventHeaderTrait.class))
            .map(Map.Entry::getKey)
            .findFirst()
            .orElseThrow(() -> new IllegalStateException(
                "Event " + event.getId() + " classified as " + kind + " but has no payload member"));
    }

    private static String capitalize(String s) {
        return s.isEmpty() ? s : Character.toUpperCase(s.charAt(0)) + s.substring(1);
    }
}
