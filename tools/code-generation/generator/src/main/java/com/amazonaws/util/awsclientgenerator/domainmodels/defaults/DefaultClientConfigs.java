/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

package com.amazonaws.util.awsclientgenerator.domainmodels.defaults;

import lombok.Data;
import java.util.Map;


@Data
public class DefaultClientConfigs {
    String version;
    Map<String, BaseOption> base;
    Map<String, Map<String, BaseOptionModifier>> modes;
    Map<String, Map<String, String>> documentation;
}