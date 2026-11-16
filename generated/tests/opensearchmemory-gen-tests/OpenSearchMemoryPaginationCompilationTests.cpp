/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for OpenSearchMemory pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/opensearchmemory/OpenSearchMemoryClientPagination.h>
#include <aws/opensearchmemory/OpenSearchMemoryPaginationBase.h>
#include <aws/opensearchmemory/model/ListMemoriesPaginationTraits.h>
#include <aws/opensearchmemory/model/ListEventsPaginationTraits.h>
#include <aws/opensearchmemory/model/ListSpacesPaginationTraits.h>
#include <aws/opensearchmemory/model/SearchMemoriesPaginationTraits.h>
#include <aws/opensearchmemory/model/SearchEventsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class OpenSearchMemoryPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(OpenSearchMemoryPaginationCompilationTest, OpenSearchMemoryPaginationHeadersCompile)
{
      // Test passes if compilation succeeds
      SUCCEED();
}
