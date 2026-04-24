/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

package com.amazonaws.util.awsclientgenerator.domainmodels.c2j;

import lombok.Data;

@Data
public class C2jError extends C2jShapeMember {
    private boolean exception;
    private boolean fault;
    private C2jErrorInfo error;
}
