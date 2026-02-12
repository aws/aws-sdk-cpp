/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for odb pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/odb/OdbClientPagination.h>
#include <aws/odb/OdbPaginationBase.h>
#include <aws/odb/model/ListAutonomousVirtualMachinesPaginationTraits.h>
#include <aws/odb/model/ListGiVersionsPaginationTraits.h>
#include <aws/odb/model/ListCloudVmClustersPaginationTraits.h>
#include <aws/odb/model/ListOdbPeeringConnectionsPaginationTraits.h>
#include <aws/odb/model/ListCloudAutonomousVmClustersPaginationTraits.h>
#include <aws/odb/model/ListDbNodesPaginationTraits.h>
#include <aws/odb/model/ListDbServersPaginationTraits.h>
#include <aws/odb/model/ListDbSystemShapesPaginationTraits.h>
#include <aws/odb/model/ListOdbNetworksPaginationTraits.h>
#include <aws/odb/model/ListSystemVersionsPaginationTraits.h>
#include <aws/odb/model/ListCloudExadataInfrastructuresPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class odbPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(odbPaginationCompilationTest, odbPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
