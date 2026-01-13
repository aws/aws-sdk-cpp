/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for Panorama pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/panorama/PanoramaClientPagination.h>
#include <aws/panorama/PanoramaPaginationBase.h>
#include <aws/panorama/model/ListApplicationInstancesPaginationTraits.h>
#include <aws/panorama/model/ListNodesPaginationTraits.h>
#include <aws/panorama/model/ListPackagesPaginationTraits.h>
#include <aws/panorama/model/ListDevicesJobsPaginationTraits.h>
#include <aws/panorama/model/ListNodeFromTemplateJobsPaginationTraits.h>
#include <aws/panorama/model/ListApplicationInstanceNodeInstancesPaginationTraits.h>
#include <aws/panorama/model/ListDevicesPaginationTraits.h>
#include <aws/panorama/model/ListApplicationInstanceDependenciesPaginationTraits.h>
#include <aws/panorama/model/ListPackageImportJobsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class PanoramaPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(PanoramaPaginationCompilationTest, PanoramaPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
