/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

package com.amazonaws.util.awsclientgenerator.domainmodels;

import lombok.Data;

@Data
public class SdkFileEntry {
    private StringBuffer sdkFile;
    private String pathRelativeToRoot;
    private boolean needsByteOrderMark;
}
