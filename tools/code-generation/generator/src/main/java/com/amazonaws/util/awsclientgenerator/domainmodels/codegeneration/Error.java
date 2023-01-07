/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

package com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration;

import lombok.Data;
import lombok.EqualsAndHashCode;

@Data
@EqualsAndHashCode(of={"name"})
public class Error {
    private String name;
    private String text;
    private String documentation;
    private boolean exception;
    private boolean fault;
    private boolean isRetryable;
    private boolean isCoreError;
    private boolean isModeled;

}
