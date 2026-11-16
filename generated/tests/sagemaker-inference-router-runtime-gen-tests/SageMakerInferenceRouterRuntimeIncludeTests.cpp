/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/sagemaker-inference-router-runtime/SageMakerInferenceRouterRuntimeClient.h>
#include <aws/sagemaker-inference-router-runtime/SageMakerInferenceRouterRuntimeEndpointProvider.h>
#include <aws/sagemaker-inference-router-runtime/SageMakerInferenceRouterRuntimeErrorMarshaller.h>
#include <aws/sagemaker-inference-router-runtime/SageMakerInferenceRouterRuntimeErrors.h>
#include <aws/sagemaker-inference-router-runtime/SageMakerInferenceRouterRuntimePaginationBase.h>
#include <aws/sagemaker-inference-router-runtime/SageMakerInferenceRouterRuntimeRequest.h>
#include <aws/sagemaker-inference-router-runtime/SageMakerInferenceRouterRuntimeServiceClientModel.h>
#include <aws/sagemaker-inference-router-runtime/SageMakerInferenceRouterRuntimeWaiter.h>
#include <aws/sagemaker-inference-router-runtime/SageMakerInferenceRouterRuntime_EXPORTS.h>
#include <aws/sagemaker-inference-router-runtime/internal/SageMakerInferenceRouterRuntimeEndpointRules.h>
#include <aws/sagemaker-inference-router-runtime/model/InvokeInferenceRouterAsyncRequest.h>
#include <aws/sagemaker-inference-router-runtime/model/InvokeInferenceRouterAsyncResult.h>
#include <aws/sagemaker-inference-router-runtime/model/InvokeInferenceRouterRequest.h>
#include <aws/sagemaker-inference-router-runtime/model/InvokeInferenceRouterResult.h>
#include <aws/sagemaker-inference-router-runtime/model/ModelError.h>

using SageMakerInferenceRouterRuntimeIncludeTest = ::testing::Test;

TEST_F(SageMakerInferenceRouterRuntimeIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::SageMakerInferenceRouterRuntime::SageMakerInferenceRouterRuntimeClient>("SageMakerInferenceRouterRuntimeIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
