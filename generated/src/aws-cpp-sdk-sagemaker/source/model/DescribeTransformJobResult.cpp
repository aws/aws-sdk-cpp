/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DescribeTransformJobResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeTransformJobResult::DescribeTransformJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeTransformJobResult& DescribeTransformJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("TransformJobName"))
  {
    m_transformJobName = jsonValue.GetString("TransformJobName");
    m_transformJobNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TransformJobArn"))
  {
    m_transformJobArn = jsonValue.GetString("TransformJobArn");
    m_transformJobArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TransformJobStatus"))
  {
    m_transformJobStatus = TransformJobStatusMapper::GetTransformJobStatusForName(jsonValue.GetString("TransformJobStatus"));
    m_transformJobStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FailureReason"))
  {
    m_failureReason = jsonValue.GetString("FailureReason");
    m_failureReasonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ModelName"))
  {
    m_modelName = jsonValue.GetString("ModelName");
    m_modelNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MaxConcurrentTransforms"))
  {
    m_maxConcurrentTransforms = jsonValue.GetInteger("MaxConcurrentTransforms");
    m_maxConcurrentTransformsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ModelClientConfig"))
  {
    m_modelClientConfig = jsonValue.GetObject("ModelClientConfig");
    m_modelClientConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MaxPayloadInMB"))
  {
    m_maxPayloadInMB = jsonValue.GetInteger("MaxPayloadInMB");
    m_maxPayloadInMBHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BatchStrategy"))
  {
    m_batchStrategy = BatchStrategyMapper::GetBatchStrategyForName(jsonValue.GetString("BatchStrategy"));
    m_batchStrategyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Environment"))
  {
    Aws::Map<Aws::String, JsonView> environmentJsonMap = jsonValue.GetObject("Environment").GetAllObjects();
    for(auto& environmentItem : environmentJsonMap)
    {
      m_environment[environmentItem.first] = environmentItem.second.AsString();
    }
    m_environmentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TransformInput"))
  {
    m_transformInput = jsonValue.GetObject("TransformInput");
    m_transformInputHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TransformOutput"))
  {
    m_transformOutput = jsonValue.GetObject("TransformOutput");
    m_transformOutputHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DataCaptureConfig"))
  {
    m_dataCaptureConfig = jsonValue.GetObject("DataCaptureConfig");
    m_dataCaptureConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TransformResources"))
  {
    m_transformResources = jsonValue.GetObject("TransformResources");
    m_transformResourcesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TransformStartTime"))
  {
    m_transformStartTime = jsonValue.GetDouble("TransformStartTime");
    m_transformStartTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TransformEndTime"))
  {
    m_transformEndTime = jsonValue.GetDouble("TransformEndTime");
    m_transformEndTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LabelingJobArn"))
  {
    m_labelingJobArn = jsonValue.GetString("LabelingJobArn");
    m_labelingJobArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AutoMLJobArn"))
  {
    m_autoMLJobArn = jsonValue.GetString("AutoMLJobArn");
    m_autoMLJobArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DataProcessing"))
  {
    m_dataProcessing = jsonValue.GetObject("DataProcessing");
    m_dataProcessingHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ExperimentConfig"))
  {
    m_experimentConfig = jsonValue.GetObject("ExperimentConfig");
    m_experimentConfigHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
