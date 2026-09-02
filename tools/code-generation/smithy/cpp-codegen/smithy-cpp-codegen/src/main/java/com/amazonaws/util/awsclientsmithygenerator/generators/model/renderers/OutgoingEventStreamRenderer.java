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
import com.amazonaws.util.awsclientsmithygenerator.generators.model.RenderContext;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.ShapeRenderer;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.protocol.ProtocolTraits;
import software.amazon.smithy.model.shapes.MemberShape;
import software.amazon.smithy.model.shapes.Shape;
import software.amazon.smithy.model.shapes.StructureShape;
import software.amazon.smithy.model.shapes.UnionShape;
import software.amazon.smithy.model.traits.EventHeaderTrait;
import software.amazon.smithy.model.traits.EventPayloadTrait;

import java.util.List;
import java.util.Map;

/**
 * Renders outgoing (request-side / bidirectional) event streams: a {@code @streaming} union bound
 * to an operation input. C2J emits these header-only (EventStreamHeader.vm) as an
 * {@code EventEncoderStream} subclass with one {@code Write<Event>(...)} per union member, not a
 * tagged-union data type. Only structure/list payloads are protocol-specific (delegated to
 * {@link ProtocolTraits#writeStructureEventPayload}); blob/string payloads write uniformly.
 */
public final class OutgoingEventStreamRenderer implements ShapeRenderer {

    /** How an event's payload is encoded, mirroring C2J's eventPayloadType. */
    private enum PayloadKind { BLOB, STRING, STRUCTURE, NONE }

    private final List<Shape> outgoingEventStreams;
    private final RenderContext ctx;

    public OutgoingEventStreamRenderer(List<Shape> outgoingEventStreams, RenderContext ctx) {
        this.outgoingEventStreams = outgoingEventStreams;
        this.ctx = ctx;
    }

    @Override
    public void render(CppWriterDelegator writerDelegator) {
        for (Shape shape : outgoingEventStreams) {
            shape.asUnionShape().ifPresent(union -> renderHeader(writerDelegator, union));
        }
    }

    private void renderHeader(CppWriterDelegator writerDelegator, UnionShape union) {
        String className = CppTypeMapper.cppShapeName(union);
        String fileName = "include/aws/" + ctx.smithyServiceName() + "/model/" + className + ".h";
        writerDelegator.useFileWriter(fileName, writer -> {
            writer.write("#pragma once");
            java.util.Set<String> includes = new java.util.TreeSet<>();
            includes.add("<aws/" + ctx.smithyServiceName() + "/" + ctx.namespace() + "_EXPORTS.h>");
            includes.add("<aws/core/utils/event/EventStream.h>");
            includes.add("<aws/core/utils/stream/HttpWriteDataStreamBuf.h>");
            for (MemberShape event : union.getAllMembers().values()) {
                includes.add("<aws/" + ctx.smithyServiceName() + "/model/" + event.getTarget().getName() + ".h>");
            }
            IncludeSets.emitAngleIncludes(writer, includes);
            writer.write("");
            writer.write("#include <utility>");
            writer.write("");

            ModelFile.modelNamespace(writer, ctx.namespace(), () -> {
            writer.write("");
            MemberRenderer.renderClassDocComment(writer, union, ctx.smithyServiceName(), ctx.service().getVersion());
            writer.openBlock("class $L $L : public Aws::Utils::Event::EventEncoderStream {", "};",
                ctx.exportMacro(), className, () -> {
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
            });
        });
    }

    /** Emits one {@code Write<Event>(const <Event>& value)} method for a union member. */
    private void writeEventWriter(CppWriter writer, String className, MemberShape unionMember) {
        String eventShapeName = unionMember.getTarget().getName();
        String wireKey = unionMember.getMemberName();
        StructureShape event = ctx.model().expectShape(unionMember.getTarget(), StructureShape.class);
        writer.openBlock("$L& Write$L(const $L& value) {", "}", className, eventShapeName, eventShapeName, () -> {
            writer.write("Aws::Utils::Event::Message msg;");
            PayloadKind kind = payloadKind(event);
            switch (kind) {
                case BLOB: {
                    String getter = "value.Get" + CppNames.capitalize(requirePayloadMember(event, kind)) + "()";
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
                    writer.write("msg.WriteEventPayload(value.Get$L());", CppNames.capitalize(requirePayloadMember(event, kind)));
                    break;
                case STRUCTURE:
                    writeEventHeaders(writer, wireKey);
                    ctx.protocolTraits().writeStructureEventPayload(writer, "msg", "value");
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
     * How an event's payload is encoded, mirroring C2J eventPayloadType: a single blob/string
     * non-header member (or an explicit {@code @eventPayload} member) serializes as that member;
     * otherwise the event structure itself is the payload.
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
            Shape target = ctx.model().expectShape(member.getTarget());
            if (target.isStringShape()) {
                return PayloadKind.STRING;
            }
            // Implicit single blob member => parent is the payload (C2J); raw blob only when explicitly @eventPayload
            if (target.isBlobShape() && member.hasTrait(EventPayloadTrait.class)) {
                return PayloadKind.BLOB;
            }
        }
        return PayloadKind.STRUCTURE;
    }

    /**
     * The single non-header payload member name for the blob/string arms; reached only when
     * {@link #payloadKind} found exactly one, so absence is a codegen bug — fail fast.
     */
    private String requirePayloadMember(StructureShape event, PayloadKind kind) {
        return event.getAllMembers().entrySet().stream()
            .filter(e -> !e.getValue().hasTrait(EventHeaderTrait.class))
            .map(Map.Entry::getKey)
            .findFirst()
            .orElseThrow(() -> new IllegalStateException(
                "Event " + event.getId() + " classified as " + kind + " but has no payload member"));
    }
}
