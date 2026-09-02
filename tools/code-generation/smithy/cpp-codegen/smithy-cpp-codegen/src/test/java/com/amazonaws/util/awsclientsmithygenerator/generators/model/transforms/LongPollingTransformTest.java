/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms;

import org.junit.jupiter.api.Test;
import software.amazon.smithy.aws.traits.ServiceTrait;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.shapes.OperationShape;
import software.amazon.smithy.model.shapes.ServiceShape;
import software.amazon.smithy.model.shapes.ShapeId;
import software.amazon.smithy.model.shapes.StringShape;
import software.amazon.smithy.model.shapes.StructureShape;

import java.util.ArrayList;
import java.util.List;

import static org.junit.jupiter.api.Assertions.assertFalse;
import static org.junit.jupiter.api.Assertions.assertSame;
import static org.junit.jupiter.api.Assertions.assertTrue;

class LongPollingTransformTest {

    private static ServiceShape service(Model m) {
        return m.expectShape(ShapeId.from("com.example#TestService"), ServiceShape.class);
    }

    private static boolean stamped(Model m, String requestShapeName) {
        return m.expectShape(ShapeId.from("com.example#" + requestShapeName), StructureShape.class)
            .hasTrait(LongPollingTrait.class);
    }

    private static ServiceTrait serviceTrait(String sdkId) {
        return ServiceTrait.builder().sdkId(sdkId).arnNamespace("ns")
            .cloudFormationName("Cfn").cloudTrailEventSource("src").build();
    }

    /** Builds a service with the given sdkId containing one input+operation per op name. */
    private static Model model(String sdkId, String... opNames) {
        StringShape str = StringShape.builder().id("com.example#String").build();
        List<software.amazon.smithy.model.shapes.Shape> shapes = new ArrayList<>();
        shapes.add(str);
        ServiceShape.Builder serviceB = ServiceShape.builder()
            .id("com.example#TestService").version("2024-01-01")
            .addTrait(serviceTrait(sdkId));
        for (String opName : opNames) {
            StructureShape input = StructureShape.builder()
                .id("com.example#" + opName + "Request").addMember("name", str.getId()).build();
            OperationShape op = OperationShape.builder()
                .id("com.example#" + opName).input(input.getId()).build();
            shapes.add(input);
            shapes.add(op);
            serviceB.addOperation(op.getId());
        }
        shapes.add(serviceB.build());
        return Model.assembler()
            .addShapes(shapes.toArray(new software.amazon.smithy.model.shapes.Shape[0]))
            .assemble().unwrap();
    }

    @Test
    void sqsReceiveMessage_stampsOnlyReceiveMessageInput() {
        Model m = model("SQS", "ReceiveMessage", "SendMessage");
        Model out = LongPollingTransform.asTransform().apply(m, service(m));
        assertTrue(stamped(out, "ReceiveMessageRequest"),
            "SQS ReceiveMessage input must be stamped");
        assertFalse(stamped(out, "SendMessageRequest"),
            "a non-long-polling SQS operation must not be stamped");
    }

    @Test
    void swf_stampsBothPollOperations() {
        Model m = model("SWF", "PollForActivityTask", "PollForDecisionTask", "StartWorkflowExecution");
        Model out = LongPollingTransform.asTransform().apply(m, service(m));
        assertTrue(stamped(out, "PollForActivityTaskRequest"),
            "SWF PollForActivityTask input must be stamped");
        assertTrue(stamped(out, "PollForDecisionTaskRequest"),
            "SWF PollForDecisionTask input must be stamped");
        assertFalse(stamped(out, "StartWorkflowExecutionRequest"),
            "a non-long-polling SWF operation must not be stamped");
    }

    @Test
    void sfnGetActivityTask_stampsInput() {
        Model m = model("SFN", "GetActivityTask", "StartExecution");
        Model out = LongPollingTransform.asTransform().apply(m, service(m));
        assertTrue(stamped(out, "GetActivityTaskRequest"),
            "SFN GetActivityTask input must be stamped");
        assertFalse(stamped(out, "StartExecutionRequest"),
            "a non-long-polling SFN operation must not be stamped");
    }

    @Test
    void unrelatedService_stampsNothing() {
        Model m = model("DynamoDB", "GetItem", "ReceiveMessage");
        Model out = LongPollingTransform.asTransform().apply(m, service(m));
        assertSame(m, out, "an unrelated service must leave the model untouched");
        assertFalse(stamped(out, "ReceiveMessageRequest"),
            "an operation on an unrelated service must not be stamped even if its name matches");
    }
}
