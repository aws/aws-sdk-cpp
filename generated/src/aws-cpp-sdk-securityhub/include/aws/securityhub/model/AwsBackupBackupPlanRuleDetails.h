/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/AwsBackupBackupPlanLifecycleDetails.h>
#include <aws/securityhub/model/AwsBackupBackupPlanRuleCopyActionsDetails.h>
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
   * <p>Provides details about an array of <code>BackupRule</code> objects, each of
   * which specifies a scheduled task that is used to back up a selection of
   * resources. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsBackupBackupPlanRuleDetails">AWS
   * API Reference</a></p>
   */
  class AwsBackupBackupPlanRuleDetails
  {
  public:
    AWS_SECURITYHUB_API AwsBackupBackupPlanRuleDetails() = default;
    AWS_SECURITYHUB_API AwsBackupBackupPlanRuleDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsBackupBackupPlanRuleDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the Amazon Web Services account used to
     * create them and the Amazon Web Services Region where they are created. They
     * consist of letters, numbers, and hyphens. </p>
     */
    inline const Aws::String& GetTargetBackupVault() const { return m_targetBackupVault; }
    inline bool TargetBackupVaultHasBeenSet() const { return m_targetBackupVaultHasBeenSet; }
    template<typename TargetBackupVaultT = Aws::String>
    void SetTargetBackupVault(TargetBackupVaultT&& value) { m_targetBackupVaultHasBeenSet = true; m_targetBackupVault = std::forward<TargetBackupVaultT>(value); }
    template<typename TargetBackupVaultT = Aws::String>
    AwsBackupBackupPlanRuleDetails& WithTargetBackupVault(TargetBackupVaultT&& value) { SetTargetBackupVault(std::forward<TargetBackupVaultT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value in minutes after a backup is scheduled before a job will be canceled
     * if it doesn't start successfully. </p>
     */
    inline long long GetStartWindowMinutes() const { return m_startWindowMinutes; }
    inline bool StartWindowMinutesHasBeenSet() const { return m_startWindowMinutesHasBeenSet; }
    inline void SetStartWindowMinutes(long long value) { m_startWindowMinutesHasBeenSet = true; m_startWindowMinutes = value; }
    inline AwsBackupBackupPlanRuleDetails& WithStartWindowMinutes(long long value) { SetStartWindowMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A cron expression in UTC specifying when Backup initiates a backup job. </p>
     */
    inline const Aws::String& GetScheduleExpression() const { return m_scheduleExpression; }
    inline bool ScheduleExpressionHasBeenSet() const { return m_scheduleExpressionHasBeenSet; }
    template<typename ScheduleExpressionT = Aws::String>
    void SetScheduleExpression(ScheduleExpressionT&& value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression = std::forward<ScheduleExpressionT>(value); }
    template<typename ScheduleExpressionT = Aws::String>
    AwsBackupBackupPlanRuleDetails& WithScheduleExpression(ScheduleExpressionT&& value) { SetScheduleExpression(std::forward<ScheduleExpressionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A display name for a backup rule. Must contain 1 to 50 alphanumeric or '-_.'
     * characters. </p>
     */
    inline const Aws::String& GetRuleName() const { return m_ruleName; }
    inline bool RuleNameHasBeenSet() const { return m_ruleNameHasBeenSet; }
    template<typename RuleNameT = Aws::String>
    void SetRuleName(RuleNameT&& value) { m_ruleNameHasBeenSet = true; m_ruleName = std::forward<RuleNameT>(value); }
    template<typename RuleNameT = Aws::String>
    AwsBackupBackupPlanRuleDetails& WithRuleName(RuleNameT&& value) { SetRuleName(std::forward<RuleNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Uniquely identifies a rule that is used to schedule the backup of a selection
     * of resources. </p>
     */
    inline const Aws::String& GetRuleId() const { return m_ruleId; }
    inline bool RuleIdHasBeenSet() const { return m_ruleIdHasBeenSet; }
    template<typename RuleIdT = Aws::String>
    void SetRuleId(RuleIdT&& value) { m_ruleIdHasBeenSet = true; m_ruleId = std::forward<RuleIdT>(value); }
    template<typename RuleIdT = Aws::String>
    AwsBackupBackupPlanRuleDetails& WithRuleId(RuleIdT&& value) { SetRuleId(std::forward<RuleIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether Backup creates continuous backups capable of point-in-time
     * restore (PITR). </p>
     */
    inline bool GetEnableContinuousBackup() const { return m_enableContinuousBackup; }
    inline bool EnableContinuousBackupHasBeenSet() const { return m_enableContinuousBackupHasBeenSet; }
    inline void SetEnableContinuousBackup(bool value) { m_enableContinuousBackupHasBeenSet = true; m_enableContinuousBackup = value; }
    inline AwsBackupBackupPlanRuleDetails& WithEnableContinuousBackup(bool value) { SetEnableContinuousBackup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value in minutes after a backup job is successfully started before it must
     * be completed, or it is canceled by Backup. </p>
     */
    inline long long GetCompletionWindowMinutes() const { return m_completionWindowMinutes; }
    inline bool CompletionWindowMinutesHasBeenSet() const { return m_completionWindowMinutesHasBeenSet; }
    inline void SetCompletionWindowMinutes(long long value) { m_completionWindowMinutesHasBeenSet = true; m_completionWindowMinutes = value; }
    inline AwsBackupBackupPlanRuleDetails& WithCompletionWindowMinutes(long long value) { SetCompletionWindowMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <code>CopyAction</code> objects, each of which contains details
     * of the copy operation. </p>
     */
    inline const Aws::Vector<AwsBackupBackupPlanRuleCopyActionsDetails>& GetCopyActions() const { return m_copyActions; }
    inline bool CopyActionsHasBeenSet() const { return m_copyActionsHasBeenSet; }
    template<typename CopyActionsT = Aws::Vector<AwsBackupBackupPlanRuleCopyActionsDetails>>
    void SetCopyActions(CopyActionsT&& value) { m_copyActionsHasBeenSet = true; m_copyActions = std::forward<CopyActionsT>(value); }
    template<typename CopyActionsT = Aws::Vector<AwsBackupBackupPlanRuleCopyActionsDetails>>
    AwsBackupBackupPlanRuleDetails& WithCopyActions(CopyActionsT&& value) { SetCopyActions(std::forward<CopyActionsT>(value)); return *this;}
    template<typename CopyActionsT = AwsBackupBackupPlanRuleCopyActionsDetails>
    AwsBackupBackupPlanRuleDetails& AddCopyActions(CopyActionsT&& value) { m_copyActionsHasBeenSet = true; m_copyActions.emplace_back(std::forward<CopyActionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Defines when a protected resource is transitioned to cold storage and when it
     * expires. Backup transitions and expires backups automatically according to the
     * lifecycle that you define. If you don't specify a lifecycle, Backup applies the
     * lifecycle policy of the source backup to the destination backup.</p> <p>Backups
     * transitioned to cold storage must be stored in cold storage for a minimum of 90
     * days.</p>
     */
    inline const AwsBackupBackupPlanLifecycleDetails& GetLifecycle() const { return m_lifecycle; }
    inline bool LifecycleHasBeenSet() const { return m_lifecycleHasBeenSet; }
    template<typename LifecycleT = AwsBackupBackupPlanLifecycleDetails>
    void SetLifecycle(LifecycleT&& value) { m_lifecycleHasBeenSet = true; m_lifecycle = std::forward<LifecycleT>(value); }
    template<typename LifecycleT = AwsBackupBackupPlanLifecycleDetails>
    AwsBackupBackupPlanRuleDetails& WithLifecycle(LifecycleT&& value) { SetLifecycle(std::forward<LifecycleT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_targetBackupVault;
    bool m_targetBackupVaultHasBeenSet = false;

    long long m_startWindowMinutes{0};
    bool m_startWindowMinutesHasBeenSet = false;

    Aws::String m_scheduleExpression;
    bool m_scheduleExpressionHasBeenSet = false;

    Aws::String m_ruleName;
    bool m_ruleNameHasBeenSet = false;

    Aws::String m_ruleId;
    bool m_ruleIdHasBeenSet = false;

    bool m_enableContinuousBackup{false};
    bool m_enableContinuousBackupHasBeenSet = false;

    long long m_completionWindowMinutes{0};
    bool m_completionWindowMinutesHasBeenSet = false;

    Aws::Vector<AwsBackupBackupPlanRuleCopyActionsDetails> m_copyActions;
    bool m_copyActionsHasBeenSet = false;

    AwsBackupBackupPlanLifecycleDetails m_lifecycle;
    bool m_lifecycleHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
