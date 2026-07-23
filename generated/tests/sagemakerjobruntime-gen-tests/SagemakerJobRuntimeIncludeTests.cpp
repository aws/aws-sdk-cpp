/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/sagemakerjobruntime/SagemakerJobRuntimeClient.h>
#include <aws/sagemakerjobruntime/SagemakerJobRuntimeEndpointProvider.h>
#include <aws/sagemakerjobruntime/SagemakerJobRuntimeErrorMarshaller.h>
#include <aws/sagemakerjobruntime/SagemakerJobRuntimeErrors.h>
#include <aws/sagemakerjobruntime/SagemakerJobRuntimeRequest.h>
#include <aws/sagemakerjobruntime/SagemakerJobRuntimeServiceClientModel.h>
#include <aws/sagemakerjobruntime/SagemakerJobRuntime_EXPORTS.h>
#include <aws/sagemakerjobruntime/internal/SagemakerJobRuntimeEndpointRules.h>
#include <aws/sagemakerjobruntime/model/CompleteRolloutRequest.h>
#include <aws/sagemakerjobruntime/model/CompleteRolloutResult.h>
#include <aws/sagemakerjobruntime/model/CompletionStatus.h>
#include <aws/sagemakerjobruntime/model/SampleRequest.h>
#include <aws/sagemakerjobruntime/model/SampleResult.h>
#include <aws/sagemakerjobruntime/model/SampleWithResponseStreamRequest.h>
#include <aws/sagemakerjobruntime/model/SampleWithResponseStreamResult.h>
#include <aws/sagemakerjobruntime/model/UpdateRewardRequest.h>
#include <aws/sagemakerjobruntime/model/UpdateRewardResult.h>

using SagemakerJobRuntimeIncludeTest = ::testing::Test;

TEST_F(SagemakerJobRuntimeIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::SagemakerJobRuntime::SagemakerJobRuntimeClient>("SagemakerJobRuntimeIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
