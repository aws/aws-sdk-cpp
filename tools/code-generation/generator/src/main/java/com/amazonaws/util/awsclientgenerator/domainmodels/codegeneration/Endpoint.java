/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

package com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration;

import lombok.Data;

import java.util.Arrays;
import java.util.LinkedList;
import java.util.List;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

@Data
public class Endpoint {
    private static final Pattern MEMBER_PATTERN = Pattern.compile("\\{[\\w\\d]+\\}");

    private String hostPrefix;

    public List<String> getHostPrefixParts() {
        // use -1 for split so as to easily construct endpoint string sequentially.
        // because there will always be one more item than member-references
        // See EndpointTest.java
        return Arrays.asList(hostPrefix.split("\\{[\\w\\d]+\\}", -1)); 
    }

    public List<String> getMemberReferences() {
        List<String> paramList = new LinkedList<>();

        Matcher matcher = MEMBER_PATTERN.matcher(hostPrefix);

        while (matcher.find()) {
            paramList.add(hostPrefix.substring(matcher.start() + 1, matcher.end() - 1));
        }        
        return paramList;
    }

    public String constructHostPrefixString(String memberPrefix) {
        String ret = "";
        List<String> parts = getHostPrefixParts();
        List<String> members = getMemberReferences();
        //  {var1}-{var2}.123.{var3}, with prefix to be "Reqeust"
        //-> Request.Getvar1() + "-" + Request.Getvar2() + ".123." + Request.Getvar3()
        for (int i = 0; i < members.size(); i++)
        {
            ret += "\"" + parts.get(i) + "\" + " + memberPrefix + ".Get" + members.get(i) + "() + ";
        }
        ret += "\"" + parts.get(parts.size() - 1) + "\"";

        return ret;
    }
}
