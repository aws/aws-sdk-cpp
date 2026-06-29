/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for SageMakerFeatureStoreRuntime pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/sagemaker-featurestore-runtime/SageMakerFeatureStoreRuntimeClientPagination.h>
#include <aws/sagemaker-featurestore-runtime/SageMakerFeatureStoreRuntimePaginationBase.h>
#include <aws/sagemaker-featurestore-runtime/model/ListRecordsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class SageMakerFeatureStoreRuntimePaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(SageMakerFeatureStoreRuntimePaginationCompilationTest, SageMakerFeatureStoreRuntimePaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
