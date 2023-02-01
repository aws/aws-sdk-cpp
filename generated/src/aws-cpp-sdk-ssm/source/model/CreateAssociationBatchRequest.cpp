/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/CreateAssociationBatchRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateAssociationBatchRequest::CreateAssociationBatchRequest() : 
    m_entriesHasBeenSet(false)
{
}

Aws::String CreateAssociationBatchRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_entriesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> entriesJsonList(m_entries.size());
   for(unsigned entriesIndex = 0; entriesIndex < entriesJsonList.GetLength(); ++entriesIndex)
   {
     entriesJsonList[entriesIndex].AsObject(m_entries[entriesIndex].Jsonize());
   }
   payload.WithArray("Entries", std::move(entriesJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateAssociationBatchRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonSSM.CreateAssociationBatch"));
  return headers;

}




