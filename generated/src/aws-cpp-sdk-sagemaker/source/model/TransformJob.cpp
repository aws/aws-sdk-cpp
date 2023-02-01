/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/TransformJob.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

TransformJob::TransformJob() : 
    m_transformJobNameHasBeenSet(false),
    m_transformJobArnHasBeenSet(false),
    m_transformJobStatus(TransformJobStatus::NOT_SET),
    m_transformJobStatusHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_modelNameHasBeenSet(false),
    m_maxConcurrentTransforms(0),
    m_maxConcurrentTransformsHasBeenSet(false),
    m_modelClientConfigHasBeenSet(false),
    m_maxPayloadInMB(0),
    m_maxPayloadInMBHasBeenSet(false),
    m_batchStrategy(BatchStrategy::NOT_SET),
    m_batchStrategyHasBeenSet(false),
    m_environmentHasBeenSet(false),
    m_transformInputHasBeenSet(false),
    m_transformOutputHasBeenSet(false),
    m_transformResourcesHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_transformStartTimeHasBeenSet(false),
    m_transformEndTimeHasBeenSet(false),
    m_labelingJobArnHasBeenSet(false),
    m_autoMLJobArnHasBeenSet(false),
    m_dataProcessingHasBeenSet(false),
    m_experimentConfigHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

TransformJob::TransformJob(JsonView jsonValue) : 
    m_transformJobNameHasBeenSet(false),
    m_transformJobArnHasBeenSet(false),
    m_transformJobStatus(TransformJobStatus::NOT_SET),
    m_transformJobStatusHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_modelNameHasBeenSet(false),
    m_maxConcurrentTransforms(0),
    m_maxConcurrentTransformsHasBeenSet(false),
    m_modelClientConfigHasBeenSet(false),
    m_maxPayloadInMB(0),
    m_maxPayloadInMBHasBeenSet(false),
    m_batchStrategy(BatchStrategy::NOT_SET),
    m_batchStrategyHasBeenSet(false),
    m_environmentHasBeenSet(false),
    m_transformInputHasBeenSet(false),
    m_transformOutputHasBeenSet(false),
    m_transformResourcesHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_transformStartTimeHasBeenSet(false),
    m_transformEndTimeHasBeenSet(false),
    m_labelingJobArnHasBeenSet(false),
    m_autoMLJobArnHasBeenSet(false),
    m_dataProcessingHasBeenSet(false),
    m_experimentConfigHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

TransformJob& TransformJob::operator =(JsonView jsonValue)
{
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

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue TransformJob::Jsonize() const
{
  JsonValue payload;

  if(m_transformJobNameHasBeenSet)
  {
   payload.WithString("TransformJobName", m_transformJobName);

  }

  if(m_transformJobArnHasBeenSet)
  {
   payload.WithString("TransformJobArn", m_transformJobArn);

  }

  if(m_transformJobStatusHasBeenSet)
  {
   payload.WithString("TransformJobStatus", TransformJobStatusMapper::GetNameForTransformJobStatus(m_transformJobStatus));
  }

  if(m_failureReasonHasBeenSet)
  {
   payload.WithString("FailureReason", m_failureReason);

  }

  if(m_modelNameHasBeenSet)
  {
   payload.WithString("ModelName", m_modelName);

  }

  if(m_maxConcurrentTransformsHasBeenSet)
  {
   payload.WithInteger("MaxConcurrentTransforms", m_maxConcurrentTransforms);

  }

  if(m_modelClientConfigHasBeenSet)
  {
   payload.WithObject("ModelClientConfig", m_modelClientConfig.Jsonize());

  }

  if(m_maxPayloadInMBHasBeenSet)
  {
   payload.WithInteger("MaxPayloadInMB", m_maxPayloadInMB);

  }

  if(m_batchStrategyHasBeenSet)
  {
   payload.WithString("BatchStrategy", BatchStrategyMapper::GetNameForBatchStrategy(m_batchStrategy));
  }

  if(m_environmentHasBeenSet)
  {
   JsonValue environmentJsonMap;
   for(auto& environmentItem : m_environment)
   {
     environmentJsonMap.WithString(environmentItem.first, environmentItem.second);
   }
   payload.WithObject("Environment", std::move(environmentJsonMap));

  }

  if(m_transformInputHasBeenSet)
  {
   payload.WithObject("TransformInput", m_transformInput.Jsonize());

  }

  if(m_transformOutputHasBeenSet)
  {
   payload.WithObject("TransformOutput", m_transformOutput.Jsonize());

  }

  if(m_transformResourcesHasBeenSet)
  {
   payload.WithObject("TransformResources", m_transformResources.Jsonize());

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_transformStartTimeHasBeenSet)
  {
   payload.WithDouble("TransformStartTime", m_transformStartTime.SecondsWithMSPrecision());
  }

  if(m_transformEndTimeHasBeenSet)
  {
   payload.WithDouble("TransformEndTime", m_transformEndTime.SecondsWithMSPrecision());
  }

  if(m_labelingJobArnHasBeenSet)
  {
   payload.WithString("LabelingJobArn", m_labelingJobArn);

  }

  if(m_autoMLJobArnHasBeenSet)
  {
   payload.WithString("AutoMLJobArn", m_autoMLJobArn);

  }

  if(m_dataProcessingHasBeenSet)
  {
   payload.WithObject("DataProcessing", m_dataProcessing.Jsonize());

  }

  if(m_experimentConfigHasBeenSet)
  {
   payload.WithObject("ExperimentConfig", m_experimentConfig.Jsonize());

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
