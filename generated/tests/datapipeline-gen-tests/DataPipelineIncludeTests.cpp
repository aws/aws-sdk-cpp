/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/datapipeline/DataPipelineClient.h>
#include <aws/datapipeline/DataPipelineEndpointProvider.h>
#include <aws/datapipeline/DataPipelineEndpointRules.h>
#include <aws/datapipeline/DataPipelineErrorMarshaller.h>
#include <aws/datapipeline/DataPipelineErrors.h>
#include <aws/datapipeline/DataPipelineRequest.h>
#include <aws/datapipeline/DataPipelineServiceClientModel.h>
#include <aws/datapipeline/DataPipeline_EXPORTS.h>
#include <aws/datapipeline/model/ActivatePipelineRequest.h>
#include <aws/datapipeline/model/ActivatePipelineResult.h>
#include <aws/datapipeline/model/AddTagsRequest.h>
#include <aws/datapipeline/model/AddTagsResult.h>
#include <aws/datapipeline/model/CreatePipelineRequest.h>
#include <aws/datapipeline/model/CreatePipelineResult.h>
#include <aws/datapipeline/model/DeactivatePipelineRequest.h>
#include <aws/datapipeline/model/DeactivatePipelineResult.h>
#include <aws/datapipeline/model/DeletePipelineRequest.h>
#include <aws/datapipeline/model/DescribeObjectsRequest.h>
#include <aws/datapipeline/model/DescribeObjectsResult.h>
#include <aws/datapipeline/model/DescribePipelinesRequest.h>
#include <aws/datapipeline/model/DescribePipelinesResult.h>
#include <aws/datapipeline/model/EvaluateExpressionRequest.h>
#include <aws/datapipeline/model/EvaluateExpressionResult.h>
#include <aws/datapipeline/model/Field.h>
#include <aws/datapipeline/model/GetPipelineDefinitionRequest.h>
#include <aws/datapipeline/model/GetPipelineDefinitionResult.h>
#include <aws/datapipeline/model/InstanceIdentity.h>
#include <aws/datapipeline/model/ListPipelinesRequest.h>
#include <aws/datapipeline/model/ListPipelinesResult.h>
#include <aws/datapipeline/model/Operator.h>
#include <aws/datapipeline/model/OperatorType.h>
#include <aws/datapipeline/model/ParameterAttribute.h>
#include <aws/datapipeline/model/ParameterObject.h>
#include <aws/datapipeline/model/ParameterValue.h>
#include <aws/datapipeline/model/PipelineDescription.h>
#include <aws/datapipeline/model/PipelineIdName.h>
#include <aws/datapipeline/model/PipelineObject.h>
#include <aws/datapipeline/model/PollForTaskRequest.h>
#include <aws/datapipeline/model/PollForTaskResult.h>
#include <aws/datapipeline/model/PutPipelineDefinitionRequest.h>
#include <aws/datapipeline/model/PutPipelineDefinitionResult.h>
#include <aws/datapipeline/model/Query.h>
#include <aws/datapipeline/model/QueryObjectsRequest.h>
#include <aws/datapipeline/model/QueryObjectsResult.h>
#include <aws/datapipeline/model/RemoveTagsRequest.h>
#include <aws/datapipeline/model/RemoveTagsResult.h>
#include <aws/datapipeline/model/ReportTaskProgressRequest.h>
#include <aws/datapipeline/model/ReportTaskProgressResult.h>
#include <aws/datapipeline/model/ReportTaskRunnerHeartbeatRequest.h>
#include <aws/datapipeline/model/ReportTaskRunnerHeartbeatResult.h>
#include <aws/datapipeline/model/Selector.h>
#include <aws/datapipeline/model/SetStatusRequest.h>
#include <aws/datapipeline/model/SetTaskStatusRequest.h>
#include <aws/datapipeline/model/SetTaskStatusResult.h>
#include <aws/datapipeline/model/Tag.h>
#include <aws/datapipeline/model/TaskObject.h>
#include <aws/datapipeline/model/TaskStatus.h>
#include <aws/datapipeline/model/ValidatePipelineDefinitionRequest.h>
#include <aws/datapipeline/model/ValidatePipelineDefinitionResult.h>
#include <aws/datapipeline/model/ValidationError.h>
#include <aws/datapipeline/model/ValidationWarning.h>

using DataPipelineIncludeTest = ::testing::Test;

TEST_F(DataPipelineIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::DataPipeline::DataPipelineClient>("DataPipelineIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
