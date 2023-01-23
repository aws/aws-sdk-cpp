/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DashboardSummary.h>
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

DashboardSummary::DashboardSummary() : 
    m_arnHasBeenSet(false),
    m_dashboardIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_publishedVersionNumber(0),
    m_publishedVersionNumberHasBeenSet(false),
    m_lastPublishedTimeHasBeenSet(false)
{
}

DashboardSummary::DashboardSummary(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_dashboardIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_publishedVersionNumber(0),
    m_publishedVersionNumberHasBeenSet(false),
    m_lastPublishedTimeHasBeenSet(false)
{
  *this = jsonValue;
}

DashboardSummary& DashboardSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DashboardId"))
  {
    m_dashboardId = jsonValue.GetString("DashboardId");

    m_dashboardIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
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

  if(jsonValue.ValueExists("PublishedVersionNumber"))
  {
    m_publishedVersionNumber = jsonValue.GetInt64("PublishedVersionNumber");

    m_publishedVersionNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastPublishedTime"))
  {
    m_lastPublishedTime = jsonValue.GetDouble("LastPublishedTime");

    m_lastPublishedTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue DashboardSummary::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_dashboardIdHasBeenSet)
  {
   payload.WithString("DashboardId", m_dashboardId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_createdTimeHasBeenSet)
  {
   payload.WithDouble("CreatedTime", m_createdTime.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedTimeHasBeenSet)
  {
   payload.WithDouble("LastUpdatedTime", m_lastUpdatedTime.SecondsWithMSPrecision());
  }

  if(m_publishedVersionNumberHasBeenSet)
  {
   payload.WithInt64("PublishedVersionNumber", m_publishedVersionNumber);

  }

  if(m_lastPublishedTimeHasBeenSet)
  {
   payload.WithDouble("LastPublishedTime", m_lastPublishedTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
