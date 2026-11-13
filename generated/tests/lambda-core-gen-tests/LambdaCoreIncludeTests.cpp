/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/lambda-core/LambdaCoreClient.h>
#include <aws/lambda-core/LambdaCoreClientPagination.h>
#include <aws/lambda-core/LambdaCoreEndpointProvider.h>
#include <aws/lambda-core/LambdaCoreErrorMarshaller.h>
#include <aws/lambda-core/LambdaCoreErrors.h>
#include <aws/lambda-core/LambdaCorePaginationBase.h>
#include <aws/lambda-core/LambdaCoreRequest.h>
#include <aws/lambda-core/LambdaCoreServiceClientModel.h>
#include <aws/lambda-core/LambdaCoreWaiter.h>
#include <aws/lambda-core/LambdaCore_EXPORTS.h>
#include <aws/lambda-core/internal/LambdaCoreEndpointRules.h>
#include <aws/lambda-core/model/Compatibility.h>
#include <aws/lambda-core/model/CompatibilityPolicy.h>
#include <aws/lambda-core/model/ComputeResourceType.h>
#include <aws/lambda-core/model/CreateNetworkConnectorRequest.h>
#include <aws/lambda-core/model/CreateNetworkConnectorResult.h>
#include <aws/lambda-core/model/CreateRuntimeAliasRequest.h>
#include <aws/lambda-core/model/CreateRuntimeAliasResult.h>
#include <aws/lambda-core/model/CreateRuntimeRequest.h>
#include <aws/lambda-core/model/CreateRuntimeResult.h>
#include <aws/lambda-core/model/CreateRuntimeVersionRequest.h>
#include <aws/lambda-core/model/CreateRuntimeVersionResult.h>
#include <aws/lambda-core/model/DeleteNetworkConnectorRequest.h>
#include <aws/lambda-core/model/DeleteNetworkConnectorResult.h>
#include <aws/lambda-core/model/DeleteRuntimeAliasRequest.h>
#include <aws/lambda-core/model/DeleteRuntimeAliasResult.h>
#include <aws/lambda-core/model/DeleteRuntimeRequest.h>
#include <aws/lambda-core/model/DeleteRuntimeResult.h>
#include <aws/lambda-core/model/DeleteRuntimeVersionRequest.h>
#include <aws/lambda-core/model/DeleteRuntimeVersionResult.h>
#include <aws/lambda-core/model/GetNetworkConnectorRequest.h>
#include <aws/lambda-core/model/GetNetworkConnectorResult.h>
#include <aws/lambda-core/model/GetRuntimeAliasRequest.h>
#include <aws/lambda-core/model/GetRuntimeAliasResult.h>
#include <aws/lambda-core/model/GetRuntimeRequest.h>
#include <aws/lambda-core/model/GetRuntimeResult.h>
#include <aws/lambda-core/model/GetRuntimeVersionRequest.h>
#include <aws/lambda-core/model/GetRuntimeVersionResult.h>
#include <aws/lambda-core/model/IntegrationModel.h>
#include <aws/lambda-core/model/InvalidParameterValueException.h>
#include <aws/lambda-core/model/ListNetworkConnectorVersionsPaginationTraits.h>
#include <aws/lambda-core/model/ListNetworkConnectorVersionsRequest.h>
#include <aws/lambda-core/model/ListNetworkConnectorVersionsResult.h>
#include <aws/lambda-core/model/ListNetworkConnectorsPaginationTraits.h>
#include <aws/lambda-core/model/ListNetworkConnectorsRequest.h>
#include <aws/lambda-core/model/ListNetworkConnectorsResult.h>
#include <aws/lambda-core/model/ListRuntimeAliasesPaginationTraits.h>
#include <aws/lambda-core/model/ListRuntimeAliasesRequest.h>
#include <aws/lambda-core/model/ListRuntimeAliasesResult.h>
#include <aws/lambda-core/model/ListRuntimeVersionsPaginationTraits.h>
#include <aws/lambda-core/model/ListRuntimeVersionsRequest.h>
#include <aws/lambda-core/model/ListRuntimeVersionsResult.h>
#include <aws/lambda-core/model/ListRuntimesPaginationTraits.h>
#include <aws/lambda-core/model/ListRuntimesRequest.h>
#include <aws/lambda-core/model/ListRuntimesResult.h>
#include <aws/lambda-core/model/NetworkConnectorConfiguration.h>
#include <aws/lambda-core/model/NetworkConnectorLastUpdateStatus.h>
#include <aws/lambda-core/model/NetworkConnectorLastUpdateStatusReasonCode.h>
#include <aws/lambda-core/model/NetworkConnectorLimitExceededException.h>
#include <aws/lambda-core/model/NetworkConnectorState.h>
#include <aws/lambda-core/model/NetworkConnectorStateReasonCode.h>
#include <aws/lambda-core/model/NetworkConnectorSummary.h>
#include <aws/lambda-core/model/NetworkConnectorType.h>
#include <aws/lambda-core/model/NetworkConnectorVersionSummary.h>
#include <aws/lambda-core/model/NetworkConnectorVpcEgressConfiguration.h>
#include <aws/lambda-core/model/NetworkProtocol.h>
#include <aws/lambda-core/model/Platform.h>
#include <aws/lambda-core/model/ResourceConflictException.h>
#include <aws/lambda-core/model/ResourceNotFoundException.h>
#include <aws/lambda-core/model/RestoreRuntimeRequest.h>
#include <aws/lambda-core/model/RestoreRuntimeResult.h>
#include <aws/lambda-core/model/RuntimeAliasInfo.h>
#include <aws/lambda-core/model/RuntimeAliasState.h>
#include <aws/lambda-core/model/RuntimeArchitecture.h>
#include <aws/lambda-core/model/RuntimeInfo.h>
#include <aws/lambda-core/model/RuntimeReleaseLifecycle.h>
#include <aws/lambda-core/model/RuntimeReleaseState.h>
#include <aws/lambda-core/model/RuntimeState.h>
#include <aws/lambda-core/model/RuntimeVersionInfo.h>
#include <aws/lambda-core/model/RuntimeVersionState.h>
#include <aws/lambda-core/model/ServiceException.h>
#include <aws/lambda-core/model/ServiceQuotaExceededException.h>
#include <aws/lambda-core/model/ThrottleReason.h>
#include <aws/lambda-core/model/TooManyRequestsException.h>
#include <aws/lambda-core/model/UpdateNetworkConnectorRequest.h>
#include <aws/lambda-core/model/UpdateNetworkConnectorResult.h>
#include <aws/lambda-core/model/UpdateRuntimeAliasRequest.h>
#include <aws/lambda-core/model/UpdateRuntimeAliasResult.h>
#include <aws/lambda-core/model/UpdateRuntimeRequest.h>
#include <aws/lambda-core/model/UpdateRuntimeResult.h>
#include <aws/lambda-core/model/UpdateRuntimeVersionRequest.h>
#include <aws/lambda-core/model/UpdateRuntimeVersionResult.h>

using LambdaCoreIncludeTest = ::testing::Test;

TEST_F(LambdaCoreIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::LambdaCore::LambdaCoreClient>("LambdaCoreIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
