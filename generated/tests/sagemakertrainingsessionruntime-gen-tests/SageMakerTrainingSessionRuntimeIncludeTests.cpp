/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/sagemakertrainingsessionruntime/SageMakerTrainingSessionRuntimeClient.h>
#include <aws/sagemakertrainingsessionruntime/SageMakerTrainingSessionRuntimeEndpointProvider.h>
#include <aws/sagemakertrainingsessionruntime/SageMakerTrainingSessionRuntimeErrorMarshaller.h>
#include <aws/sagemakertrainingsessionruntime/SageMakerTrainingSessionRuntimeErrors.h>
#include <aws/sagemakertrainingsessionruntime/SageMakerTrainingSessionRuntimePaginationBase.h>
#include <aws/sagemakertrainingsessionruntime/SageMakerTrainingSessionRuntimeRequest.h>
#include <aws/sagemakertrainingsessionruntime/SageMakerTrainingSessionRuntimeServiceClientModel.h>
#include <aws/sagemakertrainingsessionruntime/SageMakerTrainingSessionRuntimeWaiter.h>
#include <aws/sagemakertrainingsessionruntime/SageMakerTrainingSessionRuntime_EXPORTS.h>
#include <aws/sagemakertrainingsessionruntime/internal/SageMakerTrainingSessionRuntimeEndpointRules.h>
#include <aws/sagemakertrainingsessionruntime/model/AdamParamsConfig.h>
#include <aws/sagemakertrainingsessionruntime/model/ComputeLogprobsConfig.h>
#include <aws/sagemakertrainingsessionruntime/model/ComputeLogprobsResult.h>
#include <aws/sagemakertrainingsessionruntime/model/Datum.h>
#include <aws/sagemakertrainingsessionruntime/model/EncodedTextChunk.h>
#include <aws/sagemakertrainingsessionruntime/model/EncodedTextChunkType.h>
#include <aws/sagemakertrainingsessionruntime/model/ExecuteSamplingOperationRequest.h>
#include <aws/sagemakertrainingsessionruntime/model/ExecuteSamplingOperationResult.h>
#include <aws/sagemakertrainingsessionruntime/model/ExecuteTrainingOperationRequest.h>
#include <aws/sagemakertrainingsessionruntime/model/ExecuteTrainingOperationResult.h>
#include <aws/sagemakertrainingsessionruntime/model/ForwardBackwardConfig.h>
#include <aws/sagemakertrainingsessionruntime/model/ForwardBackwardResult.h>
#include <aws/sagemakertrainingsessionruntime/model/ForwardConfig.h>
#include <aws/sagemakertrainingsessionruntime/model/ForwardResult.h>
#include <aws/sagemakertrainingsessionruntime/model/GetSamplingOperationResultRequest.h>
#include <aws/sagemakertrainingsessionruntime/model/GetSamplingOperationResultResult.h>
#include <aws/sagemakertrainingsessionruntime/model/GetTrainingOperationResultRequest.h>
#include <aws/sagemakertrainingsessionruntime/model/GetTrainingOperationResultResult.h>
#include <aws/sagemakertrainingsessionruntime/model/LoadStateConfig.h>
#include <aws/sagemakertrainingsessionruntime/model/LoadStateResult.h>
#include <aws/sagemakertrainingsessionruntime/model/LoadWeightsForSamplingConfig.h>
#include <aws/sagemakertrainingsessionruntime/model/LoadWeightsForSamplingResult.h>
#include <aws/sagemakertrainingsessionruntime/model/LossFnName.h>
#include <aws/sagemakertrainingsessionruntime/model/ModelInput.h>
#include <aws/sagemakertrainingsessionruntime/model/OperationConfig.h>
#include <aws/sagemakertrainingsessionruntime/model/OperationResult.h>
#include <aws/sagemakertrainingsessionruntime/model/OptimizerStepConfig.h>
#include <aws/sagemakertrainingsessionruntime/model/OptimizerStepResult.h>
#include <aws/sagemakertrainingsessionruntime/model/RequestStatus.h>
#include <aws/sagemakertrainingsessionruntime/model/SampleConfig.h>
#include <aws/sagemakertrainingsessionruntime/model/SampleOperationConfig.h>
#include <aws/sagemakertrainingsessionruntime/model/SampleOperationResult.h>
#include <aws/sagemakertrainingsessionruntime/model/SampleResponse.h>
#include <aws/sagemakertrainingsessionruntime/model/SampleTokenUsage.h>
#include <aws/sagemakertrainingsessionruntime/model/SampleTrainingSessionRequest.h>
#include <aws/sagemakertrainingsessionruntime/model/SampleTrainingSessionResult.h>
#include <aws/sagemakertrainingsessionruntime/model/SampleTrainingSessionWithResponseStreamRequest.h>
#include <aws/sagemakertrainingsessionruntime/model/SampleTrainingSessionWithResponseStreamResult.h>
#include <aws/sagemakertrainingsessionruntime/model/SampledSequence.h>
#include <aws/sagemakertrainingsessionruntime/model/SamplingParams.h>
#include <aws/sagemakertrainingsessionruntime/model/SaveStateConfig.h>
#include <aws/sagemakertrainingsessionruntime/model/SaveStateResult.h>
#include <aws/sagemakertrainingsessionruntime/model/SaveWeightsConfig.h>
#include <aws/sagemakertrainingsessionruntime/model/SaveWeightsResult.h>
#include <aws/sagemakertrainingsessionruntime/model/StopReason.h>
#include <aws/sagemakertrainingsessionruntime/model/TensorData.h>
#include <aws/sagemakertrainingsessionruntime/model/TokenLogprob.h>
#include <aws/sagemakertrainingsessionruntime/model/TrainingTokenUsage.h>

using SageMakerTrainingSessionRuntimeIncludeTest = ::testing::Test;

TEST_F(SageMakerTrainingSessionRuntimeIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::SageMakerTrainingSessionRuntime::SageMakerTrainingSessionRuntimeClient>("SageMakerTrainingSessionRuntimeIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
