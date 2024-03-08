/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize-runtime/model/PredictedItem.h>
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

PredictedItem::PredictedItem() : 
    m_itemIdHasBeenSet(false),
    m_score(0.0),
    m_scoreHasBeenSet(false),
    m_promotionNameHasBeenSet(false),
    m_metadataHasBeenSet(false)
{
}

PredictedItem::PredictedItem(JsonView jsonValue) : 
    m_itemIdHasBeenSet(false),
    m_score(0.0),
    m_scoreHasBeenSet(false),
    m_promotionNameHasBeenSet(false),
    m_metadataHasBeenSet(false)
{
  *this = jsonValue;
}

PredictedItem& PredictedItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("itemId"))
  {
    m_itemId = jsonValue.GetString("itemId");

    m_itemIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("score"))
  {
    m_score = jsonValue.GetDouble("score");

    m_scoreHasBeenSet = true;
  }

  if(jsonValue.ValueExists("promotionName"))
  {
    m_promotionName = jsonValue.GetString("promotionName");

    m_promotionNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("metadata"))
  {
    Aws::Map<Aws::String, JsonView> metadataJsonMap = jsonValue.GetObject("metadata").GetAllObjects();
    for(auto& metadataItem : metadataJsonMap)
    {
      m_metadata[metadataItem.first] = metadataItem.second.AsString();
    }
    m_metadataHasBeenSet = true;
  }

  return *this;
}

JsonValue PredictedItem::Jsonize() const
{
  JsonValue payload;

  if(m_itemIdHasBeenSet)
  {
   payload.WithString("itemId", m_itemId);

  }

  if(m_scoreHasBeenSet)
  {
   payload.WithDouble("score", m_score);

  }

  if(m_promotionNameHasBeenSet)
  {
   payload.WithString("promotionName", m_promotionName);

  }

  if(m_metadataHasBeenSet)
  {
   JsonValue metadataJsonMap;
   for(auto& metadataItem : m_metadata)
   {
     metadataJsonMap.WithString(metadataItem.first, metadataItem.second);
   }
   payload.WithObject("metadata", std::move(metadataJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace PersonalizeRuntime
} // namespace Aws
