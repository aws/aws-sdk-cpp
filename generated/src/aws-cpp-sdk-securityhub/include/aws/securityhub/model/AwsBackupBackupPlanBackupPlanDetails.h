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
    AWS_SECURITYHUB_API AwsBackupBackupPlanBackupPlanDetails();
    AWS_SECURITYHUB_API AwsBackupBackupPlanBackupPlanDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsBackupBackupPlanBackupPlanDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The display name of a backup plan. </p>
     */
    inline const Aws::String& GetBackupPlanName() const{ return m_backupPlanName; }

    /**
     * <p>The display name of a backup plan. </p>
     */
    inline bool BackupPlanNameHasBeenSet() const { return m_backupPlanNameHasBeenSet; }

    /**
     * <p>The display name of a backup plan. </p>
     */
    inline void SetBackupPlanName(const Aws::String& value) { m_backupPlanNameHasBeenSet = true; m_backupPlanName = value; }

    /**
     * <p>The display name of a backup plan. </p>
     */
    inline void SetBackupPlanName(Aws::String&& value) { m_backupPlanNameHasBeenSet = true; m_backupPlanName = std::move(value); }

    /**
     * <p>The display name of a backup plan. </p>
     */
    inline void SetBackupPlanName(const char* value) { m_backupPlanNameHasBeenSet = true; m_backupPlanName.assign(value); }

    /**
     * <p>The display name of a backup plan. </p>
     */
    inline AwsBackupBackupPlanBackupPlanDetails& WithBackupPlanName(const Aws::String& value) { SetBackupPlanName(value); return *this;}

    /**
     * <p>The display name of a backup plan. </p>
     */
    inline AwsBackupBackupPlanBackupPlanDetails& WithBackupPlanName(Aws::String&& value) { SetBackupPlanName(std::move(value)); return *this;}

    /**
     * <p>The display name of a backup plan. </p>
     */
    inline AwsBackupBackupPlanBackupPlanDetails& WithBackupPlanName(const char* value) { SetBackupPlanName(value); return *this;}


    /**
     * <p>A list of backup options for each resource type. </p>
     */
    inline const Aws::Vector<AwsBackupBackupPlanAdvancedBackupSettingsDetails>& GetAdvancedBackupSettings() const{ return m_advancedBackupSettings; }

    /**
     * <p>A list of backup options for each resource type. </p>
     */
    inline bool AdvancedBackupSettingsHasBeenSet() const { return m_advancedBackupSettingsHasBeenSet; }

    /**
     * <p>A list of backup options for each resource type. </p>
     */
    inline void SetAdvancedBackupSettings(const Aws::Vector<AwsBackupBackupPlanAdvancedBackupSettingsDetails>& value) { m_advancedBackupSettingsHasBeenSet = true; m_advancedBackupSettings = value; }

    /**
     * <p>A list of backup options for each resource type. </p>
     */
    inline void SetAdvancedBackupSettings(Aws::Vector<AwsBackupBackupPlanAdvancedBackupSettingsDetails>&& value) { m_advancedBackupSettingsHasBeenSet = true; m_advancedBackupSettings = std::move(value); }

    /**
     * <p>A list of backup options for each resource type. </p>
     */
    inline AwsBackupBackupPlanBackupPlanDetails& WithAdvancedBackupSettings(const Aws::Vector<AwsBackupBackupPlanAdvancedBackupSettingsDetails>& value) { SetAdvancedBackupSettings(value); return *this;}

    /**
     * <p>A list of backup options for each resource type. </p>
     */
    inline AwsBackupBackupPlanBackupPlanDetails& WithAdvancedBackupSettings(Aws::Vector<AwsBackupBackupPlanAdvancedBackupSettingsDetails>&& value) { SetAdvancedBackupSettings(std::move(value)); return *this;}

    /**
     * <p>A list of backup options for each resource type. </p>
     */
    inline AwsBackupBackupPlanBackupPlanDetails& AddAdvancedBackupSettings(const AwsBackupBackupPlanAdvancedBackupSettingsDetails& value) { m_advancedBackupSettingsHasBeenSet = true; m_advancedBackupSettings.push_back(value); return *this; }

    /**
     * <p>A list of backup options for each resource type. </p>
     */
    inline AwsBackupBackupPlanBackupPlanDetails& AddAdvancedBackupSettings(AwsBackupBackupPlanAdvancedBackupSettingsDetails&& value) { m_advancedBackupSettingsHasBeenSet = true; m_advancedBackupSettings.push_back(std::move(value)); return *this; }


    /**
     * <p>An array of <code>BackupRule</code> objects, each of which specifies a
     * scheduled task that is used to back up a selection of resources. </p>
     */
    inline const Aws::Vector<AwsBackupBackupPlanRuleDetails>& GetBackupPlanRule() const{ return m_backupPlanRule; }

    /**
     * <p>An array of <code>BackupRule</code> objects, each of which specifies a
     * scheduled task that is used to back up a selection of resources. </p>
     */
    inline bool BackupPlanRuleHasBeenSet() const { return m_backupPlanRuleHasBeenSet; }

    /**
     * <p>An array of <code>BackupRule</code> objects, each of which specifies a
     * scheduled task that is used to back up a selection of resources. </p>
     */
    inline void SetBackupPlanRule(const Aws::Vector<AwsBackupBackupPlanRuleDetails>& value) { m_backupPlanRuleHasBeenSet = true; m_backupPlanRule = value; }

    /**
     * <p>An array of <code>BackupRule</code> objects, each of which specifies a
     * scheduled task that is used to back up a selection of resources. </p>
     */
    inline void SetBackupPlanRule(Aws::Vector<AwsBackupBackupPlanRuleDetails>&& value) { m_backupPlanRuleHasBeenSet = true; m_backupPlanRule = std::move(value); }

    /**
     * <p>An array of <code>BackupRule</code> objects, each of which specifies a
     * scheduled task that is used to back up a selection of resources. </p>
     */
    inline AwsBackupBackupPlanBackupPlanDetails& WithBackupPlanRule(const Aws::Vector<AwsBackupBackupPlanRuleDetails>& value) { SetBackupPlanRule(value); return *this;}

    /**
     * <p>An array of <code>BackupRule</code> objects, each of which specifies a
     * scheduled task that is used to back up a selection of resources. </p>
     */
    inline AwsBackupBackupPlanBackupPlanDetails& WithBackupPlanRule(Aws::Vector<AwsBackupBackupPlanRuleDetails>&& value) { SetBackupPlanRule(std::move(value)); return *this;}

    /**
     * <p>An array of <code>BackupRule</code> objects, each of which specifies a
     * scheduled task that is used to back up a selection of resources. </p>
     */
    inline AwsBackupBackupPlanBackupPlanDetails& AddBackupPlanRule(const AwsBackupBackupPlanRuleDetails& value) { m_backupPlanRuleHasBeenSet = true; m_backupPlanRule.push_back(value); return *this; }

    /**
     * <p>An array of <code>BackupRule</code> objects, each of which specifies a
     * scheduled task that is used to back up a selection of resources. </p>
     */
    inline AwsBackupBackupPlanBackupPlanDetails& AddBackupPlanRule(AwsBackupBackupPlanRuleDetails&& value) { m_backupPlanRuleHasBeenSet = true; m_backupPlanRule.push_back(std::move(value)); return *this; }

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
