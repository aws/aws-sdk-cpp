/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/braket/BraketClient.h>
#include <aws/braket/BraketEndpointProvider.h>
#include <aws/braket/BraketEndpointRules.h>
#include <aws/braket/BraketErrorMarshaller.h>
#include <aws/braket/BraketErrors.h>
#include <aws/braket/BraketRequest.h>
#include <aws/braket/BraketServiceClientModel.h>
#include <aws/braket/Braket_EXPORTS.h>
#include <aws/braket/model/ActionMetadata.h>
#include <aws/braket/model/AlgorithmSpecification.h>
#include <aws/braket/model/Association.h>
#include <aws/braket/model/AssociationType.h>
#include <aws/braket/model/CancelJobRequest.h>
#include <aws/braket/model/CancelJobResult.h>
#include <aws/braket/model/CancelQuantumTaskRequest.h>
#include <aws/braket/model/CancelQuantumTaskResult.h>
#include <aws/braket/model/CancellationStatus.h>
#include <aws/braket/model/CompressionType.h>
#include <aws/braket/model/ContainerImage.h>
#include <aws/braket/model/CreateJobRequest.h>
#include <aws/braket/model/CreateJobResult.h>
#include <aws/braket/model/CreateQuantumTaskRequest.h>
#include <aws/braket/model/CreateQuantumTaskResult.h>
#include <aws/braket/model/DataSource.h>
#include <aws/braket/model/DeviceConfig.h>
#include <aws/braket/model/DeviceQueueInfo.h>
#include <aws/braket/model/DeviceStatus.h>
#include <aws/braket/model/DeviceSummary.h>
#include <aws/braket/model/DeviceType.h>
#include <aws/braket/model/GetDeviceRequest.h>
#include <aws/braket/model/GetDeviceResult.h>
#include <aws/braket/model/GetJobRequest.h>
#include <aws/braket/model/GetJobResult.h>
#include <aws/braket/model/GetQuantumTaskRequest.h>
#include <aws/braket/model/GetQuantumTaskResult.h>
#include <aws/braket/model/HybridJobAdditionalAttributeName.h>
#include <aws/braket/model/HybridJobQueueInfo.h>
#include <aws/braket/model/InputFileConfig.h>
#include <aws/braket/model/InstanceConfig.h>
#include <aws/braket/model/InstanceType.h>
#include <aws/braket/model/JobCheckpointConfig.h>
#include <aws/braket/model/JobEventDetails.h>
#include <aws/braket/model/JobEventType.h>
#include <aws/braket/model/JobOutputDataConfig.h>
#include <aws/braket/model/JobPrimaryStatus.h>
#include <aws/braket/model/JobStoppingCondition.h>
#include <aws/braket/model/JobSummary.h>
#include <aws/braket/model/ListTagsForResourceRequest.h>
#include <aws/braket/model/ListTagsForResourceResult.h>
#include <aws/braket/model/ProgramSetValidationFailure.h>
#include <aws/braket/model/QuantumTaskAdditionalAttributeName.h>
#include <aws/braket/model/QuantumTaskQueueInfo.h>
#include <aws/braket/model/QuantumTaskStatus.h>
#include <aws/braket/model/QuantumTaskSummary.h>
#include <aws/braket/model/QueueName.h>
#include <aws/braket/model/QueuePriority.h>
#include <aws/braket/model/S3DataSource.h>
#include <aws/braket/model/ScriptModeConfig.h>
#include <aws/braket/model/SearchDevicesFilter.h>
#include <aws/braket/model/SearchDevicesRequest.h>
#include <aws/braket/model/SearchDevicesResult.h>
#include <aws/braket/model/SearchJobsFilter.h>
#include <aws/braket/model/SearchJobsFilterOperator.h>
#include <aws/braket/model/SearchJobsRequest.h>
#include <aws/braket/model/SearchJobsResult.h>
#include <aws/braket/model/SearchQuantumTasksFilter.h>
#include <aws/braket/model/SearchQuantumTasksFilterOperator.h>
#include <aws/braket/model/SearchQuantumTasksRequest.h>
#include <aws/braket/model/SearchQuantumTasksResult.h>
#include <aws/braket/model/TagResourceRequest.h>
#include <aws/braket/model/TagResourceResult.h>
#include <aws/braket/model/UntagResourceRequest.h>
#include <aws/braket/model/UntagResourceResult.h>
#include <aws/braket/model/ValidationException.h>
#include <aws/braket/model/ValidationExceptionReason.h>

using BraketIncludeTest = ::testing::Test;

TEST_F(BraketIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::Braket::BraketClient>("BraketIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
