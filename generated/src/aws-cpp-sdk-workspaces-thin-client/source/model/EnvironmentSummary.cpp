/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-thin-client/model/EnvironmentSummary.h>
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

EnvironmentSummary::EnvironmentSummary() : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_desktopArnHasBeenSet(false),
    m_desktopEndpointHasBeenSet(false),
    m_desktopType(DesktopType::NOT_SET),
    m_desktopTypeHasBeenSet(false),
    m_activationCodeHasBeenSet(false),
    m_softwareSetUpdateSchedule(SoftwareSetUpdateSchedule::NOT_SET),
    m_softwareSetUpdateScheduleHasBeenSet(false),
    m_maintenanceWindowHasBeenSet(false),
    m_softwareSetUpdateMode(SoftwareSetUpdateMode::NOT_SET),
    m_softwareSetUpdateModeHasBeenSet(false),
    m_desiredSoftwareSetIdHasBeenSet(false),
    m_pendingSoftwareSetIdHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

EnvironmentSummary::EnvironmentSummary(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_desktopArnHasBeenSet(false),
    m_desktopEndpointHasBeenSet(false),
    m_desktopType(DesktopType::NOT_SET),
    m_desktopTypeHasBeenSet(false),
    m_activationCodeHasBeenSet(false),
    m_softwareSetUpdateSchedule(SoftwareSetUpdateSchedule::NOT_SET),
    m_softwareSetUpdateScheduleHasBeenSet(false),
    m_maintenanceWindowHasBeenSet(false),
    m_softwareSetUpdateMode(SoftwareSetUpdateMode::NOT_SET),
    m_softwareSetUpdateModeHasBeenSet(false),
    m_desiredSoftwareSetIdHasBeenSet(false),
    m_pendingSoftwareSetIdHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

EnvironmentSummary& EnvironmentSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("desktopArn"))
  {
    m_desktopArn = jsonValue.GetString("desktopArn");

    m_desktopArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("desktopEndpoint"))
  {
    m_desktopEndpoint = jsonValue.GetString("desktopEndpoint");

    m_desktopEndpointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("desktopType"))
  {
    m_desktopType = DesktopTypeMapper::GetDesktopTypeForName(jsonValue.GetString("desktopType"));

    m_desktopTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("activationCode"))
  {
    m_activationCode = jsonValue.GetString("activationCode");

    m_activationCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("softwareSetUpdateSchedule"))
  {
    m_softwareSetUpdateSchedule = SoftwareSetUpdateScheduleMapper::GetSoftwareSetUpdateScheduleForName(jsonValue.GetString("softwareSetUpdateSchedule"));

    m_softwareSetUpdateScheduleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maintenanceWindow"))
  {
    m_maintenanceWindow = jsonValue.GetObject("maintenanceWindow");

    m_maintenanceWindowHasBeenSet = true;
  }

  if(jsonValue.ValueExists("softwareSetUpdateMode"))
  {
    m_softwareSetUpdateMode = SoftwareSetUpdateModeMapper::GetSoftwareSetUpdateModeForName(jsonValue.GetString("softwareSetUpdateMode"));

    m_softwareSetUpdateModeHasBeenSet = true;
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

JsonValue EnvironmentSummary::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_desktopArnHasBeenSet)
  {
   payload.WithString("desktopArn", m_desktopArn);

  }

  if(m_desktopEndpointHasBeenSet)
  {
   payload.WithString("desktopEndpoint", m_desktopEndpoint);

  }

  if(m_desktopTypeHasBeenSet)
  {
   payload.WithString("desktopType", DesktopTypeMapper::GetNameForDesktopType(m_desktopType));
  }

  if(m_activationCodeHasBeenSet)
  {
   payload.WithString("activationCode", m_activationCode);

  }

  if(m_softwareSetUpdateScheduleHasBeenSet)
  {
   payload.WithString("softwareSetUpdateSchedule", SoftwareSetUpdateScheduleMapper::GetNameForSoftwareSetUpdateSchedule(m_softwareSetUpdateSchedule));
  }

  if(m_maintenanceWindowHasBeenSet)
  {
   payload.WithObject("maintenanceWindow", m_maintenanceWindow.Jsonize());

  }

  if(m_softwareSetUpdateModeHasBeenSet)
  {
   payload.WithString("softwareSetUpdateMode", SoftwareSetUpdateModeMapper::GetNameForSoftwareSetUpdateMode(m_softwareSetUpdateMode));
  }

  if(m_desiredSoftwareSetIdHasBeenSet)
  {
   payload.WithString("desiredSoftwareSetId", m_desiredSoftwareSetId);

  }

  if(m_pendingSoftwareSetIdHasBeenSet)
  {
   payload.WithString("pendingSoftwareSetId", m_pendingSoftwareSetId);

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
