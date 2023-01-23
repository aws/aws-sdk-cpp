/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribestreaming/model/CategoryEvent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TranscribeStreamingService
{
namespace Model
{

CategoryEvent::CategoryEvent() : 
    m_matchedCategoriesHasBeenSet(false),
    m_matchedDetailsHasBeenSet(false)
{
}

CategoryEvent::CategoryEvent(JsonView jsonValue) : 
    m_matchedCategoriesHasBeenSet(false),
    m_matchedDetailsHasBeenSet(false)
{
  *this = jsonValue;
}

CategoryEvent& CategoryEvent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MatchedCategories"))
  {
    Aws::Utils::Array<JsonView> matchedCategoriesJsonList = jsonValue.GetArray("MatchedCategories");
    for(unsigned matchedCategoriesIndex = 0; matchedCategoriesIndex < matchedCategoriesJsonList.GetLength(); ++matchedCategoriesIndex)
    {
      m_matchedCategories.push_back(matchedCategoriesJsonList[matchedCategoriesIndex].AsString());
    }
    m_matchedCategoriesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MatchedDetails"))
  {
    Aws::Map<Aws::String, JsonView> matchedDetailsJsonMap = jsonValue.GetObject("MatchedDetails").GetAllObjects();
    for(auto& matchedDetailsItem : matchedDetailsJsonMap)
    {
      m_matchedDetails[matchedDetailsItem.first] = matchedDetailsItem.second.AsObject();
    }
    m_matchedDetailsHasBeenSet = true;
  }

  return *this;
}

JsonValue CategoryEvent::Jsonize() const
{
  JsonValue payload;

  if(m_matchedCategoriesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> matchedCategoriesJsonList(m_matchedCategories.size());
   for(unsigned matchedCategoriesIndex = 0; matchedCategoriesIndex < matchedCategoriesJsonList.GetLength(); ++matchedCategoriesIndex)
   {
     matchedCategoriesJsonList[matchedCategoriesIndex].AsString(m_matchedCategories[matchedCategoriesIndex]);
   }
   payload.WithArray("MatchedCategories", std::move(matchedCategoriesJsonList));

  }

  if(m_matchedDetailsHasBeenSet)
  {
   JsonValue matchedDetailsJsonMap;
   for(auto& matchedDetailsItem : m_matchedDetails)
   {
     matchedDetailsJsonMap.WithObject(matchedDetailsItem.first, matchedDetailsItem.second.Jsonize());
   }
   payload.WithObject("MatchedDetails", std::move(matchedDetailsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
