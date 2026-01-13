/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for S3Control pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/s3control/S3ControlClientPagination.h>
#include <aws/s3control/S3ControlPaginationBase.h>
#include <aws/s3control/model/ListAccessGrantsPaginationTraits.h>
#include <aws/s3control/model/ListCallerAccessGrantsPaginationTraits.h>
#include <aws/s3control/model/ListStorageLensConfigurationsPaginationTraits.h>
#include <aws/s3control/model/ListJobsPaginationTraits.h>
#include <aws/s3control/model/ListAccessPointsForObjectLambdaPaginationTraits.h>
#include <aws/s3control/model/ListAccessGrantsLocationsPaginationTraits.h>
#include <aws/s3control/model/ListStorageLensGroupsPaginationTraits.h>
#include <aws/s3control/model/ListAccessPointsPaginationTraits.h>
#include <aws/s3control/model/ListMultiRegionAccessPointsPaginationTraits.h>
#include <aws/s3control/model/ListRegionalBucketsPaginationTraits.h>
#include <aws/s3control/model/ListAccessGrantsInstancesPaginationTraits.h>
#include <aws/s3control/model/ListAccessPointsForDirectoryBucketsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class S3ControlPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(S3ControlPaginationCompilationTest, S3ControlPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
