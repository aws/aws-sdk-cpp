/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-thin-client/model/DeviceSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkSpacesThinClient
{
namespace Model
{

DeviceSummary::DeviceSummary() : 
    m_idHasBeenSet(false),
    m_serialNumberHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_modelHasBeenSet(false),
    m_environmentIdHasBeenSet(false),
    m_status(DeviceStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_currentSoftwareSetIdHasBeenSet(false),
    m_desiredSoftwareSetIdHasBeenSet(false),
    m_pendingSoftwareSetIdHasBeenSet(false),
    m_softwareSetUpdateSchedule(SoftwareSetUpdateSchedule::NOT_SET),
    m_softwareSetUpdateScheduleHasBeenSet(false),
    m_lastConnectedAtHasBeenSet(false),
    m_lastPostureAtHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

DeviceSummary::DeviceSummary(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_serialNumberHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_modelHasBeenSet(false),
    m_environmentIdHasBeenSet(false),
    m_status(DeviceStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_currentSoftwareSetIdHasBeenSet(false),
    m_desiredSoftwareSetIdHasBeenSet(false),
    m_pendingSoftwareSetIdHasBeenSet(false),
    m_softwareSetUpdateSchedule(SoftwareSetUpdateSchedule::NOT_SET),
    m_softwareSetUpdateScheduleHasBeenSet(false),
    m_lastConnectedAtHasBeenSet(false),
    m_lastPostureAtHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

DeviceSummary& DeviceSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("serialNumber"))
  {
    m_serialNumber = jsonValue.GetString("serialNumber");

    m_serialNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("model"))
  {
    m_model = jsonValue.GetString("model");

    m_modelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("environmentId"))
  {
    m_environmentId = jsonValue.GetString("environmentId");

    m_environmentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = DeviceStatusMapper::GetDeviceStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("currentSoftwareSetId"))
  {
    m_currentSoftwareSetId = jsonValue.GetString("currentSoftwareSetId");

    m_currentSoftwareSetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("desiredSoftwareSetId"))
  {
    m_desiredSoftwareSetId = jsonValue.GetString("desiredSoftwareSetId");

    m_desiredSoftwareSetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pendingSoftwareSetId"))
  {
    m_pendingSoftwareSetId = jsonValue.GetString("pendingSoftwareSetId");

    m_pendingSoftwareSetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("softwareSetUpdateSchedule"))
  {
    m_softwareSetUpdateSchedule = SoftwareSetUpdateScheduleMapper::GetSoftwareSetUpdateScheduleForName(jsonValue.GetString("softwareSetUpdateSchedule"));

    m_softwareSetUpdateScheduleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastConnectedAt"))
  {
    m_lastConnectedAt = jsonValue.GetDouble("lastConnectedAt");

    m_lastConnectedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastPostureAt"))
  {
    m_lastPostureAt = jsonValue.GetDouble("lastPostureAt");

    m_lastPostureAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("updatedAt");

    m_updatedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    m_tags = jsonValue.GetObject("tags");

    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue DeviceSummary::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_serialNumberHasBeenSet)
  {
   payload.WithString("serialNumber", m_serialNumber);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_modelHasBeenSet)
  {
   payload.WithString("model", m_model);

  }

  if(m_environmentIdHasBeenSet)
  {
   payload.WithString("environmentId", m_environmentId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", DeviceStatusMapper::GetNameForDeviceStatus(m_status));
  }

  if(m_currentSoftwareSetIdHasBeenSet)
  {
   payload.WithString("currentSoftwareSetId", m_currentSoftwareSetId);

  }

  if(m_desiredSoftwareSetIdHasBeenSet)
  {
   payload.WithString("desiredSoftwareSetId", m_desiredSoftwareSetId);

  }

  if(m_pendingSoftwareSetIdHasBeenSet)
  {
   payload.WithString("pendingSoftwareSetId", m_pendingSoftwareSetId);

  }

  if(m_softwareSetUpdateScheduleHasBeenSet)
  {
   payload.WithString("softwareSetUpdateSchedule", SoftwareSetUpdateScheduleMapper::GetNameForSoftwareSetUpdateSchedule(m_softwareSetUpdateSchedule));
  }

  if(m_lastConnectedAtHasBeenSet)
  {
   payload.WithDouble("lastConnectedAt", m_lastConnectedAt.SecondsWithMSPrecision());
  }

  if(m_lastPostureAtHasBeenSet)
  {
   payload.WithDouble("lastPostureAt", m_lastPostureAt.SecondsWithMSPrecision());
  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_tagsHasBeenSet)
  {
   payload.WithObject("tags", m_tags.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace WorkSpacesThinClient
} // namespace Aws
