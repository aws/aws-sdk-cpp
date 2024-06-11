﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sms/SMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sms/model/AppStatus.h>
#include <aws/sms/model/AppReplicationConfigurationStatus.h>
#include <aws/sms/model/AppReplicationStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sms/model/AppLaunchConfigurationStatus.h>
#include <aws/sms/model/AppLaunchStatus.h>
#include <aws/sms/model/LaunchDetails.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SMS
{
namespace Model
{

  /**
   * <p>Information about the application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/AppSummary">AWS API
   * Reference</a></p>
   */
  class AppSummary
  {
  public:
    AWS_SMS_API AppSummary();
    AWS_SMS_API AppSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SMS_API AppSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique ID of the application.</p>
     */
    inline const Aws::String& GetAppId() const{ return m_appId; }
    inline bool AppIdHasBeenSet() const { return m_appIdHasBeenSet; }
    inline void SetAppId(const Aws::String& value) { m_appIdHasBeenSet = true; m_appId = value; }
    inline void SetAppId(Aws::String&& value) { m_appIdHasBeenSet = true; m_appId = std::move(value); }
    inline void SetAppId(const char* value) { m_appIdHasBeenSet = true; m_appId.assign(value); }
    inline AppSummary& WithAppId(const Aws::String& value) { SetAppId(value); return *this;}
    inline AppSummary& WithAppId(Aws::String&& value) { SetAppId(std::move(value)); return *this;}
    inline AppSummary& WithAppId(const char* value) { SetAppId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the application.</p>
     */
    inline const Aws::String& GetImportedAppId() const{ return m_importedAppId; }
    inline bool ImportedAppIdHasBeenSet() const { return m_importedAppIdHasBeenSet; }
    inline void SetImportedAppId(const Aws::String& value) { m_importedAppIdHasBeenSet = true; m_importedAppId = value; }
    inline void SetImportedAppId(Aws::String&& value) { m_importedAppIdHasBeenSet = true; m_importedAppId = std::move(value); }
    inline void SetImportedAppId(const char* value) { m_importedAppIdHasBeenSet = true; m_importedAppId.assign(value); }
    inline AppSummary& WithImportedAppId(const Aws::String& value) { SetImportedAppId(value); return *this;}
    inline AppSummary& WithImportedAppId(Aws::String&& value) { SetImportedAppId(std::move(value)); return *this;}
    inline AppSummary& WithImportedAppId(const char* value) { SetImportedAppId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the application.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline AppSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline AppSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline AppSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the application.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline AppSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline AppSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline AppSummary& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of the application.</p>
     */
    inline const AppStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const AppStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(AppStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline AppSummary& WithStatus(const AppStatus& value) { SetStatus(value); return *this;}
    inline AppSummary& WithStatus(AppStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message related to the status of the application</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }
    inline AppSummary& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline AppSummary& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline AppSummary& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of the replication configuration.</p>
     */
    inline const AppReplicationConfigurationStatus& GetReplicationConfigurationStatus() const{ return m_replicationConfigurationStatus; }
    inline bool ReplicationConfigurationStatusHasBeenSet() const { return m_replicationConfigurationStatusHasBeenSet; }
    inline void SetReplicationConfigurationStatus(const AppReplicationConfigurationStatus& value) { m_replicationConfigurationStatusHasBeenSet = true; m_replicationConfigurationStatus = value; }
    inline void SetReplicationConfigurationStatus(AppReplicationConfigurationStatus&& value) { m_replicationConfigurationStatusHasBeenSet = true; m_replicationConfigurationStatus = std::move(value); }
    inline AppSummary& WithReplicationConfigurationStatus(const AppReplicationConfigurationStatus& value) { SetReplicationConfigurationStatus(value); return *this;}
    inline AppSummary& WithReplicationConfigurationStatus(AppReplicationConfigurationStatus&& value) { SetReplicationConfigurationStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The replication status of the application.</p>
     */
    inline const AppReplicationStatus& GetReplicationStatus() const{ return m_replicationStatus; }
    inline bool ReplicationStatusHasBeenSet() const { return m_replicationStatusHasBeenSet; }
    inline void SetReplicationStatus(const AppReplicationStatus& value) { m_replicationStatusHasBeenSet = true; m_replicationStatus = value; }
    inline void SetReplicationStatus(AppReplicationStatus&& value) { m_replicationStatusHasBeenSet = true; m_replicationStatus = std::move(value); }
    inline AppSummary& WithReplicationStatus(const AppReplicationStatus& value) { SetReplicationStatus(value); return *this;}
    inline AppSummary& WithReplicationStatus(AppReplicationStatus&& value) { SetReplicationStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message related to the replication status of the application.</p>
     */
    inline const Aws::String& GetReplicationStatusMessage() const{ return m_replicationStatusMessage; }
    inline bool ReplicationStatusMessageHasBeenSet() const { return m_replicationStatusMessageHasBeenSet; }
    inline void SetReplicationStatusMessage(const Aws::String& value) { m_replicationStatusMessageHasBeenSet = true; m_replicationStatusMessage = value; }
    inline void SetReplicationStatusMessage(Aws::String&& value) { m_replicationStatusMessageHasBeenSet = true; m_replicationStatusMessage = std::move(value); }
    inline void SetReplicationStatusMessage(const char* value) { m_replicationStatusMessageHasBeenSet = true; m_replicationStatusMessage.assign(value); }
    inline AppSummary& WithReplicationStatusMessage(const Aws::String& value) { SetReplicationStatusMessage(value); return *this;}
    inline AppSummary& WithReplicationStatusMessage(Aws::String&& value) { SetReplicationStatusMessage(std::move(value)); return *this;}
    inline AppSummary& WithReplicationStatusMessage(const char* value) { SetReplicationStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of the application's most recent successful replication.</p>
     */
    inline const Aws::Utils::DateTime& GetLatestReplicationTime() const{ return m_latestReplicationTime; }
    inline bool LatestReplicationTimeHasBeenSet() const { return m_latestReplicationTimeHasBeenSet; }
    inline void SetLatestReplicationTime(const Aws::Utils::DateTime& value) { m_latestReplicationTimeHasBeenSet = true; m_latestReplicationTime = value; }
    inline void SetLatestReplicationTime(Aws::Utils::DateTime&& value) { m_latestReplicationTimeHasBeenSet = true; m_latestReplicationTime = std::move(value); }
    inline AppSummary& WithLatestReplicationTime(const Aws::Utils::DateTime& value) { SetLatestReplicationTime(value); return *this;}
    inline AppSummary& WithLatestReplicationTime(Aws::Utils::DateTime&& value) { SetLatestReplicationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of the launch configuration.</p>
     */
    inline const AppLaunchConfigurationStatus& GetLaunchConfigurationStatus() const{ return m_launchConfigurationStatus; }
    inline bool LaunchConfigurationStatusHasBeenSet() const { return m_launchConfigurationStatusHasBeenSet; }
    inline void SetLaunchConfigurationStatus(const AppLaunchConfigurationStatus& value) { m_launchConfigurationStatusHasBeenSet = true; m_launchConfigurationStatus = value; }
    inline void SetLaunchConfigurationStatus(AppLaunchConfigurationStatus&& value) { m_launchConfigurationStatusHasBeenSet = true; m_launchConfigurationStatus = std::move(value); }
    inline AppSummary& WithLaunchConfigurationStatus(const AppLaunchConfigurationStatus& value) { SetLaunchConfigurationStatus(value); return *this;}
    inline AppSummary& WithLaunchConfigurationStatus(AppLaunchConfigurationStatus&& value) { SetLaunchConfigurationStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The launch status of the application.</p>
     */
    inline const AppLaunchStatus& GetLaunchStatus() const{ return m_launchStatus; }
    inline bool LaunchStatusHasBeenSet() const { return m_launchStatusHasBeenSet; }
    inline void SetLaunchStatus(const AppLaunchStatus& value) { m_launchStatusHasBeenSet = true; m_launchStatus = value; }
    inline void SetLaunchStatus(AppLaunchStatus&& value) { m_launchStatusHasBeenSet = true; m_launchStatus = std::move(value); }
    inline AppSummary& WithLaunchStatus(const AppLaunchStatus& value) { SetLaunchStatus(value); return *this;}
    inline AppSummary& WithLaunchStatus(AppLaunchStatus&& value) { SetLaunchStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message related to the launch status of the application.</p>
     */
    inline const Aws::String& GetLaunchStatusMessage() const{ return m_launchStatusMessage; }
    inline bool LaunchStatusMessageHasBeenSet() const { return m_launchStatusMessageHasBeenSet; }
    inline void SetLaunchStatusMessage(const Aws::String& value) { m_launchStatusMessageHasBeenSet = true; m_launchStatusMessage = value; }
    inline void SetLaunchStatusMessage(Aws::String&& value) { m_launchStatusMessageHasBeenSet = true; m_launchStatusMessage = std::move(value); }
    inline void SetLaunchStatusMessage(const char* value) { m_launchStatusMessageHasBeenSet = true; m_launchStatusMessage.assign(value); }
    inline AppSummary& WithLaunchStatusMessage(const Aws::String& value) { SetLaunchStatusMessage(value); return *this;}
    inline AppSummary& WithLaunchStatusMessage(Aws::String&& value) { SetLaunchStatusMessage(std::move(value)); return *this;}
    inline AppSummary& WithLaunchStatusMessage(const char* value) { SetLaunchStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the latest launch of the application.</p>
     */
    inline const LaunchDetails& GetLaunchDetails() const{ return m_launchDetails; }
    inline bool LaunchDetailsHasBeenSet() const { return m_launchDetailsHasBeenSet; }
    inline void SetLaunchDetails(const LaunchDetails& value) { m_launchDetailsHasBeenSet = true; m_launchDetails = value; }
    inline void SetLaunchDetails(LaunchDetails&& value) { m_launchDetailsHasBeenSet = true; m_launchDetails = std::move(value); }
    inline AppSummary& WithLaunchDetails(const LaunchDetails& value) { SetLaunchDetails(value); return *this;}
    inline AppSummary& WithLaunchDetails(LaunchDetails&& value) { SetLaunchDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation time of the application.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline AppSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline AppSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last modified time of the application.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModified() const{ return m_lastModified; }
    inline bool LastModifiedHasBeenSet() const { return m_lastModifiedHasBeenSet; }
    inline void SetLastModified(const Aws::Utils::DateTime& value) { m_lastModifiedHasBeenSet = true; m_lastModified = value; }
    inline void SetLastModified(Aws::Utils::DateTime&& value) { m_lastModifiedHasBeenSet = true; m_lastModified = std::move(value); }
    inline AppSummary& WithLastModified(const Aws::Utils::DateTime& value) { SetLastModified(value); return *this;}
    inline AppSummary& WithLastModified(Aws::Utils::DateTime&& value) { SetLastModified(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the service role in the customer's account used by Server
     * Migration Service.</p>
     */
    inline const Aws::String& GetRoleName() const{ return m_roleName; }
    inline bool RoleNameHasBeenSet() const { return m_roleNameHasBeenSet; }
    inline void SetRoleName(const Aws::String& value) { m_roleNameHasBeenSet = true; m_roleName = value; }
    inline void SetRoleName(Aws::String&& value) { m_roleNameHasBeenSet = true; m_roleName = std::move(value); }
    inline void SetRoleName(const char* value) { m_roleNameHasBeenSet = true; m_roleName.assign(value); }
    inline AppSummary& WithRoleName(const Aws::String& value) { SetRoleName(value); return *this;}
    inline AppSummary& WithRoleName(Aws::String&& value) { SetRoleName(std::move(value)); return *this;}
    inline AppSummary& WithRoleName(const char* value) { SetRoleName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of server groups present in the application.</p>
     */
    inline int GetTotalServerGroups() const{ return m_totalServerGroups; }
    inline bool TotalServerGroupsHasBeenSet() const { return m_totalServerGroupsHasBeenSet; }
    inline void SetTotalServerGroups(int value) { m_totalServerGroupsHasBeenSet = true; m_totalServerGroups = value; }
    inline AppSummary& WithTotalServerGroups(int value) { SetTotalServerGroups(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of servers present in the application.</p>
     */
    inline int GetTotalServers() const{ return m_totalServers; }
    inline bool TotalServersHasBeenSet() const { return m_totalServersHasBeenSet; }
    inline void SetTotalServers(int value) { m_totalServersHasBeenSet = true; m_totalServers = value; }
    inline AppSummary& WithTotalServers(int value) { SetTotalServers(value); return *this;}
    ///@}
  private:

    Aws::String m_appId;
    bool m_appIdHasBeenSet = false;

    Aws::String m_importedAppId;
    bool m_importedAppIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    AppStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    AppReplicationConfigurationStatus m_replicationConfigurationStatus;
    bool m_replicationConfigurationStatusHasBeenSet = false;

    AppReplicationStatus m_replicationStatus;
    bool m_replicationStatusHasBeenSet = false;

    Aws::String m_replicationStatusMessage;
    bool m_replicationStatusMessageHasBeenSet = false;

    Aws::Utils::DateTime m_latestReplicationTime;
    bool m_latestReplicationTimeHasBeenSet = false;

    AppLaunchConfigurationStatus m_launchConfigurationStatus;
    bool m_launchConfigurationStatusHasBeenSet = false;

    AppLaunchStatus m_launchStatus;
    bool m_launchStatusHasBeenSet = false;

    Aws::String m_launchStatusMessage;
    bool m_launchStatusMessageHasBeenSet = false;

    LaunchDetails m_launchDetails;
    bool m_launchDetailsHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModified;
    bool m_lastModifiedHasBeenSet = false;

    Aws::String m_roleName;
    bool m_roleNameHasBeenSet = false;

    int m_totalServerGroups;
    bool m_totalServerGroupsHasBeenSet = false;

    int m_totalServers;
    bool m_totalServersHasBeenSet = false;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
