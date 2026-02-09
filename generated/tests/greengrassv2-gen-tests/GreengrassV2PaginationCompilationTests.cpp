/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for GreengrassV2 pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/greengrassv2/GreengrassV2ClientPagination.h>
#include <aws/greengrassv2/GreengrassV2PaginationBase.h>
#include <aws/greengrassv2/model/ListComponentVersionsPaginationTraits.h>
#include <aws/greengrassv2/model/ListInstalledComponentsPaginationTraits.h>
#include <aws/greengrassv2/model/ListDeploymentsPaginationTraits.h>
#include <aws/greengrassv2/model/ListClientDevicesAssociatedWithCoreDevicePaginationTraits.h>
#include <aws/greengrassv2/model/ListComponentsPaginationTraits.h>
#include <aws/greengrassv2/model/ListEffectiveDeploymentsPaginationTraits.h>
#include <aws/greengrassv2/model/ListCoreDevicesPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class GreengrassV2PaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(GreengrassV2PaginationCompilationTest, GreengrassV2PaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
