/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptunedata/model/CreateMLEndpointRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::neptunedata::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateMLEndpointRequest::CreateMLEndpointRequest() : 
    m_idHasBeenSet(false),
    m_mlModelTrainingJobIdHasBeenSet(false),
    m_mlModelTransformJobIdHasBeenSet(false),
    m_update(false),
    m_updateHasBeenSet(false),
    m_neptuneIamRoleArnHasBeenSet(false),
    m_modelNameHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_instanceCount(0),
    m_instanceCountHasBeenSet(false),
    m_volumeEncryptionKMSKeyHasBeenSet(false)
{
}

Aws::String CreateMLEndpointRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_mlModelTrainingJobIdHasBeenSet)
  {
   payload.WithString("mlModelTrainingJobId", m_mlModelTrainingJobId);

  }

  if(m_mlModelTransformJobIdHasBeenSet)
  {
   payload.WithString("mlModelTransformJobId", m_mlModelTransformJobId);

  }

  if(m_updateHasBeenSet)
  {
   payload.WithBool("update", m_update);

  }

  if(m_neptuneIamRoleArnHasBeenSet)
  {
   payload.WithString("neptuneIamRoleArn", m_neptuneIamRoleArn);

  }

  if(m_modelNameHasBeenSet)
  {
   payload.WithString("modelName", m_modelName);

  }

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("instanceType", m_instanceType);

  }

  if(m_instanceCountHasBeenSet)
  {
   payload.WithInteger("instanceCount", m_instanceCount);

  }

  if(m_volumeEncryptionKMSKeyHasBeenSet)
  {
   payload.WithString("volumeEncryptionKMSKey", m_volumeEncryptionKMSKey);

  }

  return payload.View().WriteReadable();
}




