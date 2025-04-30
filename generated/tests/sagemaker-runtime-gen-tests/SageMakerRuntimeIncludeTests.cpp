/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/sagemaker-runtime/SageMakerRuntimeClient.h>
#include <aws/sagemaker-runtime/SageMakerRuntimeEndpointProvider.h>
#include <aws/sagemaker-runtime/SageMakerRuntimeEndpointRules.h>
#include <aws/sagemaker-runtime/SageMakerRuntimeErrorMarshaller.h>
#include <aws/sagemaker-runtime/SageMakerRuntimeErrors.h>
#include <aws/sagemaker-runtime/SageMakerRuntimeRequest.h>
#include <aws/sagemaker-runtime/SageMakerRuntimeServiceClientModel.h>
#include <aws/sagemaker-runtime/SageMakerRuntime_EXPORTS.h>
#include <aws/sagemaker-runtime/model/InvokeEndpointAsyncRequest.h>
#include <aws/sagemaker-runtime/model/InvokeEndpointAsyncResult.h>
#include <aws/sagemaker-runtime/model/InvokeEndpointRequest.h>
#include <aws/sagemaker-runtime/model/InvokeEndpointResult.h>
#include <aws/sagemaker-runtime/model/InvokeEndpointWithResponseStreamHandler.h>
#include <aws/sagemaker-runtime/model/InvokeEndpointWithResponseStreamInitialResponse.h>
#include <aws/sagemaker-runtime/model/InvokeEndpointWithResponseStreamRequest.h>
#include <aws/sagemaker-runtime/model/ModelError.h>
#include <aws/sagemaker-runtime/model/ModelStreamError.h>
#include <aws/sagemaker-runtime/model/PayloadPart.h>
#include <aws/sagemaker-runtime/model/ResponseStream.h>

using SageMakerRuntimeIncludeTest = ::testing::Test;

TEST_F(SageMakerRuntimeIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::SageMakerRuntime::SageMakerRuntimeClient>("SageMakerRuntimeIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
