/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/meteringmarketplace/model/UsageAllocation.h>
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

UsageAllocation::UsageAllocation() : 
    m_allocatedUsageQuantity(0),
    m_allocatedUsageQuantityHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

UsageAllocation::UsageAllocation(JsonView jsonValue) : 
    m_allocatedUsageQuantity(0),
    m_allocatedUsageQuantityHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

UsageAllocation& UsageAllocation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AllocatedUsageQuantity"))
  {
    m_allocatedUsageQuantity = jsonValue.GetInteger("AllocatedUsageQuantity");

    m_allocatedUsageQuantityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue UsageAllocation::Jsonize() const
{
  JsonValue payload;

  if(m_allocatedUsageQuantityHasBeenSet)
  {
   payload.WithInteger("AllocatedUsageQuantity", m_allocatedUsageQuantity);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace MarketplaceMetering
} // namespace Aws
