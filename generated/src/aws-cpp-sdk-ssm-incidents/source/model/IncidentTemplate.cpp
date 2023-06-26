/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-incidents/model/IncidentTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSMIncidents
{
namespace Model
{

IncidentTemplate::IncidentTemplate() : 
    m_dedupeStringHasBeenSet(false),
    m_impact(0),
    m_impactHasBeenSet(false),
    m_incidentTagsHasBeenSet(false),
    m_notificationTargetsHasBeenSet(false),
    m_summaryHasBeenSet(false),
    m_titleHasBeenSet(false)
{
}

IncidentTemplate::IncidentTemplate(JsonView jsonValue) : 
    m_dedupeStringHasBeenSet(false),
    m_impact(0),
    m_impactHasBeenSet(false),
    m_incidentTagsHasBeenSet(false),
    m_notificationTargetsHasBeenSet(false),
    m_summaryHasBeenSet(false),
    m_titleHasBeenSet(false)
{
  *this = jsonValue;
}

IncidentTemplate& IncidentTemplate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("dedupeString"))
  {
    m_dedupeString = jsonValue.GetString("dedupeString");

    m_dedupeStringHasBeenSet = true;
  }

  if(jsonValue.ValueExists("impact"))
  {
    m_impact = jsonValue.GetInteger("impact");

    m_impactHasBeenSet = true;
  }

  if(jsonValue.ValueExists("incidentTags"))
  {
    Aws::Map<Aws::String, JsonView> incidentTagsJsonMap = jsonValue.GetObject("incidentTags").GetAllObjects();
    for(auto& incidentTagsItem : incidentTagsJsonMap)
    {
      m_incidentTags[incidentTagsItem.first] = incidentTagsItem.second.AsString();
    }
    m_incidentTagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("notificationTargets"))
  {
    Aws::Utils::Array<JsonView> notificationTargetsJsonList = jsonValue.GetArray("notificationTargets");
    for(unsigned notificationTargetsIndex = 0; notificationTargetsIndex < notificationTargetsJsonList.GetLength(); ++notificationTargetsIndex)
    {
      m_notificationTargets.push_back(notificationTargetsJsonList[notificationTargetsIndex].AsObject());
    }
    m_notificationTargetsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("summary"))
  {
    m_summary = jsonValue.GetString("summary");

    m_summaryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("title"))
  {
    m_title = jsonValue.GetString("title");

    m_titleHasBeenSet = true;
  }

  return *this;
}

JsonValue IncidentTemplate::Jsonize() const
{
  JsonValue payload;

  if(m_dedupeStringHasBeenSet)
  {
   payload.WithString("dedupeString", m_dedupeString);

  }

  if(m_impactHasBeenSet)
  {
   payload.WithInteger("impact", m_impact);

  }

  if(m_incidentTagsHasBeenSet)
  {
   JsonValue incidentTagsJsonMap;
   for(auto& incidentTagsItem : m_incidentTags)
   {
     incidentTagsJsonMap.WithString(incidentTagsItem.first, incidentTagsItem.second);
   }
   payload.WithObject("incidentTags", std::move(incidentTagsJsonMap));

  }

  if(m_notificationTargetsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> notificationTargetsJsonList(m_notificationTargets.size());
   for(unsigned notificationTargetsIndex = 0; notificationTargetsIndex < notificationTargetsJsonList.GetLength(); ++notificationTargetsIndex)
   {
     notificationTargetsJsonList[notificationTargetsIndex].AsObject(m_notificationTargets[notificationTargetsIndex].Jsonize());
   }
   payload.WithArray("notificationTargets", std::move(notificationTargetsJsonList));

  }

  if(m_summaryHasBeenSet)
  {
   payload.WithString("summary", m_summary);

  }

  if(m_titleHasBeenSet)
  {
   payload.WithString("title", m_title);

  }

  return payload;
}

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
