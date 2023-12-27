/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptunedata/model/StartMLModelTrainingJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::neptunedata::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartMLModelTrainingJobRequest::StartMLModelTrainingJobRequest() : 
    m_idHasBeenSet(false),
    m_previousModelTrainingJobIdHasBeenSet(false),
    m_dataProcessingJobIdHasBeenSet(false),
    m_trainModelS3LocationHasBeenSet(false),
    m_sagemakerIamRoleArnHasBeenSet(false),
    m_neptuneIamRoleArnHasBeenSet(false),
    m_baseProcessingInstanceTypeHasBeenSet(false),
    m_trainingInstanceTypeHasBeenSet(false),
    m_trainingInstanceVolumeSizeInGB(0),
    m_trainingInstanceVolumeSizeInGBHasBeenSet(false),
    m_trainingTimeOutInSeconds(0),
    m_trainingTimeOutInSecondsHasBeenSet(false),
    m_maxHPONumberOfTrainingJobs(0),
    m_maxHPONumberOfTrainingJobsHasBeenSet(false),
    m_maxHPOParallelTrainingJobs(0),
    m_maxHPOParallelTrainingJobsHasBeenSet(false),
    m_subnetsHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_volumeEncryptionKMSKeyHasBeenSet(false),
    m_s3OutputEncryptionKMSKeyHasBeenSet(false),
    m_enableManagedSpotTraining(false),
    m_enableManagedSpotTrainingHasBeenSet(false),
    m_customModelTrainingParametersHasBeenSet(false)
{
}

Aws::String StartMLModelTrainingJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_previousModelTrainingJobIdHasBeenSet)
  {
   payload.WithString("previousModelTrainingJobId", m_previousModelTrainingJobId);

  }

  if(m_dataProcessingJobIdHasBeenSet)
  {
   payload.WithString("dataProcessingJobId", m_dataProcessingJobId);

  }

  if(m_trainModelS3LocationHasBeenSet)
  {
   payload.WithString("trainModelS3Location", m_trainModelS3Location);

  }

  if(m_sagemakerIamRoleArnHasBeenSet)
  {
   payload.WithString("sagemakerIamRoleArn", m_sagemakerIamRoleArn);

  }

  if(m_neptuneIamRoleArnHasBeenSet)
  {
   payload.WithString("neptuneIamRoleArn", m_neptuneIamRoleArn);

  }

  if(m_baseProcessingInstanceTypeHasBeenSet)
  {
   payload.WithString("baseProcessingInstanceType", m_baseProcessingInstanceType);

  }

  if(m_trainingInstanceTypeHasBeenSet)
  {
   payload.WithString("trainingInstanceType", m_trainingInstanceType);

  }

  if(m_trainingInstanceVolumeSizeInGBHasBeenSet)
  {
   payload.WithInteger("trainingInstanceVolumeSizeInGB", m_trainingInstanceVolumeSizeInGB);

  }

  if(m_trainingTimeOutInSecondsHasBeenSet)
  {
   payload.WithInteger("trainingTimeOutInSeconds", m_trainingTimeOutInSeconds);

  }

  if(m_maxHPONumberOfTrainingJobsHasBeenSet)
  {
   payload.WithInteger("maxHPONumberOfTrainingJobs", m_maxHPONumberOfTrainingJobs);

  }

  if(m_maxHPOParallelTrainingJobsHasBeenSet)
  {
   payload.WithInteger("maxHPOParallelTrainingJobs", m_maxHPOParallelTrainingJobs);

  }

  if(m_subnetsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> subnetsJsonList(m_subnets.size());
   for(unsigned subnetsIndex = 0; subnetsIndex < subnetsJsonList.GetLength(); ++subnetsIndex)
   {
     subnetsJsonList[subnetsIndex].AsString(m_subnets[subnetsIndex]);
   }
   payload.WithArray("subnets", std::move(subnetsJsonList));

  }

  if(m_securityGroupIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> securityGroupIdsJsonList(m_securityGroupIds.size());
   for(unsigned securityGroupIdsIndex = 0; securityGroupIdsIndex < securityGroupIdsJsonList.GetLength(); ++securityGroupIdsIndex)
   {
     securityGroupIdsJsonList[securityGroupIdsIndex].AsString(m_securityGroupIds[securityGroupIdsIndex]);
   }
   payload.WithArray("securityGroupIds", std::move(securityGroupIdsJsonList));

  }

  if(m_volumeEncryptionKMSKeyHasBeenSet)
  {
   payload.WithString("volumeEncryptionKMSKey", m_volumeEncryptionKMSKey);

  }

  if(m_s3OutputEncryptionKMSKeyHasBeenSet)
  {
   payload.WithString("s3OutputEncryptionKMSKey", m_s3OutputEncryptionKMSKey);

  }

  if(m_enableManagedSpotTrainingHasBeenSet)
  {
   payload.WithBool("enableManagedSpotTraining", m_enableManagedSpotTraining);

  }

  if(m_customModelTrainingParametersHasBeenSet)
  {
   payload.WithObject("customModelTrainingParameters", m_customModelTrainingParameters.Jsonize());

  }

  return payload.View().WriteReadable();
}




