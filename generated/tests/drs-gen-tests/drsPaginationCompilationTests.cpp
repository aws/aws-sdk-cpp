/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for drs pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/drs/DrsClientPagination.h>
#include <aws/drs/DrsPaginationBase.h>
#include <aws/drs/model/ListStagingAccountsPaginationTraits.h>
#include <aws/drs/model/ListExtensibleSourceServersPaginationTraits.h>
#include <aws/drs/model/DescribeReplicationConfigurationTemplatesPaginationTraits.h>
#include <aws/drs/model/DescribeRecoveryInstancesPaginationTraits.h>
#include <aws/drs/model/DescribeRecoverySnapshotsPaginationTraits.h>
#include <aws/drs/model/DescribeLaunchConfigurationTemplatesPaginationTraits.h>
#include <aws/drs/model/DescribeSourceServersPaginationTraits.h>
#include <aws/drs/model/DescribeJobLogItemsPaginationTraits.h>
#include <aws/drs/model/DescribeJobsPaginationTraits.h>
#include <aws/drs/model/ListLaunchActionsPaginationTraits.h>
#include <aws/drs/model/DescribeSourceNetworksPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class drsPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(drsPaginationCompilationTest, drsPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
