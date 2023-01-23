/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/StartAssociationsOnceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartAssociationsOnceRequest::StartAssociationsOnceRequest() : 
    m_associationIdsHasBeenSet(false)
{
}

Aws::String StartAssociationsOnceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_associationIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> associationIdsJsonList(m_associationIds.size());
   for(unsigned associationIdsIndex = 0; associationIdsIndex < associationIdsJsonList.GetLength(); ++associationIdsIndex)
   {
     associationIdsJsonList[associationIdsIndex].AsString(m_associationIds[associationIdsIndex]);
   }
   payload.WithArray("AssociationIds", std::move(associationIdsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StartAssociationsOnceRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonSSM.StartAssociationsOnce"));
  return headers;

}




