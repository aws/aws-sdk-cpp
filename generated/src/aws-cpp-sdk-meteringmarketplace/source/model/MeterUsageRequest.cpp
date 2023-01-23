/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/meteringmarketplace/model/MeterUsageRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MarketplaceMetering::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

MeterUsageRequest::MeterUsageRequest() : 
    m_productCodeHasBeenSet(false),
    m_timestampHasBeenSet(false),
    m_usageDimensionHasBeenSet(false),
    m_usageQuantity(0),
    m_usageQuantityHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_usageAllocationsHasBeenSet(false)
{
}

Aws::String MeterUsageRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_productCodeHasBeenSet)
  {
   payload.WithString("ProductCode", m_productCode);

  }

  if(m_timestampHasBeenSet)
  {
   payload.WithDouble("Timestamp", m_timestamp.SecondsWithMSPrecision());
  }

  if(m_usageDimensionHasBeenSet)
  {
   payload.WithString("UsageDimension", m_usageDimension);

  }

  if(m_usageQuantityHasBeenSet)
  {
   payload.WithInteger("UsageQuantity", m_usageQuantity);

  }

  if(m_dryRunHasBeenSet)
  {
   payload.WithBool("DryRun", m_dryRun);

  }

  if(m_usageAllocationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> usageAllocationsJsonList(m_usageAllocations.size());
   for(unsigned usageAllocationsIndex = 0; usageAllocationsIndex < usageAllocationsJsonList.GetLength(); ++usageAllocationsIndex)
   {
     usageAllocationsJsonList[usageAllocationsIndex].AsObject(m_usageAllocations[usageAllocationsIndex].Jsonize());
   }
   payload.WithArray("UsageAllocations", std::move(usageAllocationsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection MeterUsageRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSMPMeteringService.MeterUsage"));
  return headers;

}




