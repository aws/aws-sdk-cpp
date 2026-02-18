/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for OpenSearchServerless pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/opensearchserverless/OpenSearchServerlessClientPagination.h>
#include <aws/opensearchserverless/OpenSearchServerlessPaginationBase.h>
#include <aws/opensearchserverless/model/ListVpcEndpointsPaginationTraits.h>
#include <aws/opensearchserverless/model/ListAccessPoliciesPaginationTraits.h>
#include <aws/opensearchserverless/model/ListCollectionsPaginationTraits.h>
#include <aws/opensearchserverless/model/ListSecurityConfigsPaginationTraits.h>
#include <aws/opensearchserverless/model/ListCollectionGroupsPaginationTraits.h>
#include <aws/opensearchserverless/model/ListLifecyclePoliciesPaginationTraits.h>
#include <aws/opensearchserverless/model/ListSecurityPoliciesPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class OpenSearchServerlessPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(OpenSearchServerlessPaginationCompilationTest, OpenSearchServerlessPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
