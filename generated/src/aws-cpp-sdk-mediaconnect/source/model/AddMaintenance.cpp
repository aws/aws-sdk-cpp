/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/AddMaintenance.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConnect
{
namespace Model
{

AddMaintenance::AddMaintenance() : 
    m_maintenanceDay(MaintenanceDay::NOT_SET),
    m_maintenanceDayHasBeenSet(false),
    m_maintenanceStartHourHasBeenSet(false)
{
}

AddMaintenance::AddMaintenance(JsonView jsonValue) : 
    m_maintenanceDay(MaintenanceDay::NOT_SET),
    m_maintenanceDayHasBeenSet(false),
    m_maintenanceStartHourHasBeenSet(false)
{
  *this = jsonValue;
}

AddMaintenance& AddMaintenance::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("maintenanceDay"))
  {
    m_maintenanceDay = MaintenanceDayMapper::GetMaintenanceDayForName(jsonValue.GetString("maintenanceDay"));

    m_maintenanceDayHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maintenanceStartHour"))
  {
    m_maintenanceStartHour = jsonValue.GetString("maintenanceStartHour");

    m_maintenanceStartHourHasBeenSet = true;
  }

  return *this;
}

JsonValue AddMaintenance::Jsonize() const
{
  JsonValue payload;

  if(m_maintenanceDayHasBeenSet)
  {
   payload.WithString("maintenanceDay", MaintenanceDayMapper::GetNameForMaintenanceDay(m_maintenanceDay));
  }

  if(m_maintenanceStartHourHasBeenSet)
  {
   payload.WithString("maintenanceStartHour", m_maintenanceStartHour);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
