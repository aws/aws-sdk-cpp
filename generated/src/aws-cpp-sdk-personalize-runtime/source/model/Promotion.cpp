/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize-runtime/model/Promotion.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PersonalizeRuntime
{
namespace Model
{

Promotion::Promotion() : 
    m_nameHasBeenSet(false),
    m_percentPromotedItems(0),
    m_percentPromotedItemsHasBeenSet(false),
    m_filterArnHasBeenSet(false),
    m_filterValuesHasBeenSet(false)
{
}

Promotion::Promotion(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_percentPromotedItems(0),
    m_percentPromotedItemsHasBeenSet(false),
    m_filterArnHasBeenSet(false),
    m_filterValuesHasBeenSet(false)
{
  *this = jsonValue;
}

Promotion& Promotion::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("percentPromotedItems"))
  {
    m_percentPromotedItems = jsonValue.GetInteger("percentPromotedItems");

    m_percentPromotedItemsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("filterArn"))
  {
    m_filterArn = jsonValue.GetString("filterArn");

    m_filterArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("filterValues"))
  {
    Aws::Map<Aws::String, JsonView> filterValuesJsonMap = jsonValue.GetObject("filterValues").GetAllObjects();
    for(auto& filterValuesItem : filterValuesJsonMap)
    {
      m_filterValues[filterValuesItem.first] = filterValuesItem.second.AsString();
    }
    m_filterValuesHasBeenSet = true;
  }

  return *this;
}

JsonValue Promotion::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_percentPromotedItemsHasBeenSet)
  {
   payload.WithInteger("percentPromotedItems", m_percentPromotedItems);

  }

  if(m_filterArnHasBeenSet)
  {
   payload.WithString("filterArn", m_filterArn);

  }

  if(m_filterValuesHasBeenSet)
  {
   JsonValue filterValuesJsonMap;
   for(auto& filterValuesItem : m_filterValues)
   {
     filterValuesJsonMap.WithString(filterValuesItem.first, filterValuesItem.second);
   }
   payload.WithObject("filterValues", std::move(filterValuesJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace PersonalizeRuntime
} // namespace Aws
