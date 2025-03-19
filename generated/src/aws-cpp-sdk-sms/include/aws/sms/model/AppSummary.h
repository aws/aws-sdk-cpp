/**
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
    AWS_SMS_API AppSummary() = default;
    AWS_SMS_API AppSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SMS_API AppSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique ID of the application.</p>
     */
    inline const Aws::String& GetAppId() const { return m_appId; }
    inline bool AppIdHasBeenSet() const { return m_appIdHasBeenSet; }
    template<typename AppIdT = Aws::String>
    void SetAppId(AppIdT&& value) { m_appIdHasBeenSet = true; m_appId = std::forward<AppIdT>(value); }
    template<typename AppIdT = Aws::String>
    AppSummary& WithAppId(AppIdT&& value) { SetAppId(std::forward<AppIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the application.</p>
     */
    inline const Aws::String& GetImportedAppId() const { return m_importedAppId; }
    inline bool ImportedAppIdHasBeenSet() const { return m_importedAppIdHasBeenSet; }
    template<typename ImportedAppIdT = Aws::String>
    void SetImportedAppId(ImportedAppIdT&& value) { m_importedAppIdHasBeenSet = true; m_importedAppId = std::forward<ImportedAppIdT>(value); }
    template<typename ImportedAppIdT = Aws::String>
    AppSummary& WithImportedAppId(ImportedAppIdT&& value) { SetImportedAppId(std::forward<ImportedAppIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the application.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    AppSummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the application.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    AppSummary& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of the application.</p>
     */
    inline AppStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(AppStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline AppSummary& WithStatus(AppStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message related to the status of the application</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    AppSummary& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of the replication configuration.</p>
     */
    inline AppReplicationConfigurationStatus GetReplicationConfigurationStatus() const { return m_replicationConfigurationStatus; }
    inline bool ReplicationConfigurationStatusHasBeenSet() const { return m_replicationConfigurationStatusHasBeenSet; }
    inline void SetReplicationConfigurationStatus(AppReplicationConfigurationStatus value) { m_replicationConfigurationStatusHasBeenSet = true; m_replicationConfigurationStatus = value; }
    inline AppSummary& WithReplicationConfigurationStatus(AppReplicationConfigurationStatus value) { SetReplicationConfigurationStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The replication status of the application.</p>
     */
    inline AppReplicationStatus GetReplicationStatus() const { return m_replicationStatus; }
    inline bool ReplicationStatusHasBeenSet() const { return m_replicationStatusHasBeenSet; }
    inline void SetReplicationStatus(AppReplicationStatus value) { m_replicationStatusHasBeenSet = true; m_replicationStatus = value; }
    inline AppSummary& WithReplicationStatus(AppReplicationStatus value) { SetReplicationStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message related to the replication status of the application.</p>
     */
    inline const Aws::String& GetReplicationStatusMessage() const { return m_replicationStatusMessage; }
    inline bool ReplicationStatusMessageHasBeenSet() const { return m_replicationStatusMessageHasBeenSet; }
    template<typename ReplicationStatusMessageT = Aws::String>
    void SetReplicationStatusMessage(ReplicationStatusMessageT&& value) { m_replicationStatusMessageHasBeenSet = true; m_replicationStatusMessage = std::forward<ReplicationStatusMessageT>(value); }
    template<typename ReplicationStatusMessageT = Aws::String>
    AppSummary& WithReplicationStatusMessage(ReplicationStatusMessageT&& value) { SetReplicationStatusMessage(std::forward<ReplicationStatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of the application's most recent successful replication.</p>
     */
    inline const Aws::Utils::DateTime& GetLatestReplicationTime() const { return m_latestReplicationTime; }
    inline bool LatestReplicationTimeHasBeenSet() const { return m_latestReplicationTimeHasBeenSet; }
    template<typename LatestReplicationTimeT = Aws::Utils::DateTime>
    void SetLatestReplicationTime(LatestReplicationTimeT&& value) { m_latestReplicationTimeHasBeenSet = true; m_latestReplicationTime = std::forward<LatestReplicationTimeT>(value); }
    template<typename LatestReplicationTimeT = Aws::Utils::DateTime>
    AppSummary& WithLatestReplicationTime(LatestReplicationTimeT&& value) { SetLatestReplicationTime(std::forward<LatestReplicationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of the launch configuration.</p>
     */
    inline AppLaunchConfigurationStatus GetLaunchConfigurationStatus() const { return m_launchConfigurationStatus; }
    inline bool LaunchConfigurationStatusHasBeenSet() const { return m_launchConfigurationStatusHasBeenSet; }
    inline void SetLaunchConfigurationStatus(AppLaunchConfigurationStatus value) { m_launchConfigurationStatusHasBeenSet = true; m_launchConfigurationStatus = value; }
    inline AppSummary& WithLaunchConfigurationStatus(AppLaunchConfigurationStatus value) { SetLaunchConfigurationStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The launch status of the application.</p>
     */
    inline AppLaunchStatus GetLaunchStatus() const { return m_launchStatus; }
    inline bool LaunchStatusHasBeenSet() const { return m_launchStatusHasBeenSet; }
    inline void SetLaunchStatus(AppLaunchStatus value) { m_launchStatusHasBeenSet = true; m_launchStatus = value; }
    inline AppSummary& WithLaunchStatus(AppLaunchStatus value) { SetLaunchStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message related to the launch status of the application.</p>
     */
    inline const Aws::String& GetLaunchStatusMessage() const { return m_launchStatusMessage; }
    inline bool LaunchStatusMessageHasBeenSet() const { return m_launchStatusMessageHasBeenSet; }
    template<typename LaunchStatusMessageT = Aws::String>
    void SetLaunchStatusMessage(LaunchStatusMessageT&& value) { m_launchStatusMessageHasBeenSet = true; m_launchStatusMessage = std::forward<LaunchStatusMessageT>(value); }
    template<typename LaunchStatusMessageT = Aws::String>
    AppSummary& WithLaunchStatusMessage(LaunchStatusMessageT&& value) { SetLaunchStatusMessage(std::forward<LaunchStatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the latest launch of the application.</p>
     */
    inline const LaunchDetails& GetLaunchDetails() const { return m_launchDetails; }
    inline bool LaunchDetailsHasBeenSet() const { return m_launchDetailsHasBeenSet; }
    template<typename LaunchDetailsT = LaunchDetails>
    void SetLaunchDetails(LaunchDetailsT&& value) { m_launchDetailsHasBeenSet = true; m_launchDetails = std::forward<LaunchDetailsT>(value); }
    template<typename LaunchDetailsT = LaunchDetails>
    AppSummary& WithLaunchDetails(LaunchDetailsT&& value) { SetLaunchDetails(std::forward<LaunchDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation time of the application.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    AppSummary& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last modified time of the application.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModified() const { return m_lastModified; }
    inline bool LastModifiedHasBeenSet() const { return m_lastModifiedHasBeenSet; }
    template<typename LastModifiedT = Aws::Utils::DateTime>
    void SetLastModified(LastModifiedT&& value) { m_lastModifiedHasBeenSet = true; m_lastModified = std::forward<LastModifiedT>(value); }
    template<typename LastModifiedT = Aws::Utils::DateTime>
    AppSummary& WithLastModified(LastModifiedT&& value) { SetLastModified(std::forward<LastModifiedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the service role in the customer's account used by Server
     * Migration Service.</p>
     */
    inline const Aws::String& GetRoleName() const { return m_roleName; }
    inline bool RoleNameHasBeenSet() const { return m_roleNameHasBeenSet; }
    template<typename RoleNameT = Aws::String>
    void SetRoleName(RoleNameT&& value) { m_roleNameHasBeenSet = true; m_roleName = std::forward<RoleNameT>(value); }
    template<typename RoleNameT = Aws::String>
    AppSummary& WithRoleName(RoleNameT&& value) { SetRoleName(std::forward<RoleNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of server groups present in the application.</p>
     */
    inline int GetTotalServerGroups() const { return m_totalServerGroups; }
    inline bool TotalServerGroupsHasBeenSet() const { return m_totalServerGroupsHasBeenSet; }
    inline void SetTotalServerGroups(int value) { m_totalServerGroupsHasBeenSet = true; m_totalServerGroups = value; }
    inline AppSummary& WithTotalServerGroups(int value) { SetTotalServerGroups(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of servers present in the application.</p>
     */
    inline int GetTotalServers() const { return m_totalServers; }
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

    AppStatus m_status{AppStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    AppReplicationConfigurationStatus m_replicationConfigurationStatus{AppReplicationConfigurationStatus::NOT_SET};
    bool m_replicationConfigurationStatusHasBeenSet = false;

    AppReplicationStatus m_replicationStatus{AppReplicationStatus::NOT_SET};
    bool m_replicationStatusHasBeenSet = false;

    Aws::String m_replicationStatusMessage;
    bool m_replicationStatusMessageHasBeenSet = false;

    Aws::Utils::DateTime m_latestReplicationTime{};
    bool m_latestReplicationTimeHasBeenSet = false;

    AppLaunchConfigurationStatus m_launchConfigurationStatus{AppLaunchConfigurationStatus::NOT_SET};
    bool m_launchConfigurationStatusHasBeenSet = false;

    AppLaunchStatus m_launchStatus{AppLaunchStatus::NOT_SET};
    bool m_launchStatusHasBeenSet = false;

    Aws::String m_launchStatusMessage;
    bool m_launchStatusMessageHasBeenSet = false;

    LaunchDetails m_launchDetails;
    bool m_launchDetailsHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModified{};
    bool m_lastModifiedHasBeenSet = false;

    Aws::String m_roleName;
    bool m_roleNameHasBeenSet = false;

    int m_totalServerGroups{0};
    bool m_totalServerGroupsHasBeenSet = false;

    int m_totalServers{0};
    bool m_totalServersHasBeenSet = false;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
