/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/SopRecommendation.h>
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

SopRecommendation::SopRecommendation() : 
    m_appComponentNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_itemsHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_prerequisiteHasBeenSet(false),
    m_recommendationIdHasBeenSet(false),
    m_referenceIdHasBeenSet(false),
    m_serviceType(SopServiceType::NOT_SET),
    m_serviceTypeHasBeenSet(false)
{
}

SopRecommendation::SopRecommendation(JsonView jsonValue) : 
    m_appComponentNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_itemsHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_prerequisiteHasBeenSet(false),
    m_recommendationIdHasBeenSet(false),
    m_referenceIdHasBeenSet(false),
    m_serviceType(SopServiceType::NOT_SET),
    m_serviceTypeHasBeenSet(false)
{
  *this = jsonValue;
}

SopRecommendation& SopRecommendation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("appComponentName"))
  {
    m_appComponentName = jsonValue.GetString("appComponentName");

    m_appComponentNameHasBeenSet = true;
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

  if(jsonValue.ValueExists("referenceId"))
  {
    m_referenceId = jsonValue.GetString("referenceId");

    m_referenceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("serviceType"))
  {
    m_serviceType = SopServiceTypeMapper::GetSopServiceTypeForName(jsonValue.GetString("serviceType"));

    m_serviceTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue SopRecommendation::Jsonize() const
{
  JsonValue payload;

  if(m_appComponentNameHasBeenSet)
  {
   payload.WithString("appComponentName", m_appComponentName);

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

  if(m_referenceIdHasBeenSet)
  {
   payload.WithString("referenceId", m_referenceId);

  }

  if(m_serviceTypeHasBeenSet)
  {
   payload.WithString("serviceType", SopServiceTypeMapper::GetNameForSopServiceType(m_serviceType));
  }

  return payload;
}

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
