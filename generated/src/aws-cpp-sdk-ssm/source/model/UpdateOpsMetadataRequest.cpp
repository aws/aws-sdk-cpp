/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/UpdateOpsMetadataRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateOpsMetadataRequest::UpdateOpsMetadataRequest() : 
    m_opsMetadataArnHasBeenSet(false),
    m_metadataToUpdateHasBeenSet(false),
    m_keysToDeleteHasBeenSet(false)
{
}

Aws::String UpdateOpsMetadataRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_opsMetadataArnHasBeenSet)
  {
   payload.WithString("OpsMetadataArn", m_opsMetadataArn);

  }

  if(m_metadataToUpdateHasBeenSet)
  {
   JsonValue metadataToUpdateJsonMap;
   for(auto& metadataToUpdateItem : m_metadataToUpdate)
   {
     metadataToUpdateJsonMap.WithObject(metadataToUpdateItem.first, metadataToUpdateItem.second.Jsonize());
   }
   payload.WithObject("MetadataToUpdate", std::move(metadataToUpdateJsonMap));

  }

  if(m_keysToDeleteHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> keysToDeleteJsonList(m_keysToDelete.size());
   for(unsigned keysToDeleteIndex = 0; keysToDeleteIndex < keysToDeleteJsonList.GetLength(); ++keysToDeleteIndex)
   {
     keysToDeleteJsonList[keysToDeleteIndex].AsString(m_keysToDelete[keysToDeleteIndex]);
   }
   payload.WithArray("KeysToDelete", std::move(keysToDeleteJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateOpsMetadataRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonSSM.UpdateOpsMetadata"));
  return headers;

}




