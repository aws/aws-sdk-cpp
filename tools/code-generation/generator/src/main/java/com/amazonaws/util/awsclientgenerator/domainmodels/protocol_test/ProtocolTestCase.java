/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

package com.amazonaws.util.awsclientgenerator.domainmodels.protocol_test;

import com.amazonaws.util.awsclientgenerator.domainmodels.c2j_protocol_test.C2jGiven;
import com.amazonaws.util.awsclientgenerator.domainmodels.c2j_protocol_test.C2jInputSerialized;
import com.amazonaws.util.awsclientgenerator.domainmodels.c2j_protocol_test.C2jOutputResponse;
import com.fasterxml.jackson.databind.JsonNode;
import lombok.Data;

import java.util.Optional;

@Data
public class ProtocolTestCase {

    // Smithy test case definitions unlike c2j do not differentiate input/output cases
    // Using generic, more smithy-like intermediate codegen model.
    @Data
    public static class Input {
        /**
         * The input parameters a user would provide.
         */
        private JsonNode params;
        /**
         * The expected serialized HTTP request.
         */
        private C2jInputSerialized serialized;
    }

    @Data
    public static class Output {
        @Data
        public static class SuccessResult {
            /**
             * A JSON hash representing the structure of the parsed response. Either this or error (not both) must appear in the test case.
             */
            private Optional<JsonNode> result;
        }

        @Data
        public static class ErrorResult {
            /**
             * A JSON hash representing the structure of the parsed error response. Either this or result (not both) must appear in the test case.
             */
            private Optional<JsonNode> error;
            /**
             * A string specifying the AWS error code extracted from the response. Corresponds to the error shape to be unmarshalled and
             * should always be set, even when the shape can not be found. Must be present when the error key is present.
             */
            private String errorCode;
            /**
             * A string specifying the error message extracted from the response.
             * Should be able to be extracted even when an error shape is not unmarshalled. May only be present when the error key is present.
             */
            private String errorMessage;
        }

        private boolean isError;

        // Success or error must be present
        Optional<SuccessResult> successResult;
        Optional<ErrorResult> errorResult;

        /**
         * The HTTP response to be parsed
         */
        private C2jOutputResponse response;
    }

    /**
     * A test case id.
     */
    private String id;
    /**
     * A test case description.
     */
    private String description;
    /**
     * This corresponds to the JSON object that would define an operation in the service's JSON model.
     * Valid keys include http, input, endpoint, and name.
     */
    private C2jGiven given;

    // Input or output must be present
    Optional<Input> input;
    Optional<Output> output;
}
