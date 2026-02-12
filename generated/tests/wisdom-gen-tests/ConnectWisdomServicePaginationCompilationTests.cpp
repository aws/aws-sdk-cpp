/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for ConnectWisdomService pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/wisdom/ConnectWisdomServiceClientPagination.h>
#include <aws/wisdom/ConnectWisdomServicePaginationBase.h>
#include <aws/wisdom/model/ListAssistantsPaginationTraits.h>
#include <aws/wisdom/model/ListContentsPaginationTraits.h>
#include <aws/wisdom/model/ListImportJobsPaginationTraits.h>
#include <aws/wisdom/model/SearchContentPaginationTraits.h>
#include <aws/wisdom/model/SearchQuickResponsesPaginationTraits.h>
#include <aws/wisdom/model/ListAssistantAssociationsPaginationTraits.h>
#include <aws/wisdom/model/ListQuickResponsesPaginationTraits.h>
#include <aws/wisdom/model/SearchSessionsPaginationTraits.h>
#include <aws/wisdom/model/ListKnowledgeBasesPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class ConnectWisdomServicePaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(ConnectWisdomServicePaginationCompilationTest, ConnectWisdomServicePaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
