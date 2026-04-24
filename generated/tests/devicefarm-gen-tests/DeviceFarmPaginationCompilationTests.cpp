/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for DeviceFarm pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/devicefarm/DeviceFarmClientPagination.h>
#include <aws/devicefarm/DeviceFarmPaginationBase.h>
#include <aws/devicefarm/model/GetOfferingStatusPaginationTraits.h>
#include <aws/devicefarm/model/ListOfferingTransactionsPaginationTraits.h>
#include <aws/devicefarm/model/ListOfferingsPaginationTraits.h>
#include <aws/devicefarm/model/ListArtifactsPaginationTraits.h>
#include <aws/devicefarm/model/ListUploadsPaginationTraits.h>
#include <aws/devicefarm/model/ListJobsPaginationTraits.h>
#include <aws/devicefarm/model/ListSuitesPaginationTraits.h>
#include <aws/devicefarm/model/ListUniqueProblemsPaginationTraits.h>
#include <aws/devicefarm/model/ListTestGridSessionsPaginationTraits.h>
#include <aws/devicefarm/model/ListTestsPaginationTraits.h>
#include <aws/devicefarm/model/ListTestGridSessionActionsPaginationTraits.h>
#include <aws/devicefarm/model/ListDevicePoolsPaginationTraits.h>
#include <aws/devicefarm/model/ListProjectsPaginationTraits.h>
#include <aws/devicefarm/model/ListTestGridProjectsPaginationTraits.h>
#include <aws/devicefarm/model/ListDevicesPaginationTraits.h>
#include <aws/devicefarm/model/ListRunsPaginationTraits.h>
#include <aws/devicefarm/model/ListSamplesPaginationTraits.h>
#include <aws/devicefarm/model/ListTestGridSessionArtifactsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class DeviceFarmPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(DeviceFarmPaginationCompilationTest, DeviceFarmPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
