/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/CopyProjectVersionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Rekognition::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CopyProjectVersionRequest::CopyProjectVersionRequest() : 
    m_sourceProjectArnHasBeenSet(false),
    m_sourceProjectVersionArnHasBeenSet(false),
    m_destinationProjectArnHasBeenSet(false),
    m_versionNameHasBeenSet(false),
    m_outputConfigHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false)
{
}

Aws::String CopyProjectVersionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_sourceProjectArnHasBeenSet)
  {
   payload.WithString("SourceProjectArn", m_sourceProjectArn);

  }

  if(m_sourceProjectVersionArnHasBeenSet)
  {
   payload.WithString("SourceProjectVersionArn", m_sourceProjectVersionArn);

  }

  if(m_destinationProjectArnHasBeenSet)
  {
   payload.WithString("DestinationProjectArn", m_destinationProjectArn);

  }

  if(m_versionNameHasBeenSet)
  {
   payload.WithString("VersionName", m_versionName);

  }

  if(m_outputConfigHasBeenSet)
  {
   payload.WithObject("OutputConfig", m_outputConfig.Jsonize());

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

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("KmsKeyId", m_kmsKeyId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CopyProjectVersionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "RekognitionService.CopyProjectVersion"));
  return headers;

}




