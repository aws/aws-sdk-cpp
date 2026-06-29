/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model;

import com.amazonaws.util.awsclientsmithygenerator.generators.model.ProtocolResolver.Protocol;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms.GlobalTransforms;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.knowledge.TopDownIndex;
import software.amazon.smithy.model.shapes.*;
import software.amazon.smithy.model.traits.*;

import java.util.*;
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
     * Classification bucket for a shape.
     */
    public enum Classification {
        REQUEST, RESULT, SUB_OBJECT, ENUM,
        EVENT_STREAM_HANDLER, BLOB_PAYLOAD_EVENT, OUTGOING_EVENT_STREAM, SKIP
    }

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
     * @param requests            operation input shapes
     * @param results             operation output shapes (excluding event-stream-bearing)
     * @param subObjects          remaining StructureShape/UnionShape reachable from operations
     * @param enums               EnumShape or StringShape with @enum trait
     * @param eventStreamHandlers operation + request/result shape tuples for event stream handlers
     * @param blobPayloadEvents   event shapes with blob payloads (header only)
     * @param outgoingEventStreams outgoing event stream shapes (header only)
     */
    public record ClassifiedShapes(
        List<StructureShape> requests,
        List<StructureShape> results,
        List<Shape> subObjects,
        List<Shape> enums,
        List<EventStreamInfo> eventStreamHandlers,
        List<StructureShape> blobPayloadEvents,
        List<Shape> outgoingEventStreams
    ) {}

    private ShapeClassifier() {}

    /**
     * Classifies all shapes reachable from the given service into generation buckets.
     *
     * @param model   the Smithy model
     * @param service the service shape whose operations define the root set
     * @return classified shapes grouped by generation bucket
     */
    public static ClassifiedShapes classify(Model model, ServiceShape service) {
        Protocol protocol = ProtocolResolver.resolve(service, model);
        TopDownIndex index = TopDownIndex.of(model);
        Set<ShapeId> reachable = GlobalTransforms.computeReachableShapes(model, service);

        Set<ShapeId> inputShapeIds = new HashSet<>();
        Set<ShapeId> outputShapeIds = new HashSet<>();

        List<StructureShape> requests = new ArrayList<>();
        List<StructureShape> results = new ArrayList<>();
        List<Shape> subObjects = new ArrayList<>();
        List<Shape> enums = new ArrayList<>();
        List<EventStreamInfo> eventStreamHandlers = new ArrayList<>();
        List<StructureShape> blobPayloadEvents = new ArrayList<>();
        List<Shape> outgoingEventStreams = new ArrayList<>();

        // Collect operation inputs/outputs and identify event stream handlers
        for (OperationShape op : index.getContainedOperations(service)) {
            op.getInput().ifPresent(id -> {
                inputShapeIds.add(id);
                model.getShape(id).flatMap(Shape::asStructureShape).ifPresent(s -> {
                    requests.add(s);

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
                });
            });
            op.getOutput().ifPresent(id -> {
                outputShapeIds.add(id);
                model.getShape(id).flatMap(Shape::asStructureShape).ifPresent(s -> {
                    if (!hasEventStreamMembers(s, model)) {
                        results.add(s);
                    }
                    // If has event stream members, result is skipped (handler generated instead)
                });
            });
        }

        // Walk all reachable shapes and classify remaining ones
        for (ShapeId id : reachable) {
            Shape shape = model.expectShape(id);
            if (inputShapeIds.contains(id) || outputShapeIds.contains(id)) continue;
            if (shape.isDocumentShape()) continue;

            // Enum classification
            if (shape.isEnumShape() || (shape.isStringShape() && shape.hasTrait(EnumTrait.class))) {
                enums.add(shape);
                continue;
            }

            // Error/exception classification
            if (shape.hasTrait(ErrorTrait.class)) {
                if (isModeledException(shape.asStructureShape().get(), protocol)) {
                    subObjects.add(shape);
                }
                continue;
            }

            // Structure/Union -> sub-object
            if (shape.isStructureShape() || shape.isUnionShape()) {
                subObjects.add(shape);
            }
        }

        return new ClassifiedShapes(requests, results, subObjects, enums,
            eventStreamHandlers, blobPayloadEvents, outgoingEventStreams);
    }

    /**
     * Determines if an exception shape has members beyond the trivial ones.
     *
     * <p>For JSON/CBOR protocols, trivial members are: Message, message.
     * For XML protocols, trivial members are: Message, message, Code, code.
     * If the exception has any member not in the trivial set, it is "modeled"
     * and should generate as a sub-object.
     */
    private static boolean isModeledException(StructureShape shape, Protocol protocol) {
        Set<String> members = shape.getAllMembers().keySet();
        Set<String> trivialJson = Set.of("Message", "message");
        Set<String> trivialXml = Set.of("Message", "message", "Code", "code");

        Set<String> trivial = protocol.isXmlLike() ? trivialXml : trivialJson;
        // Has members beyond the trivial ones -> it's modeled
        return members.stream().anyMatch(m -> !trivial.contains(m));
    }

    /**
     * Returns true if the structure has a member targeting a union with the @streaming trait
     * (i.e., an event stream member).
     */
    private static boolean hasEventStreamMembers(StructureShape shape, Model model) {
        return shape.getAllMembers().values().stream().anyMatch(member -> {
            Shape target = model.expectShape(member.getTarget());
            return target.isUnionShape() && target.hasTrait(StreamingTrait.class);
        });
    }
}
