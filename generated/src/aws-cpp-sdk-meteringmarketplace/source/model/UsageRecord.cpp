/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/meteringmarketplace/model/UsageRecord.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MarketplaceMetering
{
namespace Model
{

UsageRecord::UsageRecord(JsonView jsonValue)
{
  *this = jsonValue;
}

UsageRecord& UsageRecord::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Timestamp"))
  {
    m_timestamp = jsonValue.GetDouble("Timestamp");
    m_timestampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CustomerIdentifier"))
  {
    m_customerIdentifier = jsonValue.GetString("CustomerIdentifier");
    m_customerIdentifierHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Dimension"))
  {
    m_dimension = jsonValue.GetString("Dimension");
    m_dimensionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Quantity"))
  {
    m_quantity = jsonValue.GetInteger("Quantity");
    m_quantityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UsageAllocations"))
  {
    Aws::Utils::Array<JsonView> usageAllocationsJsonList = jsonValue.GetArray("UsageAllocations");
    for(unsigned usageAllocationsIndex = 0; usageAllocationsIndex < usageAllocationsJsonList.GetLength(); ++usageAllocationsIndex)
    {
      m_usageAllocations.push_back(usageAllocationsJsonList[usageAllocationsIndex].AsObject());
    }
    m_usageAllocationsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CustomerAWSAccountId"))
  {
    m_customerAWSAccountId = jsonValue.GetString("CustomerAWSAccountId");
    m_customerAWSAccountIdHasBeenSet = true;
  }
  return *this;
}

JsonValue UsageRecord::Jsonize() const
{
  JsonValue payload;

  if(m_timestampHasBeenSet)
  {
   payload.WithDouble("Timestamp", m_timestamp.SecondsWithMSPrecision());
  }

  if(m_customerIdentifierHasBeenSet)
  {
   payload.WithString("CustomerIdentifier", m_customerIdentifier);

  }

  if(m_dimensionHasBeenSet)
  {
   payload.WithString("Dimension", m_dimension);

  }

  if(m_quantityHasBeenSet)
  {
   payload.WithInteger("Quantity", m_quantity);

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

  if(m_customerAWSAccountIdHasBeenSet)
  {
   payload.WithString("CustomerAWSAccountId", m_customerAWSAccountId);

  }

  return payload;
}

} // namespace Model
} // namespace MarketplaceMetering
} // namespace Aws
