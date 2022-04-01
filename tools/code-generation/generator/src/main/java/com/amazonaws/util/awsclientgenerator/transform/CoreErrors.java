/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

package com.amazonaws.util.awsclientgenerator.transform;

import java.util.HashMap;
import java.util.Map;

public class CoreErrors
{
    public static final HashMap<String, String> VARIANTS = new HashMap<>();

    static {
        VARIANTS.put("IncompleteSignature", "INCOMPLETE_SIGNATURE");
        VARIANTS.put("IncompleteSignatureException", "INCOMPLETE_SIGNATURE");
        VARIANTS.put("InternalFailure", "INTERNAL_FAILURE");
        VARIANTS.put("InternalError", "INTERNAL_FAILURE");
        VARIANTS.put("InternalFailureException", "INTERNAL_FAILURE");
        VARIANTS.put("InvalidAction", "INVALID_ACTION");
        VARIANTS.put("InvalidActionException", "INVALID_ACTION");
        VARIANTS.put("InvalidClientTokenId", "INVALID_CLIENT_TOKEN_ID");
        VARIANTS.put("InvalidClientTokenIdException", "INVALID_CLIENT_TOKEN_ID");
        VARIANTS.put("InvalidParameterCombination", "INVALID_PARAMETER_COMBINATION");
        VARIANTS.put("InvalidParameterCombinationException", "INVALID_PARAMETER_COMBINATION");
        VARIANTS.put("InvalidParameterValue", "INVALID_PARAMETER_VALUE");
        VARIANTS.put("InvalidParameterValueException", "INVALID_PARAMETER_VALUE");
        VARIANTS.put("InvalidQueryParameter", "INVALID_QUERY_PARAMETER");
        VARIANTS.put("InvalidQueryParameterException", "INVALID_QUERY_PARAMETER");
        VARIANTS.put("MalformedQueryString", "MALFORMED_QUERY_STRING");
        VARIANTS.put("MalformedQueryStringException", "MALFORMED_QUERY_STRING");
        VARIANTS.put("MissingAction", "MISSING_ACTION");
        VARIANTS.put("MissingActionException", "MISSING_ACTION");
        VARIANTS.put("MissingAuthenticationToken", "MISSING_AUTHENTICATION_TOKEN");
        VARIANTS.put("MissingAuthenticationTokenException", "MISSING_AUTHENTICATION_TOKEN");
        VARIANTS.put("MissingParameter", "MISSING_PARAMETER");
        VARIANTS.put("MissingParameterException", "MISSING_PARAMETER");
        VARIANTS.put("OptInRequired", "OPT_IN_REQUIRED");
        VARIANTS.put("OptInRequiredException", "OPT_IN_REQUIRED");
        VARIANTS.put("RequestExpired", "REQUEST_EXPIRED");
        VARIANTS.put("RequestExpiredException", "REQUEST_EXPIRED");
        VARIANTS.put("ServiceUnavailable", "SERVICE_UNAVAILABLE");
        VARIANTS.put("ServiceUnavailableException", "SERVICE_UNAVAILABLE");
        VARIANTS.put("ServiceUnavailableError", "SERVICE_UNAVAILABLE");
        VARIANTS.put("Throttling", "THROTTLING");
        VARIANTS.put("ThrottlingException", "THROTTLING");
        VARIANTS.put("ThrottledException", "THROTTLING");
        VARIANTS.put("RequestThrottledException", "THROTTLING");
        VARIANTS.put("RequestThrottled", "THROTTLING");
        VARIANTS.put("ValidationError", "VALIDATION");
        VARIANTS.put("ValidationErrorException", "VALIDATION");
        VARIANTS.put("ValidationException", "VALIDATION");
        VARIANTS.put("AccessDenied", "ACCESS_DENIED");
        VARIANTS.put("AccessDeniedException", "ACCESS_DENIED");
        VARIANTS.put("ResourceNotFound", "RESOURCE_NOT_FOUND");
        VARIANTS.put("ResourceNotFoundException", "RESOURCE_NOT_FOUND");
        VARIANTS.put("UnrecognizedClient", "UNRECOGNIZED_CLIENT");
        VARIANTS.put("UnrecognizedClientException", "UNRECOGNIZED_CLIENT");
        VARIANTS.put("InternalServerError", "INTERNAL_FAILURE");
        VARIANTS.put("SlowDown", "SLOW_DOWN");
        VARIANTS.put("SlowDownException", "SLOW_DOWN");
        VARIANTS.put("RequestTimeTooSkewed", "REQUEST_TIME_TOO_SKEWED");
        VARIANTS.put("RequestTimeTooSkewedException", "REQUEST_TIME_TOO_SKEWED");
        VARIANTS.put("InvalidSignature", "INVALID_SIGNATURE");
        VARIANTS.put("InvalidSignatureException", "INVALID_SIGNATURE");
        VARIANTS.put("SignatureDoesNotMatch", "SIGNATURE_DOES_NOT_MATCH");
        VARIANTS.put("SignatureDoesNotMatchException", "SIGNATURE_DOES_NOT_MATCH");
        VARIANTS.put("InvalidAccessKeyId", "INVALID_ACCESS_KEY_ID");
        VARIANTS.put("InvalidAccessKeyIdException", "INVALID_ACCESS_KEY_ID");
        VARIANTS.put("RequestTimeout", "REQUEST_TIMEOUT");
        VARIANTS.put("RequestTimeoutException", "REQUEST_TIMEOUT");
    }

}
