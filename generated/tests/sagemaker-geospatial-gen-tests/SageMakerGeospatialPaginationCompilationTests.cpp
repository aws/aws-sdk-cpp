/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for SageMakerGeospatial pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/sagemaker-geospatial/SageMakerGeospatialClientPagination.h>
#include <aws/sagemaker-geospatial/SageMakerGeospatialPaginationBase.h>
#include <aws/sagemaker-geospatial/model/ListEarthObservationJobsPaginationTraits.h>
#include <aws/sagemaker-geospatial/model/ListVectorEnrichmentJobsPaginationTraits.h>
#include <aws/sagemaker-geospatial/model/ListRasterDataCollectionsPaginationTraits.h>
#include <aws/sagemaker-geospatial/model/SearchRasterDataCollectionPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class SageMakerGeospatialPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(SageMakerGeospatialPaginationCompilationTest, SageMakerGeospatialPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
