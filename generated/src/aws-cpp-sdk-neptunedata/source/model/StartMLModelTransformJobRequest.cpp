/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptunedata/model/StartMLModelTransformJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::neptunedata::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartMLModelTransformJobRequest::StartMLModelTransformJobRequest() : 
    m_idHasBeenSet(false),
    m_dataProcessingJobIdHasBeenSet(false),
    m_mlModelTrainingJobIdHasBeenSet(false),
    m_trainingJobNameHasBeenSet(false),
    m_modelTransformOutputS3LocationHasBeenSet(false),
    m_sagemakerIamRoleArnHasBeenSet(false),
    m_neptuneIamRoleArnHasBeenSet(false),
    m_customModelTransformParametersHasBeenSet(false),
    m_baseProcessingInstanceTypeHasBeenSet(false),
    m_baseProcessingInstanceVolumeSizeInGB(0),
    m_baseProcessingInstanceVolumeSizeInGBHasBeenSet(false),
    m_subnetsHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_volumeEncryptionKMSKeyHasBeenSet(false),
    m_s3OutputEncryptionKMSKeyHasBeenSet(false)
{
}

Aws::String StartMLModelTransformJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_dataProcessingJobIdHasBeenSet)
  {
   payload.WithString("dataProcessingJobId", m_dataProcessingJobId);

  }

  if(m_mlModelTrainingJobIdHasBeenSet)
  {
   payload.WithString("mlModelTrainingJobId", m_mlModelTrainingJobId);

  }

  if(m_trainingJobNameHasBeenSet)
  {
   payload.WithString("trainingJobName", m_trainingJobName);

  }

  if(m_modelTransformOutputS3LocationHasBeenSet)
  {
   payload.WithString("modelTransformOutputS3Location", m_modelTransformOutputS3Location);

  }

  if(m_sagemakerIamRoleArnHasBeenSet)
  {
   payload.WithString("sagemakerIamRoleArn", m_sagemakerIamRoleArn);

  }

  if(m_neptuneIamRoleArnHasBeenSet)
  {
   payload.WithString("neptuneIamRoleArn", m_neptuneIamRoleArn);

  }

  if(m_customModelTransformParametersHasBeenSet)
  {
   payload.WithObject("customModelTransformParameters", m_customModelTransformParameters.Jsonize());

  }

  if(m_baseProcessingInstanceTypeHasBeenSet)
  {
   payload.WithString("baseProcessingInstanceType", m_baseProcessingInstanceType);

  }

  if(m_baseProcessingInstanceVolumeSizeInGBHasBeenSet)
  {
   payload.WithInteger("baseProcessingInstanceVolumeSizeInGB", m_baseProcessingInstanceVolumeSizeInGB);

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

  return payload.View().WriteReadable();
}




