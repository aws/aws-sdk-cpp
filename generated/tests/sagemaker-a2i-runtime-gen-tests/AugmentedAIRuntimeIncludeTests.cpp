/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/sagemaker-a2i-runtime/AugmentedAIRuntimeClient.h>
#include <aws/sagemaker-a2i-runtime/AugmentedAIRuntimeEndpointProvider.h>
#include <aws/sagemaker-a2i-runtime/AugmentedAIRuntimeEndpointRules.h>
#include <aws/sagemaker-a2i-runtime/AugmentedAIRuntimeErrorMarshaller.h>
#include <aws/sagemaker-a2i-runtime/AugmentedAIRuntimeErrors.h>
#include <aws/sagemaker-a2i-runtime/AugmentedAIRuntimeRequest.h>
#include <aws/sagemaker-a2i-runtime/AugmentedAIRuntimeServiceClientModel.h>
#include <aws/sagemaker-a2i-runtime/AugmentedAIRuntime_EXPORTS.h>
#include <aws/sagemaker-a2i-runtime/model/ContentClassifier.h>
#include <aws/sagemaker-a2i-runtime/model/DeleteHumanLoopRequest.h>
#include <aws/sagemaker-a2i-runtime/model/DeleteHumanLoopResult.h>
#include <aws/sagemaker-a2i-runtime/model/DescribeHumanLoopRequest.h>
#include <aws/sagemaker-a2i-runtime/model/DescribeHumanLoopResult.h>
#include <aws/sagemaker-a2i-runtime/model/HumanLoopDataAttributes.h>
#include <aws/sagemaker-a2i-runtime/model/HumanLoopInput.h>
#include <aws/sagemaker-a2i-runtime/model/HumanLoopOutput.h>
#include <aws/sagemaker-a2i-runtime/model/HumanLoopStatus.h>
#include <aws/sagemaker-a2i-runtime/model/HumanLoopSummary.h>
#include <aws/sagemaker-a2i-runtime/model/ListHumanLoopsRequest.h>
#include <aws/sagemaker-a2i-runtime/model/ListHumanLoopsResult.h>
#include <aws/sagemaker-a2i-runtime/model/SortOrder.h>
#include <aws/sagemaker-a2i-runtime/model/StartHumanLoopRequest.h>
#include <aws/sagemaker-a2i-runtime/model/StartHumanLoopResult.h>
#include <aws/sagemaker-a2i-runtime/model/StopHumanLoopRequest.h>
#include <aws/sagemaker-a2i-runtime/model/StopHumanLoopResult.h>

using AugmentedAIRuntimeIncludeTest = ::testing::Test;

TEST_F(AugmentedAIRuntimeIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::AugmentedAIRuntime::AugmentedAIRuntimeClient>("AugmentedAIRuntimeIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
