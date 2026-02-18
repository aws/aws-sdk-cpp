/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for ManagedBlockchain pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/managedblockchain/ManagedBlockchainClientPagination.h>
#include <aws/managedblockchain/ManagedBlockchainPaginationBase.h>
#include <aws/managedblockchain/model/ListNetworksPaginationTraits.h>
#include <aws/managedblockchain/model/ListProposalsPaginationTraits.h>
#include <aws/managedblockchain/model/ListAccessorsPaginationTraits.h>
#include <aws/managedblockchain/model/ListProposalVotesPaginationTraits.h>
#include <aws/managedblockchain/model/ListMembersPaginationTraits.h>
#include <aws/managedblockchain/model/ListNodesPaginationTraits.h>
#include <aws/managedblockchain/model/ListInvitationsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class ManagedBlockchainPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(ManagedBlockchainPaginationCompilationTest, ManagedBlockchainPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
