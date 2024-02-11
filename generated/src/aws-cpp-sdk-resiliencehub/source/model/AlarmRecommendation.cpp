/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/AlarmRecommendation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ResilienceHub
{
namespace Model
{

AlarmRecommendation::AlarmRecommendation() : 
    m_appComponentNamesHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_itemsHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_prerequisiteHasBeenSet(false),
    m_recommendationIdHasBeenSet(false),
    m_recommendationStatus(RecommendationStatus::NOT_SET),
    m_recommendationStatusHasBeenSet(false),
    m_referenceIdHasBeenSet(false),
    m_type(AlarmType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

AlarmRecommendation::AlarmRecommendation(JsonView jsonValue) : 
    m_appComponentNamesHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_itemsHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_prerequisiteHasBeenSet(false),
    m_recommendationIdHasBeenSet(false),
    m_recommendationStatus(RecommendationStatus::NOT_SET),
    m_recommendationStatusHasBeenSet(false),
    m_referenceIdHasBeenSet(false),
    m_type(AlarmType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

AlarmRecommendation& AlarmRecommendation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("appComponentNames"))
  {
    Aws::Utils::Array<JsonView> appComponentNamesJsonList = jsonValue.GetArray("appComponentNames");
    for(unsigned appComponentNamesIndex = 0; appComponentNamesIndex < appComponentNamesJsonList.GetLength(); ++appComponentNamesIndex)
    {
      m_appComponentNames.push_back(appComponentNamesJsonList[appComponentNamesIndex].AsString());
    }
    m_appComponentNamesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("items"))
  {
    Aws::Utils::Array<JsonView> itemsJsonList = jsonValue.GetArray("items");
    for(unsigned itemsIndex = 0; itemsIndex < itemsJsonList.GetLength(); ++itemsIndex)
    {
      m_items.push_back(itemsJsonList[itemsIndex].AsObject());
    }
    m_itemsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("prerequisite"))
  {
    m_prerequisite = jsonValue.GetString("prerequisite");

    m_prerequisiteHasBeenSet = true;
  }

  if(jsonValue.ValueExists("recommendationId"))
  {
    m_recommendationId = jsonValue.GetString("recommendationId");

    m_recommendationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("recommendationStatus"))
  {
    m_recommendationStatus = RecommendationStatusMapper::GetRecommendationStatusForName(jsonValue.GetString("recommendationStatus"));

    m_recommendationStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("referenceId"))
  {
    m_referenceId = jsonValue.GetString("referenceId");

    m_referenceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = AlarmTypeMapper::GetAlarmTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue AlarmRecommendation::Jsonize() const
{
  JsonValue payload;

  if(m_appComponentNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> appComponentNamesJsonList(m_appComponentNames.size());
   for(unsigned appComponentNamesIndex = 0; appComponentNamesIndex < appComponentNamesJsonList.GetLength(); ++appComponentNamesIndex)
   {
     appComponentNamesJsonList[appComponentNamesIndex].AsString(m_appComponentNames[appComponentNamesIndex]);
   }
   payload.WithArray("appComponentNames", std::move(appComponentNamesJsonList));

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_itemsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> itemsJsonList(m_items.size());
   for(unsigned itemsIndex = 0; itemsIndex < itemsJsonList.GetLength(); ++itemsIndex)
   {
     itemsJsonList[itemsIndex].AsObject(m_items[itemsIndex].Jsonize());
   }
   payload.WithArray("items", std::move(itemsJsonList));

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_prerequisiteHasBeenSet)
  {
   payload.WithString("prerequisite", m_prerequisite);

  }

  if(m_recommendationIdHasBeenSet)
  {
   payload.WithString("recommendationId", m_recommendationId);

  }

  if(m_recommendationStatusHasBeenSet)
  {
   payload.WithString("recommendationStatus", RecommendationStatusMapper::GetNameForRecommendationStatus(m_recommendationStatus));
  }

  if(m_referenceIdHasBeenSet)
  {
   payload.WithString("referenceId", m_referenceId);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", AlarmTypeMapper::GetNameForAlarmType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
