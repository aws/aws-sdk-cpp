/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for mgn pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/mgn/MgnClientPagination.h>
#include <aws/mgn/MgnPaginationBase.h>
#include <aws/mgn/model/DescribeJobLogItemsPaginationTraits.h>
#include <aws/mgn/model/ListExportErrorsPaginationTraits.h>
#include <aws/mgn/model/ListManagedAccountsPaginationTraits.h>
#include <aws/mgn/model/ListWavesPaginationTraits.h>
#include <aws/mgn/model/DescribeReplicationConfigurationTemplatesPaginationTraits.h>
#include <aws/mgn/model/ListTemplateActionsPaginationTraits.h>
#include <aws/mgn/model/ListSourceServerActionsPaginationTraits.h>
#include <aws/mgn/model/DescribeJobsPaginationTraits.h>
#include <aws/mgn/model/DescribeLaunchConfigurationTemplatesPaginationTraits.h>
#include <aws/mgn/model/DescribeVcenterClientsPaginationTraits.h>
#include <aws/mgn/model/ListApplicationsPaginationTraits.h>
#include <aws/mgn/model/DescribeSourceServersPaginationTraits.h>
#include <aws/mgn/model/ListExportsPaginationTraits.h>
#include <aws/mgn/model/ListImportsPaginationTraits.h>
#include <aws/mgn/model/ListConnectorsPaginationTraits.h>
#include <aws/mgn/model/ListImportErrorsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class mgnPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(mgnPaginationCompilationTest, mgnPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
