/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/textract/model/LineItemGroup.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Textract
{
namespace Model
{

LineItemGroup::LineItemGroup() : 
    m_lineItemGroupIndex(0),
    m_lineItemGroupIndexHasBeenSet(false),
    m_lineItemsHasBeenSet(false)
{
}

LineItemGroup::LineItemGroup(JsonView jsonValue) : 
    m_lineItemGroupIndex(0),
    m_lineItemGroupIndexHasBeenSet(false),
    m_lineItemsHasBeenSet(false)
{
  *this = jsonValue;
}

LineItemGroup& LineItemGroup::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LineItemGroupIndex"))
  {
    m_lineItemGroupIndex = jsonValue.GetInteger("LineItemGroupIndex");

    m_lineItemGroupIndexHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LineItems"))
  {
    Aws::Utils::Array<JsonView> lineItemsJsonList = jsonValue.GetArray("LineItems");
    for(unsigned lineItemsIndex = 0; lineItemsIndex < lineItemsJsonList.GetLength(); ++lineItemsIndex)
    {
      m_lineItems.push_back(lineItemsJsonList[lineItemsIndex].AsObject());
    }
    m_lineItemsHasBeenSet = true;
  }

  return *this;
}

JsonValue LineItemGroup::Jsonize() const
{
  JsonValue payload;

  if(m_lineItemGroupIndexHasBeenSet)
  {
   payload.WithInteger("LineItemGroupIndex", m_lineItemGroupIndex);

  }

  if(m_lineItemsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> lineItemsJsonList(m_lineItems.size());
   for(unsigned lineItemsIndex = 0; lineItemsIndex < lineItemsJsonList.GetLength(); ++lineItemsIndex)
   {
     lineItemsJsonList[lineItemsIndex].AsObject(m_lineItems[lineItemsIndex].Jsonize());
   }
   payload.WithArray("LineItems", std::move(lineItemsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Textract
} // namespace Aws
