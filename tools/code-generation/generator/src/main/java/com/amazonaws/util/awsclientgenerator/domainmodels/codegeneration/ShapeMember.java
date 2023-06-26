/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

package com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration;

import lombok.Data;

import java.util.Map;

@Data
public class ShapeMember {
    Shape shape;
    boolean idempotencyToken;
    //This field has be set to false for all shape members for serialization purposes to do HasBeenSet.
    //Right now we need the real value of this field to do parameter validation before sending out the request.
    //It's preferred to use this value but it appears in multiple places. Change current value 'false' to it's 'real value' is risky.
    //It's safer to copy it's value to another variable (now isValidationNeeded) and validate based on that.
    boolean isRequired;
    boolean isValidationNeeded;
    boolean streaming;
    String documentation;
    String location;
    String locationName;
    String queryName;
    Map<String, String> contextParam;
    XmlNamespace xmlNamespace;
    boolean isFlattened;
    boolean isCustomizedQuery;
    boolean isEventPayload;
    boolean isEventHeader;
    boolean hostLabel;
    boolean endpointDiscoveryId;
    boolean xmlAttribute;

    public boolean isUsedForHeader() {
        return "header".equals(location) || "headers".equals(location);
    }

    public boolean isUsedForUri() {
        return "uri".equals(location);
    }

    public boolean isUsedForHttpStatusCode() {
        return "statusCode".equals(location);
    }

    public boolean isUsedForQueryString() {
        return "querystring".equals(location);
    }

    public boolean isUsedForPayload() {
        return !isUsedForHeader() && !isUsedForUri() && !isUsedForHttpStatusCode() && !isUsedForQueryString() && !streaming;
    }

    public boolean requiresHeaderEncoding() {
        return isUsedForHeader() && "x-amz-copy-source".equals(locationName);
    }
}
