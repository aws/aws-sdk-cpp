/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-geospatial/model/StartEarthObservationJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMakerGeospatial::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartEarthObservationJobRequest::StartEarthObservationJobRequest() : 
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_executionRoleArnHasBeenSet(false),
    m_inputConfigHasBeenSet(false),
    m_jobConfigHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String StartEarthObservationJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  if(m_executionRoleArnHasBeenSet)
  {
   payload.WithString("ExecutionRoleArn", m_executionRoleArn);

  }

  if(m_inputConfigHasBeenSet)
  {
   payload.WithObject("InputConfig", m_inputConfig.Jsonize());

  }

  if(m_jobConfigHasBeenSet)
  {
   payload.WithObject("JobConfig", m_jobConfig.Jsonize());

  }

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("KmsKeyId", m_kmsKeyId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("Tags", std::move(tagsJsonMap));

  }

  return payload.View().WriteReadable();
}




