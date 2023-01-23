/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsCloudFrontDistributionCacheBehaviors.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsCloudFrontDistributionCacheBehaviors::AwsCloudFrontDistributionCacheBehaviors() : 
    m_itemsHasBeenSet(false)
{
}

AwsCloudFrontDistributionCacheBehaviors::AwsCloudFrontDistributionCacheBehaviors(JsonView jsonValue) : 
    m_itemsHasBeenSet(false)
{
  *this = jsonValue;
}

AwsCloudFrontDistributionCacheBehaviors& AwsCloudFrontDistributionCacheBehaviors::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Items"))
  {
    Aws::Utils::Array<JsonView> itemsJsonList = jsonValue.GetArray("Items");
    for(unsigned itemsIndex = 0; itemsIndex < itemsJsonList.GetLength(); ++itemsIndex)
    {
      m_items.push_back(itemsJsonList[itemsIndex].AsObject());
    }
    m_itemsHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsCloudFrontDistributionCacheBehaviors::Jsonize() const
{
  JsonValue payload;

  if(m_itemsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> itemsJsonList(m_items.size());
   for(unsigned itemsIndex = 0; itemsIndex < itemsJsonList.GetLength(); ++itemsIndex)
   {
     itemsJsonList[itemsIndex].AsObject(m_items[itemsIndex].Jsonize());
   }
   payload.WithArray("Items", std::move(itemsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
