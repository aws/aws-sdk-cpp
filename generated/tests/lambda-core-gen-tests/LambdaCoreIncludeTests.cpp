/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/lambda-core/LambdaCoreClient.h>
#include <aws/lambda-core/LambdaCoreEndpointProvider.h>
#include <aws/lambda-core/LambdaCoreErrorMarshaller.h>
#include <aws/lambda-core/LambdaCoreErrors.h>
#include <aws/lambda-core/LambdaCoreRequest.h>
#include <aws/lambda-core/LambdaCoreServiceClientModel.h>
#include <aws/lambda-core/LambdaCore_EXPORTS.h>
#include <aws/lambda-core/internal/LambdaCoreEndpointRules.h>
#include <aws/lambda-core/model/ComputeResourceType.h>
#include <aws/lambda-core/model/CreateNetworkConnectorRequest.h>
#include <aws/lambda-core/model/CreateNetworkConnectorResult.h>
#include <aws/lambda-core/model/DeleteNetworkConnectorRequest.h>
#include <aws/lambda-core/model/DeleteNetworkConnectorResult.h>
#include <aws/lambda-core/model/GetNetworkConnectorRequest.h>
#include <aws/lambda-core/model/GetNetworkConnectorResult.h>
#include <aws/lambda-core/model/InvalidParameterValueException.h>
#include <aws/lambda-core/model/ListNetworkConnectorsRequest.h>
#include <aws/lambda-core/model/ListNetworkConnectorsResult.h>
#include <aws/lambda-core/model/NetworkConnectorConfiguration.h>
#include <aws/lambda-core/model/NetworkConnectorLastUpdateStatus.h>
#include <aws/lambda-core/model/NetworkConnectorLastUpdateStatusReasonCode.h>
#include <aws/lambda-core/model/NetworkConnectorLimitExceededException.h>
#include <aws/lambda-core/model/NetworkConnectorState.h>
#include <aws/lambda-core/model/NetworkConnectorStateReasonCode.h>
#include <aws/lambda-core/model/NetworkConnectorSummary.h>
#include <aws/lambda-core/model/NetworkConnectorType.h>
#include <aws/lambda-core/model/NetworkConnectorVpcEgressConfiguration.h>
#include <aws/lambda-core/model/NetworkProtocol.h>
#include <aws/lambda-core/model/ResourceConflictException.h>
#include <aws/lambda-core/model/ResourceNotFoundException.h>
#include <aws/lambda-core/model/ServiceException.h>
#include <aws/lambda-core/model/ThrottleReason.h>
#include <aws/lambda-core/model/TooManyRequestsException.h>
#include <aws/lambda-core/model/UpdateNetworkConnectorRequest.h>
#include <aws/lambda-core/model/UpdateNetworkConnectorResult.h>

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
