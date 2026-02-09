/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for CloudFrontKeyValueStore pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/cloudfront-keyvaluestore/CloudFrontKeyValueStoreClientPagination.h>
#include <aws/cloudfront-keyvaluestore/CloudFrontKeyValueStorePaginationBase.h>
#include <aws/cloudfront-keyvaluestore/model/ListKeysPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class CloudFrontKeyValueStorePaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(CloudFrontKeyValueStorePaginationCompilationTest, CloudFrontKeyValueStorePaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
