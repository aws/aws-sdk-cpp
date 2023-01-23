/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/AutoTuneOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpenSearchService
{
namespace Model
{

AutoTuneOptions::AutoTuneOptions() : 
    m_desiredState(AutoTuneDesiredState::NOT_SET),
    m_desiredStateHasBeenSet(false),
    m_rollbackOnDisable(RollbackOnDisable::NOT_SET),
    m_rollbackOnDisableHasBeenSet(false),
    m_maintenanceSchedulesHasBeenSet(false)
{
}

AutoTuneOptions::AutoTuneOptions(JsonView jsonValue) : 
    m_desiredState(AutoTuneDesiredState::NOT_SET),
    m_desiredStateHasBeenSet(false),
    m_rollbackOnDisable(RollbackOnDisable::NOT_SET),
    m_rollbackOnDisableHasBeenSet(false),
    m_maintenanceSchedulesHasBeenSet(false)
{
  *this = jsonValue;
}

AutoTuneOptions& AutoTuneOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DesiredState"))
  {
    m_desiredState = AutoTuneDesiredStateMapper::GetAutoTuneDesiredStateForName(jsonValue.GetString("DesiredState"));

    m_desiredStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RollbackOnDisable"))
  {
    m_rollbackOnDisable = RollbackOnDisableMapper::GetRollbackOnDisableForName(jsonValue.GetString("RollbackOnDisable"));

    m_rollbackOnDisableHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaintenanceSchedules"))
  {
    Aws::Utils::Array<JsonView> maintenanceSchedulesJsonList = jsonValue.GetArray("MaintenanceSchedules");
    for(unsigned maintenanceSchedulesIndex = 0; maintenanceSchedulesIndex < maintenanceSchedulesJsonList.GetLength(); ++maintenanceSchedulesIndex)
    {
      m_maintenanceSchedules.push_back(maintenanceSchedulesJsonList[maintenanceSchedulesIndex].AsObject());
    }
    m_maintenanceSchedulesHasBeenSet = true;
  }

  return *this;
}

JsonValue AutoTuneOptions::Jsonize() const
{
  JsonValue payload;

  if(m_desiredStateHasBeenSet)
  {
   payload.WithString("DesiredState", AutoTuneDesiredStateMapper::GetNameForAutoTuneDesiredState(m_desiredState));
  }

  if(m_rollbackOnDisableHasBeenSet)
  {
   payload.WithString("RollbackOnDisable", RollbackOnDisableMapper::GetNameForRollbackOnDisable(m_rollbackOnDisable));
  }

  if(m_maintenanceSchedulesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> maintenanceSchedulesJsonList(m_maintenanceSchedules.size());
   for(unsigned maintenanceSchedulesIndex = 0; maintenanceSchedulesIndex < maintenanceSchedulesJsonList.GetLength(); ++maintenanceSchedulesIndex)
   {
     maintenanceSchedulesJsonList[maintenanceSchedulesIndex].AsObject(m_maintenanceSchedules[maintenanceSchedulesIndex].Jsonize());
   }
   payload.WithArray("MaintenanceSchedules", std::move(maintenanceSchedulesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
