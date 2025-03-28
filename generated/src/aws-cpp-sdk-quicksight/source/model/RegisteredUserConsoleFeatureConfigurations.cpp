/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/RegisteredUserConsoleFeatureConfigurations.h>
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

RegisteredUserConsoleFeatureConfigurations::RegisteredUserConsoleFeatureConfigurations(JsonView jsonValue)
{
  *this = jsonValue;
}

RegisteredUserConsoleFeatureConfigurations& RegisteredUserConsoleFeatureConfigurations::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StatePersistence"))
  {
    m_statePersistence = jsonValue.GetObject("StatePersistence");
    m_statePersistenceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SharedView"))
  {
    m_sharedView = jsonValue.GetObject("SharedView");
    m_sharedViewHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AmazonQInQuickSight"))
  {
    m_amazonQInQuickSight = jsonValue.GetObject("AmazonQInQuickSight");
    m_amazonQInQuickSightHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Schedules"))
  {
    m_schedules = jsonValue.GetObject("Schedules");
    m_schedulesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RecentSnapshots"))
  {
    m_recentSnapshots = jsonValue.GetObject("RecentSnapshots");
    m_recentSnapshotsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ThresholdAlerts"))
  {
    m_thresholdAlerts = jsonValue.GetObject("ThresholdAlerts");
    m_thresholdAlertsHasBeenSet = true;
  }
  return *this;
}

JsonValue RegisteredUserConsoleFeatureConfigurations::Jsonize() const
{
  JsonValue payload;

  if(m_statePersistenceHasBeenSet)
  {
   payload.WithObject("StatePersistence", m_statePersistence.Jsonize());

  }

  if(m_sharedViewHasBeenSet)
  {
   payload.WithObject("SharedView", m_sharedView.Jsonize());

  }

  if(m_amazonQInQuickSightHasBeenSet)
  {
   payload.WithObject("AmazonQInQuickSight", m_amazonQInQuickSight.Jsonize());

  }

  if(m_schedulesHasBeenSet)
  {
   payload.WithObject("Schedules", m_schedules.Jsonize());

  }

  if(m_recentSnapshotsHasBeenSet)
  {
   payload.WithObject("RecentSnapshots", m_recentSnapshots.Jsonize());

  }

  if(m_thresholdAlertsHasBeenSet)
  {
   payload.WithObject("ThresholdAlerts", m_thresholdAlerts.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
