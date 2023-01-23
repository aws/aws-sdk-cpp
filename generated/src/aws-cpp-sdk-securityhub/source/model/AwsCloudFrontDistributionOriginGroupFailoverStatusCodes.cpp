/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsCloudFrontDistributionOriginGroupFailoverStatusCodes.h>
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

AwsCloudFrontDistributionOriginGroupFailoverStatusCodes::AwsCloudFrontDistributionOriginGroupFailoverStatusCodes() : 
    m_itemsHasBeenSet(false),
    m_quantity(0),
    m_quantityHasBeenSet(false)
{
}

AwsCloudFrontDistributionOriginGroupFailoverStatusCodes::AwsCloudFrontDistributionOriginGroupFailoverStatusCodes(JsonView jsonValue) : 
    m_itemsHasBeenSet(false),
    m_quantity(0),
    m_quantityHasBeenSet(false)
{
  *this = jsonValue;
}

AwsCloudFrontDistributionOriginGroupFailoverStatusCodes& AwsCloudFrontDistributionOriginGroupFailoverStatusCodes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Items"))
  {
    Aws::Utils::Array<JsonView> itemsJsonList = jsonValue.GetArray("Items");
    for(unsigned itemsIndex = 0; itemsIndex < itemsJsonList.GetLength(); ++itemsIndex)
    {
      m_items.push_back(itemsJsonList[itemsIndex].AsInteger());
    }
    m_itemsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Quantity"))
  {
    m_quantity = jsonValue.GetInteger("Quantity");

    m_quantityHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsCloudFrontDistributionOriginGroupFailoverStatusCodes::Jsonize() const
{
  JsonValue payload;

  if(m_itemsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> itemsJsonList(m_items.size());
   for(unsigned itemsIndex = 0; itemsIndex < itemsJsonList.GetLength(); ++itemsIndex)
   {
     itemsJsonList[itemsIndex].AsInteger(m_items[itemsIndex]);
   }
   payload.WithArray("Items", std::move(itemsJsonList));

  }

  if(m_quantityHasBeenSet)
  {
   payload.WithInteger("Quantity", m_quantity);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
