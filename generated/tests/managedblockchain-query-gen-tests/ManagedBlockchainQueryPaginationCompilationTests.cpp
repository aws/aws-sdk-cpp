/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for ManagedBlockchainQuery pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/managedblockchain-query/ManagedBlockchainQueryClientPagination.h>
#include <aws/managedblockchain-query/ManagedBlockchainQueryPaginationBase.h>
#include <aws/managedblockchain-query/model/ListTransactionsPaginationTraits.h>
#include <aws/managedblockchain-query/model/ListTransactionEventsPaginationTraits.h>
#include <aws/managedblockchain-query/model/ListFilteredTransactionEventsPaginationTraits.h>
#include <aws/managedblockchain-query/model/ListAssetContractsPaginationTraits.h>
#include <aws/managedblockchain-query/model/ListTokenBalancesPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class ManagedBlockchainQueryPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(ManagedBlockchainQueryPaginationCompilationTest, ManagedBlockchainQueryPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
