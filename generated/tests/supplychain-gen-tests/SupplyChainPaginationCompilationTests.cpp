/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for SupplyChain pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/supplychain/SupplyChainClientPagination.h>
#include <aws/supplychain/SupplyChainPaginationBase.h>
#include <aws/supplychain/model/ListDataIntegrationEventsPaginationTraits.h>
#include <aws/supplychain/model/ListDataIntegrationFlowExecutionsPaginationTraits.h>
#include <aws/supplychain/model/ListDataIntegrationFlowsPaginationTraits.h>
#include <aws/supplychain/model/ListInstancesPaginationTraits.h>
#include <aws/supplychain/model/ListDataLakeDatasetsPaginationTraits.h>
#include <aws/supplychain/model/ListDataLakeNamespacesPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class SupplyChainPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(SupplyChainPaginationCompilationTest, SupplyChainPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
