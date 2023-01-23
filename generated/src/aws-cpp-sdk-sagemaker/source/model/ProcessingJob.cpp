/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ProcessingJob.h>
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

ProcessingJob::ProcessingJob() : 
    m_processingInputsHasBeenSet(false),
    m_processingOutputConfigHasBeenSet(false),
    m_processingJobNameHasBeenSet(false),
    m_processingResourcesHasBeenSet(false),
    m_stoppingConditionHasBeenSet(false),
    m_appSpecificationHasBeenSet(false),
    m_environmentHasBeenSet(false),
    m_networkConfigHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_experimentConfigHasBeenSet(false),
    m_processingJobArnHasBeenSet(false),
    m_processingJobStatus(ProcessingJobStatus::NOT_SET),
    m_processingJobStatusHasBeenSet(false),
    m_exitMessageHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_processingEndTimeHasBeenSet(false),
    m_processingStartTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_monitoringScheduleArnHasBeenSet(false),
    m_autoMLJobArnHasBeenSet(false),
    m_trainingJobArnHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

ProcessingJob::ProcessingJob(JsonView jsonValue) : 
    m_processingInputsHasBeenSet(false),
    m_processingOutputConfigHasBeenSet(false),
    m_processingJobNameHasBeenSet(false),
    m_processingResourcesHasBeenSet(false),
    m_stoppingConditionHasBeenSet(false),
    m_appSpecificationHasBeenSet(false),
    m_environmentHasBeenSet(false),
    m_networkConfigHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_experimentConfigHasBeenSet(false),
    m_processingJobArnHasBeenSet(false),
    m_processingJobStatus(ProcessingJobStatus::NOT_SET),
    m_processingJobStatusHasBeenSet(false),
    m_exitMessageHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_processingEndTimeHasBeenSet(false),
    m_processingStartTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_monitoringScheduleArnHasBeenSet(false),
    m_autoMLJobArnHasBeenSet(false),
    m_trainingJobArnHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

ProcessingJob& ProcessingJob::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ProcessingInputs"))
  {
    Aws::Utils::Array<JsonView> processingInputsJsonList = jsonValue.GetArray("ProcessingInputs");
    for(unsigned processingInputsIndex = 0; processingInputsIndex < processingInputsJsonList.GetLength(); ++processingInputsIndex)
    {
      m_processingInputs.push_back(processingInputsJsonList[processingInputsIndex].AsObject());
    }
    m_processingInputsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProcessingOutputConfig"))
  {
    m_processingOutputConfig = jsonValue.GetObject("ProcessingOutputConfig");

    m_processingOutputConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProcessingJobName"))
  {
    m_processingJobName = jsonValue.GetString("ProcessingJobName");

    m_processingJobNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProcessingResources"))
  {
    m_processingResources = jsonValue.GetObject("ProcessingResources");

    m_processingResourcesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StoppingCondition"))
  {
    m_stoppingCondition = jsonValue.GetObject("StoppingCondition");

    m_stoppingConditionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AppSpecification"))
  {
    m_appSpecification = jsonValue.GetObject("AppSpecification");

    m_appSpecificationHasBeenSet = true;
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

  if(jsonValue.ValueExists("NetworkConfig"))
  {
    m_networkConfig = jsonValue.GetObject("NetworkConfig");

    m_networkConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExperimentConfig"))
  {
    m_experimentConfig = jsonValue.GetObject("ExperimentConfig");

    m_experimentConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProcessingJobArn"))
  {
    m_processingJobArn = jsonValue.GetString("ProcessingJobArn");

    m_processingJobArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProcessingJobStatus"))
  {
    m_processingJobStatus = ProcessingJobStatusMapper::GetProcessingJobStatusForName(jsonValue.GetString("ProcessingJobStatus"));

    m_processingJobStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExitMessage"))
  {
    m_exitMessage = jsonValue.GetString("ExitMessage");

    m_exitMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FailureReason"))
  {
    m_failureReason = jsonValue.GetString("FailureReason");

    m_failureReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProcessingEndTime"))
  {
    m_processingEndTime = jsonValue.GetDouble("ProcessingEndTime");

    m_processingEndTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProcessingStartTime"))
  {
    m_processingStartTime = jsonValue.GetDouble("ProcessingStartTime");

    m_processingStartTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

    m_lastModifiedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MonitoringScheduleArn"))
  {
    m_monitoringScheduleArn = jsonValue.GetString("MonitoringScheduleArn");

    m_monitoringScheduleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AutoMLJobArn"))
  {
    m_autoMLJobArn = jsonValue.GetString("AutoMLJobArn");

    m_autoMLJobArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TrainingJobArn"))
  {
    m_trainingJobArn = jsonValue.GetString("TrainingJobArn");

    m_trainingJobArnHasBeenSet = true;
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

JsonValue ProcessingJob::Jsonize() const
{
  JsonValue payload;

  if(m_processingInputsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> processingInputsJsonList(m_processingInputs.size());
   for(unsigned processingInputsIndex = 0; processingInputsIndex < processingInputsJsonList.GetLength(); ++processingInputsIndex)
   {
     processingInputsJsonList[processingInputsIndex].AsObject(m_processingInputs[processingInputsIndex].Jsonize());
   }
   payload.WithArray("ProcessingInputs", std::move(processingInputsJsonList));

  }

  if(m_processingOutputConfigHasBeenSet)
  {
   payload.WithObject("ProcessingOutputConfig", m_processingOutputConfig.Jsonize());

  }

  if(m_processingJobNameHasBeenSet)
  {
   payload.WithString("ProcessingJobName", m_processingJobName);

  }

  if(m_processingResourcesHasBeenSet)
  {
   payload.WithObject("ProcessingResources", m_processingResources.Jsonize());

  }

  if(m_stoppingConditionHasBeenSet)
  {
   payload.WithObject("StoppingCondition", m_stoppingCondition.Jsonize());

  }

  if(m_appSpecificationHasBeenSet)
  {
   payload.WithObject("AppSpecification", m_appSpecification.Jsonize());

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

  if(m_networkConfigHasBeenSet)
  {
   payload.WithObject("NetworkConfig", m_networkConfig.Jsonize());

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  if(m_experimentConfigHasBeenSet)
  {
   payload.WithObject("ExperimentConfig", m_experimentConfig.Jsonize());

  }

  if(m_processingJobArnHasBeenSet)
  {
   payload.WithString("ProcessingJobArn", m_processingJobArn);

  }

  if(m_processingJobStatusHasBeenSet)
  {
   payload.WithString("ProcessingJobStatus", ProcessingJobStatusMapper::GetNameForProcessingJobStatus(m_processingJobStatus));
  }

  if(m_exitMessageHasBeenSet)
  {
   payload.WithString("ExitMessage", m_exitMessage);

  }

  if(m_failureReasonHasBeenSet)
  {
   payload.WithString("FailureReason", m_failureReason);

  }

  if(m_processingEndTimeHasBeenSet)
  {
   payload.WithDouble("ProcessingEndTime", m_processingEndTime.SecondsWithMSPrecision());
  }

  if(m_processingStartTimeHasBeenSet)
  {
   payload.WithDouble("ProcessingStartTime", m_processingStartTime.SecondsWithMSPrecision());
  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_monitoringScheduleArnHasBeenSet)
  {
   payload.WithString("MonitoringScheduleArn", m_monitoringScheduleArn);

  }

  if(m_autoMLJobArnHasBeenSet)
  {
   payload.WithString("AutoMLJobArn", m_autoMLJobArn);

  }

  if(m_trainingJobArnHasBeenSet)
  {
   payload.WithString("TrainingJobArn", m_trainingJobArn);

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
