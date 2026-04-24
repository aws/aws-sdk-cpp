/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <aws/core/http/Scheme.h>

using namespace Aws::Http;

class HttpSchemeMapperTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(HttpSchemeMapperTest, TestParseSchemeFromString)
{
    Scheme scheme = SchemeMapper::FromString("  HtTp  ");
    ASSERT_EQ(Scheme::HTTP, scheme);
    scheme = SchemeMapper::FromString("  HtTpS  ");
    ASSERT_EQ(Scheme::HTTPS, scheme);
    scheme = SchemeMapper::FromString("");
    ASSERT_EQ(Scheme::HTTPS, scheme);
}

TEST_F(HttpSchemeMapperTest, TestGetStringFromScheme)
{
    ASSERT_STREQ("http", SchemeMapper::ToString(Scheme::HTTP));
    ASSERT_STREQ("https", SchemeMapper::ToString(Scheme::HTTPS));
}
