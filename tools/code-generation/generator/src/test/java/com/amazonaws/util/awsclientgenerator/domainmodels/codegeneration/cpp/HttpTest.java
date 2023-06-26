/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

package com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.cpp;

import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.Http;
import org.junit.Test;

import java.util.List;

import static org.junit.Assert.assertEquals;

public class HttpTest {

    @Test
    public void testParseHttpURIParts() {
        Http http = new Http();
        http.setRequestUri("/test/{var-1}/test1/{var2}");

        List<String> parts = http.getRequestUriParts();
        assertEquals(2, parts.size());
        assertEquals("/test/", parts.get(0));
        assertEquals("/test1/", parts.get(1));

        http.setRequestUri("/test/{var1}/{var-2}");

        parts = http.getRequestUriParts();
        assertEquals(2, parts.size());
        assertEquals("/test/", parts.get(0));
        assertEquals("/", parts.get(1));

        http.setRequestUri("/test/{var1}/test1/{var2+}?varParam={var-3}");
        parts = http.getRequestUriParts();
        assertEquals(3, parts.size());
        assertEquals("/test/", parts.get(0));
        assertEquals("/test1/", parts.get(1));
        assertEquals("?varParam=", parts.get(2));

        http.setRequestUri("/");
        parts = http.getRequestUriParts();
        assertEquals(1, parts.size());
        assertEquals("/", parts.get(0));
    }

    @Test
    public void testParseHttpParameters() {
        Http http = new Http();
        http.setRequestUri("/test/{var-1}/test1/{var2}");

        List<String> vars = http.getRequestParameters();
        assertEquals(2, vars.size());
        assertEquals("var-1", vars.get(0));
        assertEquals("var2", vars.get(1));

        http.setRequestUri("/test/{var1}/{var2-}");

        vars = http.getRequestParameters();
        assertEquals(2, vars.size());
        assertEquals("var1", vars.get(0));
        assertEquals("var2-", vars.get(1));

        http.setRequestUri("/test/{var1}/test1/{var2+}?varParam={var-3}&varParam2={var-4}");
        vars = http.getRequestParameters();
        assertEquals(4, vars.size());
        assertEquals("var1", vars.get(0));
        assertEquals("var2+", vars.get(1));
        assertEquals("var-3", vars.get(2));
        assertEquals("var-4", vars.get(3));

        http.setRequestUri("/");
        vars = http.getRequestParameters();
        assertEquals(0, vars.size());
    }

    @Test
    public void testSplitUriPartIntoPathAndQuery() {
        Http http = new Http();
        String requestUri = "/test?varParam=var";

        List<String> pathAndQuery = http.splitUriPartIntoPathAndQuery(requestUri);
        assertEquals(2, pathAndQuery.size());
        assertEquals("/test", pathAndQuery.get(0));
        assertEquals("?varParam=var", pathAndQuery.get(1));

        requestUri = "?varParam=var";
        pathAndQuery = http.splitUriPartIntoPathAndQuery(requestUri);
        assertEquals(2, pathAndQuery.size());
        assertEquals("", pathAndQuery.get(0));
        assertEquals("?varParam=var", pathAndQuery.get(1));

        requestUri = "/test?";
        pathAndQuery = http.splitUriPartIntoPathAndQuery(requestUri);
        assertEquals(2, pathAndQuery.size());
        assertEquals("/test", pathAndQuery.get(0));
        assertEquals("?", pathAndQuery.get(1));
    }

    @Test(expected = IllegalArgumentException.class)
    public void testNoQuestionMarkInRequestUri() {
        Http http = new Http();
        String requestUri = "/testvarParam=var";

        http.splitUriPartIntoPathAndQuery(requestUri);
    }

    @Test(expected = IllegalArgumentException.class)
    public void testMoreThanOneQuestionMarkInRequestUri() {
        Http http = new Http();
        String requestUri = "/test?test1?varParam=var";

        http.splitUriPartIntoPathAndQuery(requestUri);
    }
}
