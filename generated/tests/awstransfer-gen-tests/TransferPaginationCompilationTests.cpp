/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for Transfer pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/awstransfer/TransferClientPagination.h>
#include <aws/awstransfer/TransferPaginationBase.h>
#include <aws/awstransfer/model/ListAccessesPaginationTraits.h>
#include <aws/awstransfer/model/ListWebAppsPaginationTraits.h>
#include <aws/awstransfer/model/ListUsersPaginationTraits.h>
#include <aws/awstransfer/model/ListAgreementsPaginationTraits.h>
#include <aws/awstransfer/model/ListTagsForResourcePaginationTraits.h>
#include <aws/awstransfer/model/ListCertificatesPaginationTraits.h>
#include <aws/awstransfer/model/ListServersPaginationTraits.h>
#include <aws/awstransfer/model/ListFileTransferResultsPaginationTraits.h>
#include <aws/awstransfer/model/ListConnectorsPaginationTraits.h>
#include <aws/awstransfer/model/ListWorkflowsPaginationTraits.h>
#include <aws/awstransfer/model/ListProfilesPaginationTraits.h>
#include <aws/awstransfer/model/ListSecurityPoliciesPaginationTraits.h>
#include <aws/awstransfer/model/ListExecutionsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class TransferPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(TransferPaginationCompilationTest, TransferPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
