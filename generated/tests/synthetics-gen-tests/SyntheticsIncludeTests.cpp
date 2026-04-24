/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/synthetics/SyntheticsClient.h>
#include <aws/synthetics/SyntheticsEndpointProvider.h>
#include <aws/synthetics/SyntheticsEndpointRules.h>
#include <aws/synthetics/SyntheticsErrorMarshaller.h>
#include <aws/synthetics/SyntheticsErrors.h>
#include <aws/synthetics/SyntheticsRequest.h>
#include <aws/synthetics/SyntheticsServiceClientModel.h>
#include <aws/synthetics/Synthetics_EXPORTS.h>
#include <aws/synthetics/model/ArtifactConfigInput.h>
#include <aws/synthetics/model/ArtifactConfigOutput.h>
#include <aws/synthetics/model/AssociateResourceRequest.h>
#include <aws/synthetics/model/AssociateResourceResult.h>
#include <aws/synthetics/model/BaseScreenshot.h>
#include <aws/synthetics/model/BrowserConfig.h>
#include <aws/synthetics/model/BrowserType.h>
#include <aws/synthetics/model/Canary.h>
#include <aws/synthetics/model/CanaryCodeInput.h>
#include <aws/synthetics/model/CanaryCodeOutput.h>
#include <aws/synthetics/model/CanaryDryRunConfigOutput.h>
#include <aws/synthetics/model/CanaryLastRun.h>
#include <aws/synthetics/model/CanaryRun.h>
#include <aws/synthetics/model/CanaryRunConfigInput.h>
#include <aws/synthetics/model/CanaryRunConfigOutput.h>
#include <aws/synthetics/model/CanaryRunState.h>
#include <aws/synthetics/model/CanaryRunStateReasonCode.h>
#include <aws/synthetics/model/CanaryRunStatus.h>
#include <aws/synthetics/model/CanaryRunTestResult.h>
#include <aws/synthetics/model/CanaryRunTimeline.h>
#include <aws/synthetics/model/CanaryScheduleInput.h>
#include <aws/synthetics/model/CanaryScheduleOutput.h>
#include <aws/synthetics/model/CanaryState.h>
#include <aws/synthetics/model/CanaryStateReasonCode.h>
#include <aws/synthetics/model/CanaryStatus.h>
#include <aws/synthetics/model/CanaryTimeline.h>
#include <aws/synthetics/model/CreateCanaryRequest.h>
#include <aws/synthetics/model/CreateCanaryResult.h>
#include <aws/synthetics/model/CreateGroupRequest.h>
#include <aws/synthetics/model/CreateGroupResult.h>
#include <aws/synthetics/model/DeleteCanaryRequest.h>
#include <aws/synthetics/model/DeleteCanaryResult.h>
#include <aws/synthetics/model/DeleteGroupRequest.h>
#include <aws/synthetics/model/DeleteGroupResult.h>
#include <aws/synthetics/model/Dependency.h>
#include <aws/synthetics/model/DependencyType.h>
#include <aws/synthetics/model/DescribeCanariesLastRunRequest.h>
#include <aws/synthetics/model/DescribeCanariesLastRunResult.h>
#include <aws/synthetics/model/DescribeCanariesRequest.h>
#include <aws/synthetics/model/DescribeCanariesResult.h>
#include <aws/synthetics/model/DescribeRuntimeVersionsRequest.h>
#include <aws/synthetics/model/DescribeRuntimeVersionsResult.h>
#include <aws/synthetics/model/DisassociateResourceRequest.h>
#include <aws/synthetics/model/DisassociateResourceResult.h>
#include <aws/synthetics/model/DryRunConfigOutput.h>
#include <aws/synthetics/model/EncryptionMode.h>
#include <aws/synthetics/model/EngineConfig.h>
#include <aws/synthetics/model/GetCanaryRequest.h>
#include <aws/synthetics/model/GetCanaryResult.h>
#include <aws/synthetics/model/GetCanaryRunsRequest.h>
#include <aws/synthetics/model/GetCanaryRunsResult.h>
#include <aws/synthetics/model/GetGroupRequest.h>
#include <aws/synthetics/model/GetGroupResult.h>
#include <aws/synthetics/model/Group.h>
#include <aws/synthetics/model/GroupSummary.h>
#include <aws/synthetics/model/ListAssociatedGroupsRequest.h>
#include <aws/synthetics/model/ListAssociatedGroupsResult.h>
#include <aws/synthetics/model/ListGroupResourcesRequest.h>
#include <aws/synthetics/model/ListGroupResourcesResult.h>
#include <aws/synthetics/model/ListGroupsRequest.h>
#include <aws/synthetics/model/ListGroupsResult.h>
#include <aws/synthetics/model/ListTagsForResourceRequest.h>
#include <aws/synthetics/model/ListTagsForResourceResult.h>
#include <aws/synthetics/model/ProvisionedResourceCleanupSetting.h>
#include <aws/synthetics/model/ResourceToTag.h>
#include <aws/synthetics/model/RetryConfigInput.h>
#include <aws/synthetics/model/RetryConfigOutput.h>
#include <aws/synthetics/model/RunType.h>
#include <aws/synthetics/model/RuntimeVersion.h>
#include <aws/synthetics/model/S3EncryptionConfig.h>
#include <aws/synthetics/model/StartCanaryDryRunRequest.h>
#include <aws/synthetics/model/StartCanaryDryRunResult.h>
#include <aws/synthetics/model/StartCanaryRequest.h>
#include <aws/synthetics/model/StartCanaryResult.h>
#include <aws/synthetics/model/StopCanaryRequest.h>
#include <aws/synthetics/model/StopCanaryResult.h>
#include <aws/synthetics/model/TagResourceRequest.h>
#include <aws/synthetics/model/TagResourceResult.h>
#include <aws/synthetics/model/UntagResourceRequest.h>
#include <aws/synthetics/model/UntagResourceResult.h>
#include <aws/synthetics/model/UpdateCanaryRequest.h>
#include <aws/synthetics/model/UpdateCanaryResult.h>
#include <aws/synthetics/model/VisualReferenceInput.h>
#include <aws/synthetics/model/VisualReferenceOutput.h>
#include <aws/synthetics/model/VpcConfigInput.h>
#include <aws/synthetics/model/VpcConfigOutput.h>

using SyntheticsIncludeTest = ::testing::Test;

TEST_F(SyntheticsIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::Synthetics::SyntheticsClient>("SyntheticsIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
