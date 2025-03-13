/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworkscm/OpsWorksCM_EXPORTS.h>
#include <aws/opsworkscm/OpsWorksCMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace OpsWorksCM
{
namespace Model
{

  /**
   */
  class UpdateServerRequest : public OpsWorksCMRequest
  {
  public:
    AWS_OPSWORKSCM_API UpdateServerRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateServer"; }

    AWS_OPSWORKSCM_API Aws::String SerializePayload() const override;

    AWS_OPSWORKSCM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Setting DisableAutomatedBackup to <code>true</code> disables automated or
     * scheduled backups. Automated backups are enabled by default. </p>
     */
    inline bool GetDisableAutomatedBackup() const { return m_disableAutomatedBackup; }
    inline bool DisableAutomatedBackupHasBeenSet() const { return m_disableAutomatedBackupHasBeenSet; }
    inline void SetDisableAutomatedBackup(bool value) { m_disableAutomatedBackupHasBeenSet = true; m_disableAutomatedBackup = value; }
    inline UpdateServerRequest& WithDisableAutomatedBackup(bool value) { SetDisableAutomatedBackup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets the number of automated backups that you want to keep. </p>
     */
    inline int GetBackupRetentionCount() const { return m_backupRetentionCount; }
    inline bool BackupRetentionCountHasBeenSet() const { return m_backupRetentionCountHasBeenSet; }
    inline void SetBackupRetentionCount(int value) { m_backupRetentionCountHasBeenSet = true; m_backupRetentionCount = value; }
    inline UpdateServerRequest& WithBackupRetentionCount(int value) { SetBackupRetentionCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the server to update. </p>
     */
    inline const Aws::String& GetServerName() const { return m_serverName; }
    inline bool ServerNameHasBeenSet() const { return m_serverNameHasBeenSet; }
    template<typename ServerNameT = Aws::String>
    void SetServerName(ServerNameT&& value) { m_serverNameHasBeenSet = true; m_serverName = std::forward<ServerNameT>(value); }
    template<typename ServerNameT = Aws::String>
    UpdateServerRequest& WithServerName(ServerNameT&& value) { SetServerName(std::forward<ServerNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetPreferredMaintenanceWindow() const { return m_preferredMaintenanceWindow; }
    inline bool PreferredMaintenanceWindowHasBeenSet() const { return m_preferredMaintenanceWindowHasBeenSet; }
    template<typename PreferredMaintenanceWindowT = Aws::String>
    void SetPreferredMaintenanceWindow(PreferredMaintenanceWindowT&& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = std::forward<PreferredMaintenanceWindowT>(value); }
    template<typename PreferredMaintenanceWindowT = Aws::String>
    UpdateServerRequest& WithPreferredMaintenanceWindow(PreferredMaintenanceWindowT&& value) { SetPreferredMaintenanceWindow(std::forward<PreferredMaintenanceWindowT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetPreferredBackupWindow() const { return m_preferredBackupWindow; }
    inline bool PreferredBackupWindowHasBeenSet() const { return m_preferredBackupWindowHasBeenSet; }
    template<typename PreferredBackupWindowT = Aws::String>
    void SetPreferredBackupWindow(PreferredBackupWindowT&& value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow = std::forward<PreferredBackupWindowT>(value); }
    template<typename PreferredBackupWindowT = Aws::String>
    UpdateServerRequest& WithPreferredBackupWindow(PreferredBackupWindowT&& value) { SetPreferredBackupWindow(std::forward<PreferredBackupWindowT>(value)); return *this;}
    ///@}
  private:

    bool m_disableAutomatedBackup{false};
    bool m_disableAutomatedBackupHasBeenSet = false;

    int m_backupRetentionCount{0};
    bool m_backupRetentionCountHasBeenSet = false;

    Aws::String m_serverName;
    bool m_serverNameHasBeenSet = false;

    Aws::String m_preferredMaintenanceWindow;
    bool m_preferredMaintenanceWindowHasBeenSet = false;

    Aws::String m_preferredBackupWindow;
    bool m_preferredBackupWindowHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorksCM
} // namespace Aws
