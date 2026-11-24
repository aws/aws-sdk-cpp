/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/sagemaker-gateway-runtime/SageMakerGatewayRuntimeClient.h>
#include <aws/sagemaker-gateway-runtime/SageMakerGatewayRuntimeEndpointProvider.h>
#include <aws/sagemaker-gateway-runtime/SageMakerGatewayRuntimeErrorMarshaller.h>
#include <aws/sagemaker-gateway-runtime/SageMakerGatewayRuntimeErrors.h>
#include <aws/sagemaker-gateway-runtime/SageMakerGatewayRuntimePaginationBase.h>
#include <aws/sagemaker-gateway-runtime/SageMakerGatewayRuntimeRequest.h>
#include <aws/sagemaker-gateway-runtime/SageMakerGatewayRuntimeServiceClientModel.h>
#include <aws/sagemaker-gateway-runtime/SageMakerGatewayRuntimeWaiter.h>
#include <aws/sagemaker-gateway-runtime/SageMakerGatewayRuntime_EXPORTS.h>
#include <aws/sagemaker-gateway-runtime/internal/SageMakerGatewayRuntimeEndpointRules.h>
#include <aws/sagemaker-gateway-runtime/model/InvokeGlobalInferenceGatewayRequest.h>
#include <aws/sagemaker-gateway-runtime/model/InvokeGlobalInferenceGatewayResult.h>
#include <aws/sagemaker-gateway-runtime/model/InvokeGlobalInferenceGatewayWithResponseStreamHandler.h>
#include <aws/sagemaker-gateway-runtime/model/InvokeGlobalInferenceGatewayWithResponseStreamInitialResponse.h>
#include <aws/sagemaker-gateway-runtime/model/InvokeGlobalInferenceGatewayWithResponseStreamRequest.h>
#include <aws/sagemaker-gateway-runtime/model/ModelStreamError.h>
#include <aws/sagemaker-gateway-runtime/model/PayloadPart.h>
#include <aws/sagemaker-gateway-runtime/model/ResourceNotFoundException.h>
#include <aws/sagemaker-gateway-runtime/model/ResponseStream.h>
#include <aws/sagemaker-gateway-runtime/model/StreamErrorCode.h>

using SageMakerGatewayRuntimeIncludeTest = ::testing::Test;

TEST_F(SageMakerGatewayRuntimeIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::SageMakerGatewayRuntime::SageMakerGatewayRuntimeClient>("SageMakerGatewayRuntimeIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
