/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

 package com.amazonaws.util.awsclientgenerator.domainmodels.c2j;

 import com.google.gson.annotations.SerializedName;
 import lombok.Data;
 
 import java.util.List;
 import java.util.Map;

public class Acceptor {
    String expected;
    String matcher;
    String stats;
    String argument;
}
