/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplace-catalog/model/SaaSProductEntityIdFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MarketplaceCatalog
{
namespace Model
{

SaaSProductEntityIdFilter::SaaSProductEntityIdFilter() : 
    m_valueListHasBeenSet(false)
{
}

SaaSProductEntityIdFilter::SaaSProductEntityIdFilter(JsonView jsonValue) : 
    m_valueListHasBeenSet(false)
{
  *this = jsonValue;
}

SaaSProductEntityIdFilter& SaaSProductEntityIdFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ValueList"))
  {
    Aws::Utils::Array<JsonView> valueListJsonList = jsonValue.GetArray("ValueList");
    for(unsigned valueListIndex = 0; valueListIndex < valueListJsonList.GetLength(); ++valueListIndex)
    {
      m_valueList.push_back(valueListJsonList[valueListIndex].AsString());
    }
    m_valueListHasBeenSet = true;
  }

  return *this;
}

JsonValue SaaSProductEntityIdFilter::Jsonize() const
{
  JsonValue payload;

  if(m_valueListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> valueListJsonList(m_valueList.size());
   for(unsigned valueListIndex = 0; valueListIndex < valueListJsonList.GetLength(); ++valueListIndex)
   {
     valueListJsonList[valueListIndex].AsString(m_valueList[valueListIndex]);
   }
   payload.WithArray("ValueList", std::move(valueListJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
