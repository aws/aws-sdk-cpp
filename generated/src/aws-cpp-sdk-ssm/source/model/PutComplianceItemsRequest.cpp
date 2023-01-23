/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/PutComplianceItemsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutComplianceItemsRequest::PutComplianceItemsRequest() : 
    m_resourceIdHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_complianceTypeHasBeenSet(false),
    m_executionSummaryHasBeenSet(false),
    m_itemsHasBeenSet(false),
    m_itemContentHashHasBeenSet(false),
    m_uploadType(ComplianceUploadType::NOT_SET),
    m_uploadTypeHasBeenSet(false)
{
}

Aws::String PutComplianceItemsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resourceIdHasBeenSet)
  {
   payload.WithString("ResourceId", m_resourceId);

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("ResourceType", m_resourceType);

  }

  if(m_complianceTypeHasBeenSet)
  {
   payload.WithString("ComplianceType", m_complianceType);

  }

  if(m_executionSummaryHasBeenSet)
  {
   payload.WithObject("ExecutionSummary", m_executionSummary.Jsonize());

  }

  if(m_itemsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> itemsJsonList(m_items.size());
   for(unsigned itemsIndex = 0; itemsIndex < itemsJsonList.GetLength(); ++itemsIndex)
   {
     itemsJsonList[itemsIndex].AsObject(m_items[itemsIndex].Jsonize());
   }
   payload.WithArray("Items", std::move(itemsJsonList));

  }

  if(m_itemContentHashHasBeenSet)
  {
   payload.WithString("ItemContentHash", m_itemContentHash);

  }

  if(m_uploadTypeHasBeenSet)
  {
   payload.WithString("UploadType", ComplianceUploadTypeMapper::GetNameForComplianceUploadType(m_uploadType));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutComplianceItemsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonSSM.PutComplianceItems"));
  return headers;

}




