/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sms/model/AppSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SMS
{
namespace Model
{

AppSummary::AppSummary() : 
    m_appIdHasBeenSet(false),
    m_importedAppIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_status(AppStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_replicationConfigurationStatus(AppReplicationConfigurationStatus::NOT_SET),
    m_replicationConfigurationStatusHasBeenSet(false),
    m_replicationStatus(AppReplicationStatus::NOT_SET),
    m_replicationStatusHasBeenSet(false),
    m_replicationStatusMessageHasBeenSet(false),
    m_latestReplicationTimeHasBeenSet(false),
    m_launchConfigurationStatus(AppLaunchConfigurationStatus::NOT_SET),
    m_launchConfigurationStatusHasBeenSet(false),
    m_launchStatus(AppLaunchStatus::NOT_SET),
    m_launchStatusHasBeenSet(false),
    m_launchStatusMessageHasBeenSet(false),
    m_launchDetailsHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastModifiedHasBeenSet(false),
    m_roleNameHasBeenSet(false),
    m_totalServerGroups(0),
    m_totalServerGroupsHasBeenSet(false),
    m_totalServers(0),
    m_totalServersHasBeenSet(false)
{
}

AppSummary::AppSummary(JsonView jsonValue) : 
    m_appIdHasBeenSet(false),
    m_importedAppIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_status(AppStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_replicationConfigurationStatus(AppReplicationConfigurationStatus::NOT_SET),
    m_replicationConfigurationStatusHasBeenSet(false),
    m_replicationStatus(AppReplicationStatus::NOT_SET),
    m_replicationStatusHasBeenSet(false),
    m_replicationStatusMessageHasBeenSet(false),
    m_latestReplicationTimeHasBeenSet(false),
    m_launchConfigurationStatus(AppLaunchConfigurationStatus::NOT_SET),
    m_launchConfigurationStatusHasBeenSet(false),
    m_launchStatus(AppLaunchStatus::NOT_SET),
    m_launchStatusHasBeenSet(false),
    m_launchStatusMessageHasBeenSet(false),
    m_launchDetailsHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastModifiedHasBeenSet(false),
    m_roleNameHasBeenSet(false),
    m_totalServerGroups(0),
    m_totalServerGroupsHasBeenSet(false),
    m_totalServers(0),
    m_totalServersHasBeenSet(false)
{
  *this = jsonValue;
}

AppSummary& AppSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("appId"))
  {
    m_appId = jsonValue.GetString("appId");

    m_appIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("importedAppId"))
  {
    m_importedAppId = jsonValue.GetString("importedAppId");

    m_importedAppIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = AppStatusMapper::GetAppStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statusMessage"))
  {
    m_statusMessage = jsonValue.GetString("statusMessage");

    m_statusMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("replicationConfigurationStatus"))
  {
    m_replicationConfigurationStatus = AppReplicationConfigurationStatusMapper::GetAppReplicationConfigurationStatusForName(jsonValue.GetString("replicationConfigurationStatus"));

    m_replicationConfigurationStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("replicationStatus"))
  {
    m_replicationStatus = AppReplicationStatusMapper::GetAppReplicationStatusForName(jsonValue.GetString("replicationStatus"));

    m_replicationStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("replicationStatusMessage"))
  {
    m_replicationStatusMessage = jsonValue.GetString("replicationStatusMessage");

    m_replicationStatusMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("latestReplicationTime"))
  {
    m_latestReplicationTime = jsonValue.GetDouble("latestReplicationTime");

    m_latestReplicationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("launchConfigurationStatus"))
  {
    m_launchConfigurationStatus = AppLaunchConfigurationStatusMapper::GetAppLaunchConfigurationStatusForName(jsonValue.GetString("launchConfigurationStatus"));

    m_launchConfigurationStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("launchStatus"))
  {
    m_launchStatus = AppLaunchStatusMapper::GetAppLaunchStatusForName(jsonValue.GetString("launchStatus"));

    m_launchStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("launchStatusMessage"))
  {
    m_launchStatusMessage = jsonValue.GetString("launchStatusMessage");

    m_launchStatusMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("launchDetails"))
  {
    m_launchDetails = jsonValue.GetObject("launchDetails");

    m_launchDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetDouble("creationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastModified"))
  {
    m_lastModified = jsonValue.GetDouble("lastModified");

    m_lastModifiedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("roleName"))
  {
    m_roleName = jsonValue.GetString("roleName");

    m_roleNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("totalServerGroups"))
  {
    m_totalServerGroups = jsonValue.GetInteger("totalServerGroups");

    m_totalServerGroupsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("totalServers"))
  {
    m_totalServers = jsonValue.GetInteger("totalServers");

    m_totalServersHasBeenSet = true;
  }

  return *this;
}

JsonValue AppSummary::Jsonize() const
{
  JsonValue payload;

  if(m_appIdHasBeenSet)
  {
   payload.WithString("appId", m_appId);

  }

  if(m_importedAppIdHasBeenSet)
  {
   payload.WithString("importedAppId", m_importedAppId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", AppStatusMapper::GetNameForAppStatus(m_status));
  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("statusMessage", m_statusMessage);

  }

  if(m_replicationConfigurationStatusHasBeenSet)
  {
   payload.WithString("replicationConfigurationStatus", AppReplicationConfigurationStatusMapper::GetNameForAppReplicationConfigurationStatus(m_replicationConfigurationStatus));
  }

  if(m_replicationStatusHasBeenSet)
  {
   payload.WithString("replicationStatus", AppReplicationStatusMapper::GetNameForAppReplicationStatus(m_replicationStatus));
  }

  if(m_replicationStatusMessageHasBeenSet)
  {
   payload.WithString("replicationStatusMessage", m_replicationStatusMessage);

  }

  if(m_latestReplicationTimeHasBeenSet)
  {
   payload.WithDouble("latestReplicationTime", m_latestReplicationTime.SecondsWithMSPrecision());
  }

  if(m_launchConfigurationStatusHasBeenSet)
  {
   payload.WithString("launchConfigurationStatus", AppLaunchConfigurationStatusMapper::GetNameForAppLaunchConfigurationStatus(m_launchConfigurationStatus));
  }

  if(m_launchStatusHasBeenSet)
  {
   payload.WithString("launchStatus", AppLaunchStatusMapper::GetNameForAppLaunchStatus(m_launchStatus));
  }

  if(m_launchStatusMessageHasBeenSet)
  {
   payload.WithString("launchStatusMessage", m_launchStatusMessage);

  }

  if(m_launchDetailsHasBeenSet)
  {
   payload.WithObject("launchDetails", m_launchDetails.Jsonize());

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("creationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_lastModifiedHasBeenSet)
  {
   payload.WithDouble("lastModified", m_lastModified.SecondsWithMSPrecision());
  }

  if(m_roleNameHasBeenSet)
  {
   payload.WithString("roleName", m_roleName);

  }

  if(m_totalServerGroupsHasBeenSet)
  {
   payload.WithInteger("totalServerGroups", m_totalServerGroups);

  }

  if(m_totalServersHasBeenSet)
  {
   payload.WithInteger("totalServers", m_totalServers);

  }

  return payload;
}

} // namespace Model
} // namespace SMS
} // namespace Aws
