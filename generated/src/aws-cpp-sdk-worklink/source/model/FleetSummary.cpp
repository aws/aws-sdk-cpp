/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/worklink/model/FleetSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkLink
{
namespace Model
{

FleetSummary::FleetSummary() : 
    m_fleetArnHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_fleetNameHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_companyCodeHasBeenSet(false),
    m_fleetStatus(FleetStatus::NOT_SET),
    m_fleetStatusHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

FleetSummary::FleetSummary(JsonView jsonValue) : 
    m_fleetArnHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_fleetNameHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_companyCodeHasBeenSet(false),
    m_fleetStatus(FleetStatus::NOT_SET),
    m_fleetStatusHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

FleetSummary& FleetSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FleetArn"))
  {
    m_fleetArn = jsonValue.GetString("FleetArn");

    m_fleetArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTime"))
  {
    m_createdTime = jsonValue.GetDouble("CreatedTime");

    m_createdTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdatedTime"))
  {
    m_lastUpdatedTime = jsonValue.GetDouble("LastUpdatedTime");

    m_lastUpdatedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FleetName"))
  {
    m_fleetName = jsonValue.GetString("FleetName");

    m_fleetNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DisplayName"))
  {
    m_displayName = jsonValue.GetString("DisplayName");

    m_displayNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CompanyCode"))
  {
    m_companyCode = jsonValue.GetString("CompanyCode");

    m_companyCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FleetStatus"))
  {
    m_fleetStatus = FleetStatusMapper::GetFleetStatusForName(jsonValue.GetString("FleetStatus"));

    m_fleetStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("Tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue FleetSummary::Jsonize() const
{
  JsonValue payload;

  if(m_fleetArnHasBeenSet)
  {
   payload.WithString("FleetArn", m_fleetArn);

  }

  if(m_createdTimeHasBeenSet)
  {
   payload.WithDouble("CreatedTime", m_createdTime.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedTimeHasBeenSet)
  {
   payload.WithDouble("LastUpdatedTime", m_lastUpdatedTime.SecondsWithMSPrecision());
  }

  if(m_fleetNameHasBeenSet)
  {
   payload.WithString("FleetName", m_fleetName);

  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("DisplayName", m_displayName);

  }

  if(m_companyCodeHasBeenSet)
  {
   payload.WithString("CompanyCode", m_companyCode);

  }

  if(m_fleetStatusHasBeenSet)
  {
   payload.WithString("FleetStatus", FleetStatusMapper::GetNameForFleetStatus(m_fleetStatus));
  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("Tags", std::move(tagsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace WorkLink
} // namespace Aws
