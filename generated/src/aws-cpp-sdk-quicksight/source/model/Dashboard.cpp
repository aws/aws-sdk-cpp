/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/Dashboard.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

Dashboard::Dashboard() : 
    m_dashboardIdHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_lastPublishedTimeHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_linkEntitiesHasBeenSet(false)
{
}

Dashboard::Dashboard(JsonView jsonValue) : 
    m_dashboardIdHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_lastPublishedTimeHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_linkEntitiesHasBeenSet(false)
{
  *this = jsonValue;
}

Dashboard& Dashboard::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DashboardId"))
  {
    m_dashboardId = jsonValue.GetString("DashboardId");

    m_dashboardIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Version"))
  {
    m_version = jsonValue.GetObject("Version");

    m_versionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTime"))
  {
    m_createdTime = jsonValue.GetDouble("CreatedTime");

    m_createdTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastPublishedTime"))
  {
    m_lastPublishedTime = jsonValue.GetDouble("LastPublishedTime");

    m_lastPublishedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdatedTime"))
  {
    m_lastUpdatedTime = jsonValue.GetDouble("LastUpdatedTime");

    m_lastUpdatedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LinkEntities"))
  {
    Aws::Utils::Array<JsonView> linkEntitiesJsonList = jsonValue.GetArray("LinkEntities");
    for(unsigned linkEntitiesIndex = 0; linkEntitiesIndex < linkEntitiesJsonList.GetLength(); ++linkEntitiesIndex)
    {
      m_linkEntities.push_back(linkEntitiesJsonList[linkEntitiesIndex].AsString());
    }
    m_linkEntitiesHasBeenSet = true;
  }

  return *this;
}

JsonValue Dashboard::Jsonize() const
{
  JsonValue payload;

  if(m_dashboardIdHasBeenSet)
  {
   payload.WithString("DashboardId", m_dashboardId);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_versionHasBeenSet)
  {
   payload.WithObject("Version", m_version.Jsonize());

  }

  if(m_createdTimeHasBeenSet)
  {
   payload.WithDouble("CreatedTime", m_createdTime.SecondsWithMSPrecision());
  }

  if(m_lastPublishedTimeHasBeenSet)
  {
   payload.WithDouble("LastPublishedTime", m_lastPublishedTime.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedTimeHasBeenSet)
  {
   payload.WithDouble("LastUpdatedTime", m_lastUpdatedTime.SecondsWithMSPrecision());
  }

  if(m_linkEntitiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> linkEntitiesJsonList(m_linkEntities.size());
   for(unsigned linkEntitiesIndex = 0; linkEntitiesIndex < linkEntitiesJsonList.GetLength(); ++linkEntitiesIndex)
   {
     linkEntitiesJsonList[linkEntitiesIndex].AsString(m_linkEntities[linkEntitiesIndex]);
   }
   payload.WithArray("LinkEntities", std::move(linkEntitiesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
