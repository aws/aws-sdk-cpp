/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

package com.amazonaws.util.awsclientgenerator.transform;

import com.amazonaws.util.awsclientgenerator.domainmodels.c2j_protocol_test.*;
import com.amazonaws.util.awsclientgenerator.domainmodels.protocol_test.EventStreamTestCase;
import com.amazonaws.util.awsclientgenerator.domainmodels.protocol_test.EventStreamTestSuite;
import com.amazonaws.util.awsclientgenerator.domainmodels.protocol_test.ProtocolTestCase;
import com.amazonaws.util.awsclientgenerator.domainmodels.protocol_test.ProtocolTestModel;
import com.amazonaws.util.awsclientgenerator.domainmodels.protocol_test.ProtocolTestSuite;

import com.fasterxml.jackson.databind.JsonNode;

import java.util.ArrayList;
import java.util.Base64;
import java.util.Collections;
import java.util.HashMap;
import java.util.HashSet;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import java.util.Optional;
import java.util.regex.Matcher;
import java.util.regex.Pattern;
import java.util.stream.Collectors;


public class C2jProtocolTestToGeneratorModelTransformer {

    private static final String EVENT_STREAM_CONTENT_TYPE = "application/vnd.amazon.eventstream";
    private static final Pattern TEST_SUITE_PATTERN = Pattern.compile("Test cases for ([a-zA-Z0-9]+) operation");
    private HashMap<String, Integer> alreadyUsedTestSuiteNames = new HashMap<>();

    private String getTestSuiteName(String c2jDescription) {
        Matcher matcher = TEST_SUITE_PATTERN.matcher(c2jDescription);
        if (matcher.find()) {
            String name = matcher.group(1);
            if (alreadyUsedTestSuiteNames.containsKey(name)) {
                name += alreadyUsedTestSuiteNames.put(name, alreadyUsedTestSuiteNames.get(name) + 1);
            } else {
                alreadyUsedTestSuiteNames.put(name, 0);
            }
            return name;
        } else {
            throw new RuntimeException("Unable to choose a test suite name for a protocol test model!");
        }
    }

    public ProtocolTestModel convert(C2jTestSuite c2jTestSuite) {
        ProtocolTestModel model = new ProtocolTestModel();
        model.setName(c2jTestSuite.getName());
        model.setServiceToUse(c2jTestSuite.getServiceToUse());
        model.setType(c2jTestSuite.getType());
        model.setTestSuites(new ArrayList<ProtocolTestSuite>());


        if (c2jTestSuite.getInputTestSuites() != null) {
            for (C2jInputTestSuite inputTestSuite : c2jTestSuite.getInputTestSuites()) {
                ProtocolTestSuite protocolTestSuite = new ProtocolTestSuite();
                protocolTestSuite.setName(getTestSuiteName(inputTestSuite.getDescription()));
                protocolTestSuite.setDescription(inputTestSuite.getDescription());
                protocolTestSuite.setMetadata(inputTestSuite.getMetadata());
                protocolTestSuite.setClientEndpoint(inputTestSuite.getClientEndpoint());
                protocolTestSuite.setShapes(inputTestSuite.getShapes());
                protocolTestSuite.setCases(new ArrayList<>());

                for (C2jInputTestCase inputTestCase : inputTestSuite.getCases()) {
                    ProtocolTestCase testCase = new ProtocolTestCase();
                    testCase.setId(inputTestCase.getId());
                    testCase.setDescription(inputTestCase.getDescription());
                    testCase.setGiven(inputTestCase.getGiven());

                    Optional<ProtocolTestCase.Input> input = Optional.of(new ProtocolTestCase.Input());
                    input.get().setParams(inputTestCase.getParams());
                    input.get().setSerialized(inputTestCase.getSerialized());
                    if (input.get().getSerialized().getBody() != null) {
                        input.get().getSerialized().setBody(
                            c2jTestSuite.getName().equals("smithy-rpc-v2-cbor") ? input.get().getSerialized().getBody() : Base64.getEncoder().encodeToString(input.get().getSerialized().getBody().getBytes())
                        );
                    }
                    testCase.setInput(input);

                    protocolTestSuite.getCases().add(testCase);
                }
                model.getTestSuites().add(protocolTestSuite);
            }
        }

        if (c2jTestSuite.getOutputTestSuites() != null) {
            for (C2jOutputTestSuite outputTestSuite : c2jTestSuite.getOutputTestSuites()) {
                ProtocolTestSuite protocolTestSuite = new ProtocolTestSuite();
                protocolTestSuite.setName(getTestSuiteName(outputTestSuite.getDescription()));
                protocolTestSuite.setDescription(outputTestSuite.getDescription());
                protocolTestSuite.setMetadata(outputTestSuite.getMetadata());
                protocolTestSuite.setClientEndpoint(outputTestSuite.getClientEndpoint());
                protocolTestSuite.setShapes(outputTestSuite.getShapes());
                protocolTestSuite.setCases(new ArrayList<>());

                for (C2jOutputTestCase outputTestCase : outputTestSuite.getCases()) {
                    ProtocolTestCase testCase = new ProtocolTestCase();
                    testCase.setId(outputTestCase.getId());
                    testCase.setDescription(outputTestCase.getDescription());
                    testCase.setGiven(outputTestCase.getGiven());

                    Optional<ProtocolTestCase.Output> output = Optional.of(new ProtocolTestCase.Output());
                    if (outputTestCase.getError() != null && outputTestCase.getResult() != null) {
                        throw new RuntimeException("Protocol test for output contains both error and success expected result!");
                    }

                    output.get().setResponse(outputTestCase.getResponse());
                    if (output.get().getResponse().getBody() != null) {
                        output.get().getResponse().setBody(
                            c2jTestSuite.getName().equals("smithy-rpc-v2-cbor") ? output.get().getResponse().getBody() : Base64.getEncoder().encodeToString(output.get().getResponse().getBody().getBytes())
                        );
                    }

                    if (outputTestCase.getError() != null) {
                        output.get().setError(true);
                        Optional<ProtocolTestCase.Output.ErrorResult> error = Optional.of(new ProtocolTestCase.Output.ErrorResult());
                        error.get().setError(Optional.of(outputTestCase.getError()));
                        error.get().setErrorMessage(outputTestCase.getErrorMessage());
                        error.get().setErrorCode(outputTestCase.getErrorCode());
                        output.get().setErrorResult(error);
                    } else {
                        output.get().setError(false);
                    }
                    if (outputTestCase.getResult() != null) {
                        Optional<ProtocolTestCase.Output.SuccessResult> success = Optional.of(new ProtocolTestCase.Output.SuccessResult());
                        success.get().setResult(Optional.of(outputTestCase.getResult()));
                        output.get().setSuccessResult(success);
                    }

                    output.get().setResponse(outputTestCase.getResponse());
                    testCase.setOutput(output);
                    protocolTestSuite.getCases().add(testCase);
                }
                model.getTestSuites().add(protocolTestSuite);
            }
        }

        model.setEventStreamTestSuites(Optional.ofNullable(c2jTestSuite.getEventStreamTestSuite())
                .map(C2jProtocolTestToGeneratorModelTransformer::toEventStreamTestSuites)
                .orElseGet(ArrayList::new));

        return model;
    }

    /**
     * Groups the event stream test cases by operation, preserving the order in which the operations first appear.
     */
    private static List<EventStreamTestSuite> toEventStreamTestSuites(final C2jEventStreamTestSuite c2jSuite) {
        return Optional.ofNullable(c2jSuite.getTestCases()).orElse(Collections.emptyList()).stream()
                .map(C2jProtocolTestToGeneratorModelTransformer::toEventStreamTestCase)
                .collect(Collectors.groupingBy(EventStreamTestCase::getOperationName, LinkedHashMap::new, Collectors.toList()))
                .entrySet().stream()
                .map(operationCases -> {
                    EventStreamTestSuite suite = new EventStreamTestSuite();
                    suite.setName(operationCases.getKey());
                    suite.setCases(operationCases.getValue());
                    return suite;
                })
                .collect(Collectors.toList());
    }

    private static EventStreamTestCase toEventStreamTestCase(final C2jEventStreamTestCase c2jCase) {
        List<C2jEventStreamTestEvent> responseEvents = Optional.ofNullable(c2jCase.getEvents()).orElse(Collections.emptyList()).stream()
                .filter(event -> "response".equalsIgnoreCase(event.getType()))
                .collect(Collectors.toList());
        Optional<C2jEventStreamInitialResponse> initialResponse = Optional.ofNullable(c2jCase.getInitialResponse());

        EventStreamTestCase testCase = new EventStreamTestCase();
        testCase.setId(c2jCase.getId());
        testCase.setOperationName(c2jCase.getOperationName());
        testCase.setInitialRequest(c2jCase.getInitialRequest());
        testCase.setResponseStatusCode(initialResponse.map(C2jEventStreamInitialResponse::getCode).orElse(200));
        testCase.setResponseHeaders(initialResponse.map(C2jEventStreamInitialResponse::getHeaders)
                .orElse(Collections.singletonMap("Content-Type", EVENT_STREAM_CONTENT_TYPE)));
        testCase.setResponseBody(Base64.getEncoder().encodeToString(EventStreamMessageEncoder.encode(responseEvents)));
        testCase.setInitialResponseParams(c2jCase.getInitialResponseParams());
        testCase.setExpectedEventGroups(toExpectedEventGroups(responseEvents));
        return testCase;
    }

    /**
     * Collects the params of every response event that carries them, keyed by the event stream union member they target.
     */
    private static List<EventStreamTestCase.ExpectedEventGroup> toExpectedEventGroups(final List<C2jEventStreamTestEvent> responseEvents) {
        Map<String, List<JsonNode>> paramsByMember = responseEvents.stream()
                .filter(event -> event.getParams() != null && event.getParams().size() == 1)
                .map(C2jEventStreamTestEvent::getParams)
                .collect(Collectors.groupingBy(params -> params.fieldNames().next(), LinkedHashMap::new,
                        Collectors.mapping(params -> params.elements().next(), Collectors.toList())));
        return paramsByMember.entrySet().stream()
                .map(memberParams -> {
                    EventStreamTestCase.ExpectedEventGroup group = new EventStreamTestCase.ExpectedEventGroup();
                    group.setMemberName(memberParams.getKey());
                    group.setParams(memberParams.getValue());
                    return group;
                })
                .collect(Collectors.toList());
    }
}
