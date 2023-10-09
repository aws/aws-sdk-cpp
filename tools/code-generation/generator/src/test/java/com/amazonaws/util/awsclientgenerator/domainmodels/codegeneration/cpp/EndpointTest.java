/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

package com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.cpp;

import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.Endpoint;
import org.junit.Test;

import java.util.List;

import static org.junit.Assert.assertEquals;

public class EndpointTest {

    @Test
    public void testParseHostPrefixParts() {
        Endpoint endpoint = new Endpoint();
        
        endpoint.setHostPrefix("abc{Var1}-{var2}.{var3}12.3{var4}{var5}");
        List<String> parts = endpoint.getHostPrefixParts();
        assertEquals(6, parts.size());
        assertEquals("abc", parts.get(0));
        assertEquals("-", parts.get(1));
        assertEquals(".", parts.get(2));
        assertEquals("12.3", parts.get(3));
        assertEquals("", parts.get(4)); // between {var4} and {var5}
        assertEquals("", parts.get(5)); // last empty

        List<String> members = endpoint.getMemberReferences();
        assertEquals(5, members.size());
        assertEquals("Var1", members.get(0));
        assertEquals("var2", members.get(1));
        assertEquals("var3", members.get(2));
        assertEquals("var4", members.get(3));
        assertEquals("var5", members.get(4));

        String hostPrefix = "\"abc\" + request.GetVar1() + \"-\" + request.GetVar2() + \".\" + request.GetVar3() + \"12.3\" + request.GetVar4() + \"\" + request.GetVar5() + \"\"";
        assertEquals(hostPrefix, endpoint.constructHostPrefixString("request"));

        endpoint.setHostPrefix("{Var1}-{var2}.{var3}123{var4}{var5}");
        parts = endpoint.getHostPrefixParts();
        assertEquals(6, parts.size());
        assertEquals("", parts.get(0)); // before {var1}
        assertEquals("-", parts.get(1));
        assertEquals(".", parts.get(2));
        assertEquals("123", parts.get(3));
        assertEquals("", parts.get(4)); 
        assertEquals("", parts.get(5));

        members = endpoint.getMemberReferences();
        assertEquals(5, members.size());
        assertEquals("Var1", members.get(0));
        assertEquals("var2", members.get(1));
        assertEquals("var3", members.get(2));
        assertEquals("var4", members.get(3));
        assertEquals("var5", members.get(4));

        hostPrefix = "\"\" + request.GetVar1() + \"-\" + request.GetVar2() + \".\" + request.GetVar3() + \"123\" + request.GetVar4() + \"\" + request.GetVar5() + \"\"";
        assertEquals(hostPrefix, endpoint.constructHostPrefixString("request"));

        endpoint.setHostPrefix("{Var1}-{var2}.{var3}123{var4}{var5}abc");
        parts = endpoint.getHostPrefixParts();
        assertEquals(6, parts.size());
        assertEquals("", parts.get(0));
        assertEquals("-", parts.get(1));
        assertEquals(".", parts.get(2));
        assertEquals("123", parts.get(3));
        assertEquals("", parts.get(4));
        assertEquals("abc", parts.get(5));

        members = endpoint.getMemberReferences();
        assertEquals(5, members.size());
        assertEquals("Var1", members.get(0));
        assertEquals("var2", members.get(1));
        assertEquals("var3", members.get(2));
        assertEquals("var4", members.get(3));
        assertEquals("var5", members.get(4));

        hostPrefix = "\"\" + request.GetVar1() + \"-\" + request.GetVar2() + \".\" + request.GetVar3() + \"123\" + request.GetVar4() + \"\" + request.GetVar5() + \"abc\"";
        assertEquals(hostPrefix, endpoint.constructHostPrefixString("request"));
    }
}
