/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/AwsBackupBackupPlanAdvancedBackupSettingsDetails.h>
#include <aws/securityhub/model/AwsBackupBackupPlanRuleDetails.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Provides details about an Backup backup plan and an array of
   * <code>BackupRule</code> objects, each of which specifies a backup rule.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsBackupBackupPlanBackupPlanDetails">AWS
   * API Reference</a></p>
   */
  class AwsBackupBackupPlanBackupPlanDetails
  {
  public:
    AWS_SECURITYHUB_API AwsBackupBackupPlanBackupPlanDetails() = default;
    AWS_SECURITYHUB_API AwsBackupBackupPlanBackupPlanDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsBackupBackupPlanBackupPlanDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The display name of a backup plan. </p>
     */
    inline const Aws::String& GetBackupPlanName() const { return m_backupPlanName; }
    inline bool BackupPlanNameHasBeenSet() const { return m_backupPlanNameHasBeenSet; }
    template<typename BackupPlanNameT = Aws::String>
    void SetBackupPlanName(BackupPlanNameT&& value) { m_backupPlanNameHasBeenSet = true; m_backupPlanName = std::forward<BackupPlanNameT>(value); }
    template<typename BackupPlanNameT = Aws::String>
    AwsBackupBackupPlanBackupPlanDetails& WithBackupPlanName(BackupPlanNameT&& value) { SetBackupPlanName(std::forward<BackupPlanNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of backup options for each resource type. </p>
     */
    inline const Aws::Vector<AwsBackupBackupPlanAdvancedBackupSettingsDetails>& GetAdvancedBackupSettings() const { return m_advancedBackupSettings; }
    inline bool AdvancedBackupSettingsHasBeenSet() const { return m_advancedBackupSettingsHasBeenSet; }
    template<typename AdvancedBackupSettingsT = Aws::Vector<AwsBackupBackupPlanAdvancedBackupSettingsDetails>>
    void SetAdvancedBackupSettings(AdvancedBackupSettingsT&& value) { m_advancedBackupSettingsHasBeenSet = true; m_advancedBackupSettings = std::forward<AdvancedBackupSettingsT>(value); }
    template<typename AdvancedBackupSettingsT = Aws::Vector<AwsBackupBackupPlanAdvancedBackupSettingsDetails>>
    AwsBackupBackupPlanBackupPlanDetails& WithAdvancedBackupSettings(AdvancedBackupSettingsT&& value) { SetAdvancedBackupSettings(std::forward<AdvancedBackupSettingsT>(value)); return *this;}
    template<typename AdvancedBackupSettingsT = AwsBackupBackupPlanAdvancedBackupSettingsDetails>
    AwsBackupBackupPlanBackupPlanDetails& AddAdvancedBackupSettings(AdvancedBackupSettingsT&& value) { m_advancedBackupSettingsHasBeenSet = true; m_advancedBackupSettings.emplace_back(std::forward<AdvancedBackupSettingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of <code>BackupRule</code> objects, each of which specifies a
     * scheduled task that is used to back up a selection of resources. </p>
     */
    inline const Aws::Vector<AwsBackupBackupPlanRuleDetails>& GetBackupPlanRule() const { return m_backupPlanRule; }
    inline bool BackupPlanRuleHasBeenSet() const { return m_backupPlanRuleHasBeenSet; }
    template<typename BackupPlanRuleT = Aws::Vector<AwsBackupBackupPlanRuleDetails>>
    void SetBackupPlanRule(BackupPlanRuleT&& value) { m_backupPlanRuleHasBeenSet = true; m_backupPlanRule = std::forward<BackupPlanRuleT>(value); }
    template<typename BackupPlanRuleT = Aws::Vector<AwsBackupBackupPlanRuleDetails>>
    AwsBackupBackupPlanBackupPlanDetails& WithBackupPlanRule(BackupPlanRuleT&& value) { SetBackupPlanRule(std::forward<BackupPlanRuleT>(value)); return *this;}
    template<typename BackupPlanRuleT = AwsBackupBackupPlanRuleDetails>
    AwsBackupBackupPlanBackupPlanDetails& AddBackupPlanRule(BackupPlanRuleT&& value) { m_backupPlanRuleHasBeenSet = true; m_backupPlanRule.emplace_back(std::forward<BackupPlanRuleT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_backupPlanName;
    bool m_backupPlanNameHasBeenSet = false;

    Aws::Vector<AwsBackupBackupPlanAdvancedBackupSettingsDetails> m_advancedBackupSettings;
    bool m_advancedBackupSettingsHasBeenSet = false;

    Aws::Vector<AwsBackupBackupPlanRuleDetails> m_backupPlanRule;
    bool m_backupPlanRuleHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
