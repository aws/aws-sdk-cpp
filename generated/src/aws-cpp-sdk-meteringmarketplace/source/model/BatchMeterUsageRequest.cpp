/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/meteringmarketplace/model/BatchMeterUsageRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MarketplaceMetering::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchMeterUsageRequest::BatchMeterUsageRequest() : 
    m_usageRecordsHasBeenSet(false),
    m_productCodeHasBeenSet(false)
{
}

Aws::String BatchMeterUsageRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_usageRecordsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> usageRecordsJsonList(m_usageRecords.size());
   for(unsigned usageRecordsIndex = 0; usageRecordsIndex < usageRecordsJsonList.GetLength(); ++usageRecordsIndex)
   {
     usageRecordsJsonList[usageRecordsIndex].AsObject(m_usageRecords[usageRecordsIndex].Jsonize());
   }
   payload.WithArray("UsageRecords", std::move(usageRecordsJsonList));

  }

  if(m_productCodeHasBeenSet)
  {
   payload.WithString("ProductCode", m_productCode);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection BatchMeterUsageRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSMPMeteringService.BatchMeterUsage"));
  return headers;

}




