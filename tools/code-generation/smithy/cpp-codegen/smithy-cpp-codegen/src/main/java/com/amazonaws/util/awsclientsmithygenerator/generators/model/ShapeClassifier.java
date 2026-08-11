/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model;

import com.amazonaws.util.awsclientsmithygenerator.generators.model.ProtocolResolver.Protocol;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms.GlobalTransforms;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.knowledge.TopDownIndex;
import software.amazon.smithy.model.shapes.EnumShape;
import software.amazon.smithy.model.shapes.MemberShape;
import software.amazon.smithy.model.shapes.OperationShape;
import software.amazon.smithy.model.shapes.ServiceShape;
import software.amazon.smithy.model.shapes.Shape;
import software.amazon.smithy.model.shapes.ShapeId;
import software.amazon.smithy.model.shapes.StructureShape;
import software.amazon.smithy.model.shapes.UnionShape;
import software.amazon.smithy.model.traits.EnumTrait;
import software.amazon.smithy.model.traits.ErrorTrait;
import software.amazon.smithy.model.traits.HttpPayloadTrait;
import software.amazon.smithy.model.traits.StreamingTrait;

import java.util.ArrayList;
import java.util.HashSet;
import java.util.List;
import java.util.Optional;
import java.util.Set;
import java.util.stream.Collectors;

/**
 * Categorizes Smithy shapes reachable from a service into generation buckets.
 *
 * <p>Each shape is classified into exactly one bucket: request, result, sub-object,
 * enum, event-stream handler, blob-payload event, outgoing event stream, or skip.
 * The classification drives which Velocity template is applied during code generation.
 */
public final class ShapeClassifier {

    /**
     * Associates an operation input shape with its parent operation.
     *
     * @param shape     the request structure shape
     * @param operation the operation shape that uses this as input
     */
    public record RequestInfo(StructureShape shape, OperationShape operation) {}

    /**
     * Associates an operation output shape with its parent operation.
     *
     * @param shape     the result structure shape
     * @param operation the operation shape that uses this as output
     * @param streaming true if the result binds a raw streaming httpPayload blob member
     */
    public record ResultInfo(StructureShape shape, OperationShape operation, boolean streaming) {}

    /**
     * Metadata about an operation whose output contains an event stream.
     *
     * @param operationName the operation name (e.g., "SubscribeToShard")
     * @param requestShape  the operation's input structure
     * @param resultShape   the operation's output structure (contains the streaming union member)
     */
    public record EventStreamInfo(String operationName, StructureShape requestShape, StructureShape resultShape) {}

    /**
     * The full classification result for a service.
     *
     * @param requests            operation input shapes with their operations
     * @param results             operation output shapes with their operations (excluding event-stream-bearing)
     * @param subObjects          remaining StructureShape/UnionShape reachable from operations
     * @param enums               EnumShape or StringShape with @enum trait
     * @param eventStreamHandlers operation + request/result shape tuples for event stream handlers
     * @param outgoingEventStreams outgoing event stream shapes (header only)
     */
    public record ClassifiedShapes(
        List<RequestInfo> requests,
        List<ResultInfo> results,
        List<Shape> subObjects,
        List<Shape> enums,
        List<EventStreamInfo> eventStreamHandlers,
        List<Shape> outgoingEventStreams
    ) {}

    private ShapeClassifier() {}

    /**
     * Classifies all shapes reachable from the given service into generation buckets.
     *
     * @param model    the Smithy model
     * @param service  the service shape whose operations define the root set
     * @param protocol the already-resolved protocol; passed in rather than re-resolved so
     *                 that {@code ModelGenerator} remains the single resolution point
     * @return classified shapes grouped by generation bucket
     */
    public static ClassifiedShapes classify(Model model, ServiceShape service, Protocol protocol) {
        TopDownIndex index = TopDownIndex.of(model);
        Set<ShapeId> reachable = GlobalTransforms.computeReachableShapes(model, service);

        Set<ShapeId> inputShapeIds = new HashSet<>();
        Set<ShapeId> outputShapeIds = new HashSet<>();
        // @streaming unions bound to a request input: rendered as EventEncoderStream subclasses
        // (outgoing event streams), not as tagged-union data types.
        Set<ShapeId> outgoingEventStreamIds = new HashSet<>();

        List<RequestInfo> requests = new ArrayList<>();
        List<ResultInfo> results = new ArrayList<>();
        List<Shape> subObjects = new ArrayList<>();
        List<Shape> enums = new ArrayList<>();
        List<EventStreamInfo> eventStreamHandlers = new ArrayList<>();
        List<Shape> outgoingEventStreams = new ArrayList<>();

        // Collect operation inputs/outputs and identify event stream handlers
        for (OperationShape op : index.getContainedOperations(service)) {
            // Use getInputShape() (not getInput()) so no-input operations, whose input
            // target is smithy.api#Unit, still produce a RequestInfo. C2J emits a Request
            // class for every operation; the generated client method references it.
            ShapeId inputId = op.getInputShape();
            inputShapeIds.add(inputId);
            model.getShape(inputId).flatMap(Shape::asStructureShape).ifPresent(s -> {
                requests.add(new RequestInfo(s, op));

                // Check if operation has event-stream-bearing result
                boolean resultHasEventStream = op.getOutput()
                    .flatMap(model::getShape)
                    .flatMap(Shape::asStructureShape)
                    .map(out -> hasEventStreamMembers(out, model))
                    .orElse(false);
                if (resultHasEventStream) {
                    StructureShape resultShape = model.expectShape(op.getOutputShape(), StructureShape.class);
                    eventStreamHandlers.add(new EventStreamInfo(op.getId().getName(), s, resultShape));
                }

                // An input-bound @streaming union is an outgoing event stream (encoder). Collect
                // it once and record its shape id so the reachable-walk below does not also add
                // it to subObjects.
                streamingUnionMember(s, model).ifPresent(union -> {
                    if (outgoingEventStreamIds.add(union.getId())) {
                        outgoingEventStreams.add(union);
                    }
                });
            });
            op.getOutput().ifPresent(id -> {
                outputShapeIds.add(id);
                model.getShape(id).flatMap(Shape::asStructureShape).ifPresent(s -> {
                    if (!hasEventStreamMembers(s, model)) {
                        results.add(new ResultInfo(s, op, hasRawStreamingPayload(s, model)));
                    }
                    // If has event stream members, result is skipped (handler generated instead)
                });
            });
        }

        // Walk all reachable shapes and classify remaining ones
        for (ShapeId id : reachable) {
            Shape shape = model.expectShape(id);
            if (inputShapeIds.contains(id) || outputShapeIds.contains(id)) {
                // Already classified as request/result above
            } else if (shape.isEnumShape() || (shape.isStringShape() && shape.hasTrait(EnumTrait.class))) {
                enums.add(shape);
            } else if (outgoingEventStreamIds.contains(id)) {
                // Already collected as an outgoing event stream; do not also render as a data union.
            } else if (shape.hasTrait(ErrorTrait.class)) {
                if (isModeledException(shape.asStructureShape().get(), protocol)) {
                    subObjects.add(shape);
                }
            } else if (shape.isStructureShape() || shape.isUnionShape()) {
                subObjects.add(shape);
            }
        }

        return new ClassifiedShapes(requests, results, subObjects, enums,
            eventStreamHandlers, outgoingEventStreams);
    }

    /**
     * Determines if an exception shape has members beyond the trivial ones.
     *
     * <p>For JSON/CBOR protocols, trivial members are: Message, message.
     * For XML protocols, trivial members are: Message, message, Code, code.
     * If the exception has any member not in the trivial set, it is "modeled"
     * and should generate as a sub-object. Also used by {@code EventStreamRenderer} to decide
     * whether an event-stream union's exception member is typed as its concrete shape (modeled)
     * or the generic {@code <namespace>Error} wrapper (non-modeled).
     */
    public static boolean isModeledException(StructureShape shape, Protocol protocol) {
        Set<String> members = shape.getAllMembers().keySet();
        Set<String> trivialJson = Set.of("Message", "message");
        Set<String> trivialXml = Set.of("Message", "message", "Code", "code");

        Set<String> trivial = protocol.isXmlLike() ? trivialXml : trivialJson;
        // Has members beyond the trivial ones -> it's modeled
        return members.stream().anyMatch(m -> !trivial.contains(m));
    }

    /**
     * True if the structure has a raw streaming httpPayload member. Matching C2J's
     * {@code isStreamingPayloadMember} (CppViewHelper), an {@code @httpPayload} member is a raw
     * stream when its target is a blob or string (or is explicitly {@code @streaming}) and it is
     * not an event stream — no {@code @streaming} trait is required for blob/string payloads.
     */
    private static boolean hasRawStreamingPayload(StructureShape shape, Model model) {
        for (MemberShape member : shape.getAllMembers().values()) {
            if (!member.hasTrait(HttpPayloadTrait.class) || StreamingTrait.isEventStream(model, member)) {
                continue;
            }
            Shape target = model.expectShape(member.getTarget());
            if (target.isBlobShape() || target.isStringShape() || target.hasTrait(StreamingTrait.class)) {
                return true;
            }
        }
        return false;
    }

    /**
     * Returns true if the structure has a member targeting a union with the @streaming trait
     * (i.e., an event stream member).
     */
    private static boolean hasEventStreamMembers(StructureShape shape, Model model) {
        return streamingUnionMember(shape, model).isPresent();
    }

    /** Returns the {@code @streaming} union targeted by a member of {@code shape}, if any. */
    private static Optional<UnionShape> streamingUnionMember(StructureShape shape, Model model) {
        for (MemberShape member : shape.getAllMembers().values()) {
            Shape target = model.expectShape(member.getTarget());
            if (target.isUnionShape() && target.hasTrait(StreamingTrait.class)) {
                return target.asUnionShape();
            }
        }
        return Optional.empty();
    }

    /**
     * Returns true if the operation's output structure has an event stream (a member
     * targeting a {@code @streaming} union). This is the response-side (read) test.
     *
     * @param op    the operation
     * @param model the Smithy model
     * @return true if the operation produces an event stream response
     */
    public static boolean isEventStreamResponseOperation(OperationShape op, Model model) {
        return op.getOutput()
            .flatMap(model::getShape)
            .flatMap(Shape::asStructureShape)
            .map(out -> hasEventStreamMembers(out, model))
            .orElse(false);
    }

    /**
     * Returns true if the operation's input structure has an event stream (a member
     * targeting a {@code @streaming} union). This is the request-side (write) test,
     * used only to flag bidirectional requests; input-stream encoder generation is
     * out of scope.
     *
     * @param op    the operation
     * @param model the Smithy model
     * @return true if the operation consumes an event stream request
     */
    public static boolean isEventStreamRequestOperation(OperationShape op, Model model) {
        return op.getInput()
            .flatMap(model::getShape)
            .flatMap(Shape::asStructureShape)
            .map(in -> hasEventStreamMembers(in, model))
            .orElse(false);
    }

    /**
     * Returns true if the operation's input structure has a raw streaming httpPayload member
     * (a blob/string {@code @httpPayload}, or an explicitly {@code @streaming} payload, that is
     * not an event stream). Such requests derive from {@code Streaming<Prefix>Request} in C2J.
     *
     * @param op    the operation
     * @param model the Smithy model
     * @return true if the operation's input binds a raw streaming payload
     */
    public static boolean isRawStreamingPayloadRequest(OperationShape op, Model model) {
        return op.getInput()
            .flatMap(model::getShape)
            .flatMap(Shape::asStructureShape)
            .map(in -> hasRawStreamingPayload(in, model))
            .orElse(false);
    }

    /**
     * Returns the member name of the raw streaming {@code @httpPayload} member of {@code shape},
     * or empty if there is none. Matches the {@link #hasRawStreamingPayload} predicate.
     */
    public static Optional<String> rawStreamingPayloadMemberName(StructureShape shape, Model model) {
        for (MemberShape member : shape.getAllMembers().values()) {
            if (!member.hasTrait(HttpPayloadTrait.class) || StreamingTrait.isEventStream(model, member)) {
                continue;
            }
            Shape target = model.expectShape(member.getTarget());
            if (target.isBlobShape() || target.isStringShape() || target.hasTrait(StreamingTrait.class)) {
                return Optional.of(member.getMemberName());
            }
        }
        return Optional.empty();
    }

    /**
     * Returns the name of the member that targets a {@code @streaming} union (the event-stream
     * input member), or empty if there is none. Such a member is sent as an encoded event stream
     * via {@code GetBody()}, so it is rendered as a {@code std::shared_ptr<Union>} rather than a
     * value member.
     */
    public static Optional<String> eventStreamMemberName(StructureShape shape, Model model) {
        for (MemberShape member : shape.getAllMembers().values()) {
            Shape target = model.expectShape(member.getTarget());
            if (target.isUnionShape() && target.hasTrait(StreamingTrait.class)) {
                return Optional.of(member.getMemberName());
            }
        }
        return Optional.empty();
    }
}
