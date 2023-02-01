/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/MonitoringAlertHistorySummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

MonitoringAlertHistorySummary::MonitoringAlertHistorySummary() : 
    m_monitoringScheduleNameHasBeenSet(false),
    m_monitoringAlertNameHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_alertStatus(MonitoringAlertStatus::NOT_SET),
    m_alertStatusHasBeenSet(false)
{
}

MonitoringAlertHistorySummary::MonitoringAlertHistorySummary(JsonView jsonValue) : 
    m_monitoringScheduleNameHasBeenSet(false),
    m_monitoringAlertNameHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_alertStatus(MonitoringAlertStatus::NOT_SET),
    m_alertStatusHasBeenSet(false)
{
  *this = jsonValue;
}

MonitoringAlertHistorySummary& MonitoringAlertHistorySummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MonitoringScheduleName"))
  {
    m_monitoringScheduleName = jsonValue.GetString("MonitoringScheduleName");

    m_monitoringScheduleNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MonitoringAlertName"))
  {
    m_monitoringAlertName = jsonValue.GetString("MonitoringAlertName");

    m_monitoringAlertNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AlertStatus"))
  {
    m_alertStatus = MonitoringAlertStatusMapper::GetMonitoringAlertStatusForName(jsonValue.GetString("AlertStatus"));

    m_alertStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue MonitoringAlertHistorySummary::Jsonize() const
{
  JsonValue payload;

  if(m_monitoringScheduleNameHasBeenSet)
  {
   payload.WithString("MonitoringScheduleName", m_monitoringScheduleName);

  }

  if(m_monitoringAlertNameHasBeenSet)
  {
   payload.WithString("MonitoringAlertName", m_monitoringAlertName);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_alertStatusHasBeenSet)
  {
   payload.WithString("AlertStatus", MonitoringAlertStatusMapper::GetNameForMonitoringAlertStatus(m_alertStatus));
  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
