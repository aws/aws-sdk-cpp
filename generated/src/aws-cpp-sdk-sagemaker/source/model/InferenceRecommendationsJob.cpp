/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/InferenceRecommendationsJob.h>
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

InferenceRecommendationsJob::InferenceRecommendationsJob() : 
    m_jobNameHasBeenSet(false),
    m_jobDescriptionHasBeenSet(false),
    m_jobType(RecommendationJobType::NOT_SET),
    m_jobTypeHasBeenSet(false),
    m_jobArnHasBeenSet(false),
    m_status(RecommendationJobStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_completionTimeHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_modelNameHasBeenSet(false),
    m_samplePayloadUrlHasBeenSet(false),
    m_modelPackageVersionArnHasBeenSet(false)
{
}

InferenceRecommendationsJob::InferenceRecommendationsJob(JsonView jsonValue) : 
    m_jobNameHasBeenSet(false),
    m_jobDescriptionHasBeenSet(false),
    m_jobType(RecommendationJobType::NOT_SET),
    m_jobTypeHasBeenSet(false),
    m_jobArnHasBeenSet(false),
    m_status(RecommendationJobStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_completionTimeHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_modelNameHasBeenSet(false),
    m_samplePayloadUrlHasBeenSet(false),
    m_modelPackageVersionArnHasBeenSet(false)
{
  *this = jsonValue;
}

InferenceRecommendationsJob& InferenceRecommendationsJob::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("JobName"))
  {
    m_jobName = jsonValue.GetString("JobName");

    m_jobNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("JobDescription"))
  {
    m_jobDescription = jsonValue.GetString("JobDescription");

    m_jobDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("JobType"))
  {
    m_jobType = RecommendationJobTypeMapper::GetRecommendationJobTypeForName(jsonValue.GetString("JobType"));

    m_jobTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("JobArn"))
  {
    m_jobArn = jsonValue.GetString("JobArn");

    m_jobArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = RecommendationJobStatusMapper::GetRecommendationJobStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CompletionTime"))
  {
    m_completionTime = jsonValue.GetDouble("CompletionTime");

    m_completionTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

    m_lastModifiedTimeHasBeenSet = true;
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

  if(jsonValue.ValueExists("SamplePayloadUrl"))
  {
    m_samplePayloadUrl = jsonValue.GetString("SamplePayloadUrl");

    m_samplePayloadUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ModelPackageVersionArn"))
  {
    m_modelPackageVersionArn = jsonValue.GetString("ModelPackageVersionArn");

    m_modelPackageVersionArnHasBeenSet = true;
  }

  return *this;
}

JsonValue InferenceRecommendationsJob::Jsonize() const
{
  JsonValue payload;

  if(m_jobNameHasBeenSet)
  {
   payload.WithString("JobName", m_jobName);

  }

  if(m_jobDescriptionHasBeenSet)
  {
   payload.WithString("JobDescription", m_jobDescription);

  }

  if(m_jobTypeHasBeenSet)
  {
   payload.WithString("JobType", RecommendationJobTypeMapper::GetNameForRecommendationJobType(m_jobType));
  }

  if(m_jobArnHasBeenSet)
  {
   payload.WithString("JobArn", m_jobArn);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", RecommendationJobStatusMapper::GetNameForRecommendationJobStatus(m_status));
  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_completionTimeHasBeenSet)
  {
   payload.WithDouble("CompletionTime", m_completionTime.SecondsWithMSPrecision());
  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  if(m_failureReasonHasBeenSet)
  {
   payload.WithString("FailureReason", m_failureReason);

  }

  if(m_modelNameHasBeenSet)
  {
   payload.WithString("ModelName", m_modelName);

  }

  if(m_samplePayloadUrlHasBeenSet)
  {
   payload.WithString("SamplePayloadUrl", m_samplePayloadUrl);

  }

  if(m_modelPackageVersionArnHasBeenSet)
  {
   payload.WithString("ModelPackageVersionArn", m_modelPackageVersionArn);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
