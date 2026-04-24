/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

package com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.cpp;

import org.junit.Test;

import static java.util.Arrays.asList;
import static org.junit.Assert.assertEquals;
import static org.junit.Assert.assertTrue;
import static org.junit.Assert.assertFalse;

public class EnumModelTest {

    @Test
    public void invalidChars() {

        EnumModel testEnum = new EnumModel("TestNamespace", "TESTENUM",
                asList("PACKAGE.NAME", "HYPHENS-ROCK", "OH:DARK:THIRTY", "Evangelion: 3.0+1.0"));

        assertEquals(4, testEnum.getMembers().size());
        assertEquals("PACKAGE_NAME", testEnum.getMembers().get(0).getMemberName());
        assertEquals("HYPHENS_ROCK", testEnum.getMembers().get(1).getMemberName());
        assertEquals("OH_DARK_THIRTY", testEnum.getMembers().get(2).getMemberName());
        assertEquals("Evangelion_3_0_1_0", testEnum.getMembers().get(3).getMemberName());
    }

    @Test
    public void invalidWord() {

        EnumModel testEnum = new EnumModel("TestNamespace", "TESTENUM", asList("DELETE"));

        assertEquals(1, testEnum.getMembers().size());
        assertEquals("DELETE_", testEnum.getMembers().get(0).getMemberName());
    }

    @Test
    public void predefinedSymbols() {

        EnumModel testEnum = new EnumModel("DynamoDB", "TESTENUM", asList("IN"));

        assertTrue(testEnum.getMembers().get(0).isPredefined());

        testEnum = new EnumModel("EC2", "TESTENUM", asList("NOT_SET", "interface"));

        assertFalse(testEnum.getMembers().get(0).isPredefined());
        assertTrue(testEnum.getMembers().get(1).isPredefined());

        testEnum = new EnumModel("S3Crt", "TESTENUM", asList("IGNORE", "NOT_SET"));

        assertTrue(testEnum.getMembers().get(0).isPredefined());
        assertFalse(testEnum.getMembers().get(1).isPredefined());
    }
}
