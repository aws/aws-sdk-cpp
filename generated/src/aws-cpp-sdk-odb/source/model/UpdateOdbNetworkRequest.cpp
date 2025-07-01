/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/odb/model/UpdateOdbNetworkRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::odb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateOdbNetworkRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_odbNetworkIdHasBeenSet)
  {
   payload.WithString("odbNetworkId", m_odbNetworkId);

  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("displayName", m_displayName);

  }

  if(m_peeredCidrsToBeAddedHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> peeredCidrsToBeAddedJsonList(m_peeredCidrsToBeAdded.size());
   for(unsigned peeredCidrsToBeAddedIndex = 0; peeredCidrsToBeAddedIndex < peeredCidrsToBeAddedJsonList.GetLength(); ++peeredCidrsToBeAddedIndex)
   {
     peeredCidrsToBeAddedJsonList[peeredCidrsToBeAddedIndex].AsString(m_peeredCidrsToBeAdded[peeredCidrsToBeAddedIndex]);
   }
   payload.WithArray("peeredCidrsToBeAdded", std::move(peeredCidrsToBeAddedJsonList));

  }

  if(m_peeredCidrsToBeRemovedHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> peeredCidrsToBeRemovedJsonList(m_peeredCidrsToBeRemoved.size());
   for(unsigned peeredCidrsToBeRemovedIndex = 0; peeredCidrsToBeRemovedIndex < peeredCidrsToBeRemovedJsonList.GetLength(); ++peeredCidrsToBeRemovedIndex)
   {
     peeredCidrsToBeRemovedJsonList[peeredCidrsToBeRemovedIndex].AsString(m_peeredCidrsToBeRemoved[peeredCidrsToBeRemovedIndex]);
   }
   payload.WithArray("peeredCidrsToBeRemoved", std::move(peeredCidrsToBeRemovedJsonList));

  }

  if(m_s3AccessHasBeenSet)
  {
   payload.WithString("s3Access", AccessMapper::GetNameForAccess(m_s3Access));
  }

  if(m_zeroEtlAccessHasBeenSet)
  {
   payload.WithString("zeroEtlAccess", AccessMapper::GetNameForAccess(m_zeroEtlAccess));
  }

  if(m_s3PolicyDocumentHasBeenSet)
  {
   payload.WithString("s3PolicyDocument", m_s3PolicyDocument);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateOdbNetworkRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Odb.UpdateOdbNetwork"));
  return headers;

}




