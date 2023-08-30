/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptunedata/model/StartMLDataProcessingJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::neptunedata::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartMLDataProcessingJobRequest::StartMLDataProcessingJobRequest() : 
    m_idHasBeenSet(false),
    m_previousDataProcessingJobIdHasBeenSet(false),
    m_inputDataS3LocationHasBeenSet(false),
    m_processedDataS3LocationHasBeenSet(false),
    m_sagemakerIamRoleArnHasBeenSet(false),
    m_neptuneIamRoleArnHasBeenSet(false),
    m_processingInstanceTypeHasBeenSet(false),
    m_processingInstanceVolumeSizeInGB(0),
    m_processingInstanceVolumeSizeInGBHasBeenSet(false),
    m_processingTimeOutInSeconds(0),
    m_processingTimeOutInSecondsHasBeenSet(false),
    m_modelTypeHasBeenSet(false),
    m_configFileNameHasBeenSet(false),
    m_subnetsHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_volumeEncryptionKMSKeyHasBeenSet(false),
    m_s3OutputEncryptionKMSKeyHasBeenSet(false)
{
}

Aws::String StartMLDataProcessingJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_previousDataProcessingJobIdHasBeenSet)
  {
   payload.WithString("previousDataProcessingJobId", m_previousDataProcessingJobId);

  }

  if(m_inputDataS3LocationHasBeenSet)
  {
   payload.WithString("inputDataS3Location", m_inputDataS3Location);

  }

  if(m_processedDataS3LocationHasBeenSet)
  {
   payload.WithString("processedDataS3Location", m_processedDataS3Location);

  }

  if(m_sagemakerIamRoleArnHasBeenSet)
  {
   payload.WithString("sagemakerIamRoleArn", m_sagemakerIamRoleArn);

  }

  if(m_neptuneIamRoleArnHasBeenSet)
  {
   payload.WithString("neptuneIamRoleArn", m_neptuneIamRoleArn);

  }

  if(m_processingInstanceTypeHasBeenSet)
  {
   payload.WithString("processingInstanceType", m_processingInstanceType);

  }

  if(m_processingInstanceVolumeSizeInGBHasBeenSet)
  {
   payload.WithInteger("processingInstanceVolumeSizeInGB", m_processingInstanceVolumeSizeInGB);

  }

  if(m_processingTimeOutInSecondsHasBeenSet)
  {
   payload.WithInteger("processingTimeOutInSeconds", m_processingTimeOutInSeconds);

  }

  if(m_modelTypeHasBeenSet)
  {
   payload.WithString("modelType", m_modelType);

  }

  if(m_configFileNameHasBeenSet)
  {
   payload.WithString("configFileName", m_configFileName);

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




