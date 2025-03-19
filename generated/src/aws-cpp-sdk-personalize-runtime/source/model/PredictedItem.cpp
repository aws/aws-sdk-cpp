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

PredictedItem::PredictedItem(JsonView jsonValue)
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
  if(jsonValue.ValueExists("reason"))
  {
    Aws::Utils::Array<JsonView> reasonJsonList = jsonValue.GetArray("reason");
    for(unsigned reasonIndex = 0; reasonIndex < reasonJsonList.GetLength(); ++reasonIndex)
    {
      m_reason.push_back(reasonJsonList[reasonIndex].AsString());
    }
    m_reasonHasBeenSet = true;
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

  if(m_reasonHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> reasonJsonList(m_reason.size());
   for(unsigned reasonIndex = 0; reasonIndex < reasonJsonList.GetLength(); ++reasonIndex)
   {
     reasonJsonList[reasonIndex].AsString(m_reason[reasonIndex]);
   }
   payload.WithArray("reason", std::move(reasonJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace PersonalizeRuntime
} // namespace Aws
