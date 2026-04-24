/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for CloudTrail pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/cloudtrail/CloudTrailClientPagination.h>
#include <aws/cloudtrail/CloudTrailPaginationBase.h>
#include <aws/cloudtrail/model/LookupEventsPaginationTraits.h>
#include <aws/cloudtrail/model/ListChannelsPaginationTraits.h>
#include <aws/cloudtrail/model/ListQueriesPaginationTraits.h>
#include <aws/cloudtrail/model/GetQueryResultsPaginationTraits.h>
#include <aws/cloudtrail/model/ListTagsPaginationTraits.h>
#include <aws/cloudtrail/model/ListInsightsMetricDataPaginationTraits.h>
#include <aws/cloudtrail/model/ListPublicKeysPaginationTraits.h>
#include <aws/cloudtrail/model/ListTrailsPaginationTraits.h>
#include <aws/cloudtrail/model/ListImportsPaginationTraits.h>
#include <aws/cloudtrail/model/ListEventDataStoresPaginationTraits.h>
#include <aws/cloudtrail/model/ListInsightsDataPaginationTraits.h>
#include <aws/cloudtrail/model/ListImportFailuresPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class CloudTrailPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(CloudTrailPaginationCompilationTest, CloudTrailPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
