/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/sagemaker-featurestore-runtime/SageMakerFeatureStoreRuntimeClient.h>
#include <aws/sagemaker-featurestore-runtime/SageMakerFeatureStoreRuntimeEndpointProvider.h>
#include <aws/sagemaker-featurestore-runtime/SageMakerFeatureStoreRuntimeEndpointRules.h>
#include <aws/sagemaker-featurestore-runtime/SageMakerFeatureStoreRuntimeErrorMarshaller.h>
#include <aws/sagemaker-featurestore-runtime/SageMakerFeatureStoreRuntimeErrors.h>
#include <aws/sagemaker-featurestore-runtime/SageMakerFeatureStoreRuntimeRequest.h>
#include <aws/sagemaker-featurestore-runtime/SageMakerFeatureStoreRuntimeServiceClientModel.h>
#include <aws/sagemaker-featurestore-runtime/SageMakerFeatureStoreRuntime_EXPORTS.h>
#include <aws/sagemaker-featurestore-runtime/model/BatchGetRecordError.h>
#include <aws/sagemaker-featurestore-runtime/model/BatchGetRecordIdentifier.h>
#include <aws/sagemaker-featurestore-runtime/model/BatchGetRecordRequest.h>
#include <aws/sagemaker-featurestore-runtime/model/BatchGetRecordResult.h>
#include <aws/sagemaker-featurestore-runtime/model/BatchGetRecordResultDetail.h>
#include <aws/sagemaker-featurestore-runtime/model/DeleteRecordRequest.h>
#include <aws/sagemaker-featurestore-runtime/model/DeletionMode.h>
#include <aws/sagemaker-featurestore-runtime/model/ExpirationTimeResponse.h>
#include <aws/sagemaker-featurestore-runtime/model/FeatureValue.h>
#include <aws/sagemaker-featurestore-runtime/model/GetRecordRequest.h>
#include <aws/sagemaker-featurestore-runtime/model/GetRecordResult.h>
#include <aws/sagemaker-featurestore-runtime/model/PutRecordRequest.h>
#include <aws/sagemaker-featurestore-runtime/model/TargetStore.h>
#include <aws/sagemaker-featurestore-runtime/model/TtlDuration.h>
#include <aws/sagemaker-featurestore-runtime/model/TtlDurationUnit.h>

using SageMakerFeatureStoreRuntimeIncludeTest = ::testing::Test;

TEST_F(SageMakerFeatureStoreRuntimeIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::SageMakerFeatureStoreRuntime::SageMakerFeatureStoreRuntimeClient>("SageMakerFeatureStoreRuntimeIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
