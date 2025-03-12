
/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <aws/core/utils/DNS.h>

using namespace Aws::Utils;

class DnsTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(DnsTest, TestValidDnsLabels)
{
    ASSERT_TRUE(IsValidDnsLabel("a"));
    ASSERT_TRUE(IsValidDnsLabel("ab"));
    ASSERT_TRUE(IsValidDnsLabel("abc"));
    ASSERT_TRUE(IsValidDnsLabel("contains-dashes-in-the-middle"));
    ASSERT_TRUE(IsValidDnsLabel("123StartsWithNumbers"));
    ASSERT_TRUE(IsValidDnsLabel("Ends-With-Numbers123"));
    ASSERT_TRUE(IsValidDnsLabel("123StartsAndEndsWithNumbers000"));
    ASSERT_TRUE(IsValidDnsLabel("42")); 
    ASSERT_TRUE(IsValidDnsLabel("012345678901234567890123456789012345678901234567890123456789012")); // 63 characters
}

TEST_F(DnsTest, TestInvalidDnsLabels)
{
    ASSERT_FALSE(IsValidDnsLabel(""));
    ASSERT_FALSE(IsValidDnsLabel("has_underscore"));
    ASSERT_FALSE(IsValidDnsLabel("trailing-dash-"));
    ASSERT_FALSE(IsValidDnsLabel("-starts-with-dash"));
    ASSERT_FALSE(IsValidDnsLabel("ends-with-dash-"));
    ASSERT_FALSE(IsValidDnsLabel("-starts-and-ends-with-dash-"));
    ASSERT_FALSE(IsValidDnsLabel("-"));
    ASSERT_FALSE(IsValidDnsLabel("c0nt@in$-$ymb01$"));
    ASSERT_FALSE(IsValidDnsLabel("0123456789012345678901234567890123456789012345678901234567890123")); // 64 characters
}

TEST_F(DnsTest, TestHost)
{
    ASSERT_TRUE(IsValidHost("www.amazon.com"));
    ASSERT_TRUE(IsValidHost("a"));
    ASSERT_TRUE(IsValidHost("a-b-c"));
    ASSERT_TRUE(IsValidHost("a-b.c-d"));
    ASSERT_TRUE(IsValidHost("amazon.com"));


    ASSERT_FALSE(IsValidHost(""));
    ASSERT_FALSE(IsValidHost("."));
    ASSERT_FALSE(IsValidHost("@"));
    ASSERT_FALSE(IsValidHost("-"));
    ASSERT_FALSE(IsValidHost("/"));
    ASSERT_FALSE(IsValidHost("abc@amazon.com"));
    ASSERT_FALSE(IsValidHost("www.amazon.com/"));
    ASSERT_FALSE(IsValidHost("www.amazon-.com"));
    ASSERT_FALSE(IsValidHost("www.-amazon.com"));
    ASSERT_FALSE(IsValidHost("0123456789012345678901234567890123456789012345678901234567890123")); // 64 characters
    ASSERT_FALSE(IsValidHost("0123456789012345678901234567890123456789012345678901234567890123.com")); // 64 characters

}

TEST_F(DnsTest, TestIPV6)
{
    Aws::Vector< std::pair<Aws::String, bool> > inputs = {
        {"2001:0db8:85a3:0000:0000:8a2e:0370:7334", true},
        {"2001:DB8:85A3::8A2E:370:7334", true},
        {"::ffff", true},
        {"::", true},
        {"ffff:ffff:ffff:ffff:ffff:ffff:ffff:ffff",true},
        {"2001:db8:85a3:0:0:8a2e:370:7334",true},
        {"2001:db8:85a3:0000:0000:8a2e:0370:7334:1", false},
        {"2001:db8:85a3:0000", false},
        {"2001:0db8:85a3:0000:0000:8a2e:0370:7334:", false},
        {"g001:0db8:85a3:0000:0000:8a2e:0370:7334", false},
        {"2001:db8::85a3::1", false},
        {":2001:db8:85a3:0000:0000:8a2e:0370:7334", false},
        {"0:0:0:0:0:0:0:0", true},
        {"2001:db8::", true}
    };

    for(auto t : inputs)
    {
        ASSERT_EQ(IsValidHost(t.first), t.second);
    }

}