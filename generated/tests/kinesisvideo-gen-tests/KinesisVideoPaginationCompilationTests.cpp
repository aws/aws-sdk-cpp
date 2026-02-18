/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for KinesisVideo pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/kinesisvideo/KinesisVideoClientPagination.h>
#include <aws/kinesisvideo/KinesisVideoPaginationBase.h>
#include <aws/kinesisvideo/model/ListSignalingChannelsPaginationTraits.h>
#include <aws/kinesisvideo/model/ListStreamsPaginationTraits.h>
#include <aws/kinesisvideo/model/DescribeMappedResourceConfigurationPaginationTraits.h>
#include <aws/kinesisvideo/model/ListEdgeAgentConfigurationsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class KinesisVideoPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(KinesisVideoPaginationCompilationTest, KinesisVideoPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
