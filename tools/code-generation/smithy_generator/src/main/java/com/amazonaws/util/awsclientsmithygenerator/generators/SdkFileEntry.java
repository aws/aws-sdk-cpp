/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

package com.amazonaws.util.awsclientsmithygenerator.generators;
 
import lombok.Data;

@Data
public class SdkFileEntry {
    public StringBuffer sdkFile;
    private String pathRelativeToRoot;
    private boolean needsByteOrderMark;
}
