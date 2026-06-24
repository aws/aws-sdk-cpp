/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/lambda-microvms/LambdaMicrovmsClient.h>
#include <aws/lambda-microvms/LambdaMicrovmsEndpointProvider.h>
#include <aws/lambda-microvms/LambdaMicrovmsEndpointRules.h>
#include <aws/lambda-microvms/LambdaMicrovmsErrorMarshaller.h>
#include <aws/lambda-microvms/LambdaMicrovmsErrors.h>
#include <aws/lambda-microvms/LambdaMicrovmsRequest.h>
#include <aws/lambda-microvms/LambdaMicrovmsServiceClientModel.h>
#include <aws/lambda-microvms/LambdaMicrovms_EXPORTS.h>
#include <aws/lambda-microvms/model/Architecture.h>
#include <aws/lambda-microvms/model/BuildState.h>
#include <aws/lambda-microvms/model/Capability.h>
#include <aws/lambda-microvms/model/Chipset.h>
#include <aws/lambda-microvms/model/CloudWatchLogging.h>
#include <aws/lambda-microvms/model/CodeArtifact.h>
#include <aws/lambda-microvms/model/ConflictException.h>
#include <aws/lambda-microvms/model/CpuConfiguration.h>
#include <aws/lambda-microvms/model/CreateMicrovmAuthTokenRequest.h>
#include <aws/lambda-microvms/model/CreateMicrovmAuthTokenResult.h>
#include <aws/lambda-microvms/model/CreateMicrovmImageRequest.h>
#include <aws/lambda-microvms/model/CreateMicrovmImageResult.h>
#include <aws/lambda-microvms/model/CreateMicrovmShellAuthTokenRequest.h>
#include <aws/lambda-microvms/model/CreateMicrovmShellAuthTokenResult.h>
#include <aws/lambda-microvms/model/DeleteMicrovmImageRequest.h>
#include <aws/lambda-microvms/model/DeleteMicrovmImageResult.h>
#include <aws/lambda-microvms/model/DeleteMicrovmImageVersionRequest.h>
#include <aws/lambda-microvms/model/DeleteMicrovmImageVersionResult.h>
#include <aws/lambda-microvms/model/GetMicrovmImageBuildRequest.h>
#include <aws/lambda-microvms/model/GetMicrovmImageBuildResult.h>
#include <aws/lambda-microvms/model/GetMicrovmImageRequest.h>
#include <aws/lambda-microvms/model/GetMicrovmImageResult.h>
#include <aws/lambda-microvms/model/GetMicrovmImageVersionRequest.h>
#include <aws/lambda-microvms/model/GetMicrovmImageVersionResult.h>
#include <aws/lambda-microvms/model/GetMicrovmRequest.h>
#include <aws/lambda-microvms/model/GetMicrovmResult.h>
#include <aws/lambda-microvms/model/HookState.h>
#include <aws/lambda-microvms/model/Hooks.h>
#include <aws/lambda-microvms/model/IdlePolicy.h>
#include <aws/lambda-microvms/model/InternalServerException.h>
#include <aws/lambda-microvms/model/InvalidParameterValueException.h>
#include <aws/lambda-microvms/model/ListManagedMicrovmImageVersionsRequest.h>
#include <aws/lambda-microvms/model/ListManagedMicrovmImageVersionsResult.h>
#include <aws/lambda-microvms/model/ListManagedMicrovmImagesRequest.h>
#include <aws/lambda-microvms/model/ListManagedMicrovmImagesResult.h>
#include <aws/lambda-microvms/model/ListMicrovmImageBuildsRequest.h>
#include <aws/lambda-microvms/model/ListMicrovmImageBuildsResult.h>
#include <aws/lambda-microvms/model/ListMicrovmImageVersionsRequest.h>
#include <aws/lambda-microvms/model/ListMicrovmImageVersionsResult.h>
#include <aws/lambda-microvms/model/ListMicrovmImagesRequest.h>
#include <aws/lambda-microvms/model/ListMicrovmImagesResult.h>
#include <aws/lambda-microvms/model/ListMicrovmsRequest.h>
#include <aws/lambda-microvms/model/ListMicrovmsResult.h>
#include <aws/lambda-microvms/model/ListTagsRequest.h>
#include <aws/lambda-microvms/model/ListTagsResult.h>
#include <aws/lambda-microvms/model/Logging.h>
#include <aws/lambda-microvms/model/LoggingDisabled.h>
#include <aws/lambda-microvms/model/ManagedMicrovmImageSummary.h>
#include <aws/lambda-microvms/model/ManagedMicrovmImageVersion.h>
#include <aws/lambda-microvms/model/MicrovmHooks.h>
#include <aws/lambda-microvms/model/MicrovmImageBuildSummary.h>
#include <aws/lambda-microvms/model/MicrovmImageHooks.h>
#include <aws/lambda-microvms/model/MicrovmImageState.h>
#include <aws/lambda-microvms/model/MicrovmImageSummary.h>
#include <aws/lambda-microvms/model/MicrovmImageVersionState.h>
#include <aws/lambda-microvms/model/MicrovmImageVersionStatus.h>
#include <aws/lambda-microvms/model/MicrovmImageVersionSummary.h>
#include <aws/lambda-microvms/model/MicrovmItem.h>
#include <aws/lambda-microvms/model/MicrovmState.h>
#include <aws/lambda-microvms/model/PortRange.h>
#include <aws/lambda-microvms/model/PortSpecification.h>
#include <aws/lambda-microvms/model/ResourceConflictException.h>
#include <aws/lambda-microvms/model/ResourceNotFoundException.h>
#include <aws/lambda-microvms/model/Resources.h>
#include <aws/lambda-microvms/model/ResumeMicrovmRequest.h>
#include <aws/lambda-microvms/model/ResumeMicrovmResult.h>
#include <aws/lambda-microvms/model/RunMicrovmRequest.h>
#include <aws/lambda-microvms/model/RunMicrovmResult.h>
#include <aws/lambda-microvms/model/ServiceException.h>
#include <aws/lambda-microvms/model/ServiceQuotaExceededException.h>
#include <aws/lambda-microvms/model/SnapshotBuild.h>
#include <aws/lambda-microvms/model/SuspendMicrovmRequest.h>
#include <aws/lambda-microvms/model/SuspendMicrovmResult.h>
#include <aws/lambda-microvms/model/TagResourceRequest.h>
#include <aws/lambda-microvms/model/TerminateMicrovmRequest.h>
#include <aws/lambda-microvms/model/TerminateMicrovmResult.h>
#include <aws/lambda-microvms/model/ThrottlingException.h>
#include <aws/lambda-microvms/model/TooManyRequestsException.h>
#include <aws/lambda-microvms/model/Unit.h>
#include <aws/lambda-microvms/model/UntagResourceRequest.h>
#include <aws/lambda-microvms/model/UpdateMicrovmImageRequest.h>
#include <aws/lambda-microvms/model/UpdateMicrovmImageResult.h>
#include <aws/lambda-microvms/model/UpdateMicrovmImageVersionRequest.h>
#include <aws/lambda-microvms/model/UpdateMicrovmImageVersionResult.h>

using LambdaMicrovmsIncludeTest = ::testing::Test;

TEST_F(LambdaMicrovmsIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::LambdaMicrovms::LambdaMicrovmsClient>("LambdaMicrovmsIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
