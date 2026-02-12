/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for ChimeSDKMediaPipelines pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelinesClientPagination.h>
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelinesPaginationBase.h>
#include <aws/chime-sdk-media-pipelines/model/ListMediaCapturePipelinesPaginationTraits.h>
#include <aws/chime-sdk-media-pipelines/model/ListMediaInsightsPipelineConfigurationsPaginationTraits.h>
#include <aws/chime-sdk-media-pipelines/model/ListMediaPipelinesPaginationTraits.h>
#include <aws/chime-sdk-media-pipelines/model/ListMediaPipelineKinesisVideoStreamPoolsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class ChimeSDKMediaPipelinesPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(ChimeSDKMediaPipelinesPaginationCompilationTest, ChimeSDKMediaPipelinesPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
