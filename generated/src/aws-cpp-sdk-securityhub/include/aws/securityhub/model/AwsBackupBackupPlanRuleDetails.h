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
    AWS_SECURITYHUB_API AwsBackupBackupPlanRuleDetails();
    AWS_SECURITYHUB_API AwsBackupBackupPlanRuleDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsBackupBackupPlanRuleDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the Amazon Web Services account used to
     * create them and the Amazon Web Services Region where they are created. They
     * consist of letters, numbers, and hyphens. </p>
     */
    inline const Aws::String& GetTargetBackupVault() const{ return m_targetBackupVault; }

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the Amazon Web Services account used to
     * create them and the Amazon Web Services Region where they are created. They
     * consist of letters, numbers, and hyphens. </p>
     */
    inline bool TargetBackupVaultHasBeenSet() const { return m_targetBackupVaultHasBeenSet; }

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the Amazon Web Services account used to
     * create them and the Amazon Web Services Region where they are created. They
     * consist of letters, numbers, and hyphens. </p>
     */
    inline void SetTargetBackupVault(const Aws::String& value) { m_targetBackupVaultHasBeenSet = true; m_targetBackupVault = value; }

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the Amazon Web Services account used to
     * create them and the Amazon Web Services Region where they are created. They
     * consist of letters, numbers, and hyphens. </p>
     */
    inline void SetTargetBackupVault(Aws::String&& value) { m_targetBackupVaultHasBeenSet = true; m_targetBackupVault = std::move(value); }

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the Amazon Web Services account used to
     * create them and the Amazon Web Services Region where they are created. They
     * consist of letters, numbers, and hyphens. </p>
     */
    inline void SetTargetBackupVault(const char* value) { m_targetBackupVaultHasBeenSet = true; m_targetBackupVault.assign(value); }

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the Amazon Web Services account used to
     * create them and the Amazon Web Services Region where they are created. They
     * consist of letters, numbers, and hyphens. </p>
     */
    inline AwsBackupBackupPlanRuleDetails& WithTargetBackupVault(const Aws::String& value) { SetTargetBackupVault(value); return *this;}

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the Amazon Web Services account used to
     * create them and the Amazon Web Services Region where they are created. They
     * consist of letters, numbers, and hyphens. </p>
     */
    inline AwsBackupBackupPlanRuleDetails& WithTargetBackupVault(Aws::String&& value) { SetTargetBackupVault(std::move(value)); return *this;}

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the Amazon Web Services account used to
     * create them and the Amazon Web Services Region where they are created. They
     * consist of letters, numbers, and hyphens. </p>
     */
    inline AwsBackupBackupPlanRuleDetails& WithTargetBackupVault(const char* value) { SetTargetBackupVault(value); return *this;}


    /**
     * <p>A value in minutes after a backup is scheduled before a job will be canceled
     * if it doesn't start successfully. </p>
     */
    inline long long GetStartWindowMinutes() const{ return m_startWindowMinutes; }

    /**
     * <p>A value in minutes after a backup is scheduled before a job will be canceled
     * if it doesn't start successfully. </p>
     */
    inline bool StartWindowMinutesHasBeenSet() const { return m_startWindowMinutesHasBeenSet; }

    /**
     * <p>A value in minutes after a backup is scheduled before a job will be canceled
     * if it doesn't start successfully. </p>
     */
    inline void SetStartWindowMinutes(long long value) { m_startWindowMinutesHasBeenSet = true; m_startWindowMinutes = value; }

    /**
     * <p>A value in minutes after a backup is scheduled before a job will be canceled
     * if it doesn't start successfully. </p>
     */
    inline AwsBackupBackupPlanRuleDetails& WithStartWindowMinutes(long long value) { SetStartWindowMinutes(value); return *this;}


    /**
     * <p>A cron expression in UTC specifying when Backup initiates a backup job. </p>
     */
    inline const Aws::String& GetScheduleExpression() const{ return m_scheduleExpression; }

    /**
     * <p>A cron expression in UTC specifying when Backup initiates a backup job. </p>
     */
    inline bool ScheduleExpressionHasBeenSet() const { return m_scheduleExpressionHasBeenSet; }

    /**
     * <p>A cron expression in UTC specifying when Backup initiates a backup job. </p>
     */
    inline void SetScheduleExpression(const Aws::String& value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression = value; }

    /**
     * <p>A cron expression in UTC specifying when Backup initiates a backup job. </p>
     */
    inline void SetScheduleExpression(Aws::String&& value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression = std::move(value); }

    /**
     * <p>A cron expression in UTC specifying when Backup initiates a backup job. </p>
     */
    inline void SetScheduleExpression(const char* value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression.assign(value); }

    /**
     * <p>A cron expression in UTC specifying when Backup initiates a backup job. </p>
     */
    inline AwsBackupBackupPlanRuleDetails& WithScheduleExpression(const Aws::String& value) { SetScheduleExpression(value); return *this;}

    /**
     * <p>A cron expression in UTC specifying when Backup initiates a backup job. </p>
     */
    inline AwsBackupBackupPlanRuleDetails& WithScheduleExpression(Aws::String&& value) { SetScheduleExpression(std::move(value)); return *this;}

    /**
     * <p>A cron expression in UTC specifying when Backup initiates a backup job. </p>
     */
    inline AwsBackupBackupPlanRuleDetails& WithScheduleExpression(const char* value) { SetScheduleExpression(value); return *this;}


    /**
     * <p>A display name for a backup rule. Must contain 1 to 50 alphanumeric or '-_.'
     * characters. </p>
     */
    inline const Aws::String& GetRuleName() const{ return m_ruleName; }

    /**
     * <p>A display name for a backup rule. Must contain 1 to 50 alphanumeric or '-_.'
     * characters. </p>
     */
    inline bool RuleNameHasBeenSet() const { return m_ruleNameHasBeenSet; }

    /**
     * <p>A display name for a backup rule. Must contain 1 to 50 alphanumeric or '-_.'
     * characters. </p>
     */
    inline void SetRuleName(const Aws::String& value) { m_ruleNameHasBeenSet = true; m_ruleName = value; }

    /**
     * <p>A display name for a backup rule. Must contain 1 to 50 alphanumeric or '-_.'
     * characters. </p>
     */
    inline void SetRuleName(Aws::String&& value) { m_ruleNameHasBeenSet = true; m_ruleName = std::move(value); }

    /**
     * <p>A display name for a backup rule. Must contain 1 to 50 alphanumeric or '-_.'
     * characters. </p>
     */
    inline void SetRuleName(const char* value) { m_ruleNameHasBeenSet = true; m_ruleName.assign(value); }

    /**
     * <p>A display name for a backup rule. Must contain 1 to 50 alphanumeric or '-_.'
     * characters. </p>
     */
    inline AwsBackupBackupPlanRuleDetails& WithRuleName(const Aws::String& value) { SetRuleName(value); return *this;}

    /**
     * <p>A display name for a backup rule. Must contain 1 to 50 alphanumeric or '-_.'
     * characters. </p>
     */
    inline AwsBackupBackupPlanRuleDetails& WithRuleName(Aws::String&& value) { SetRuleName(std::move(value)); return *this;}

    /**
     * <p>A display name for a backup rule. Must contain 1 to 50 alphanumeric or '-_.'
     * characters. </p>
     */
    inline AwsBackupBackupPlanRuleDetails& WithRuleName(const char* value) { SetRuleName(value); return *this;}


    /**
     * <p>Uniquely identifies a rule that is used to schedule the backup of a selection
     * of resources. </p>
     */
    inline const Aws::String& GetRuleId() const{ return m_ruleId; }

    /**
     * <p>Uniquely identifies a rule that is used to schedule the backup of a selection
     * of resources. </p>
     */
    inline bool RuleIdHasBeenSet() const { return m_ruleIdHasBeenSet; }

    /**
     * <p>Uniquely identifies a rule that is used to schedule the backup of a selection
     * of resources. </p>
     */
    inline void SetRuleId(const Aws::String& value) { m_ruleIdHasBeenSet = true; m_ruleId = value; }

    /**
     * <p>Uniquely identifies a rule that is used to schedule the backup of a selection
     * of resources. </p>
     */
    inline void SetRuleId(Aws::String&& value) { m_ruleIdHasBeenSet = true; m_ruleId = std::move(value); }

    /**
     * <p>Uniquely identifies a rule that is used to schedule the backup of a selection
     * of resources. </p>
     */
    inline void SetRuleId(const char* value) { m_ruleIdHasBeenSet = true; m_ruleId.assign(value); }

    /**
     * <p>Uniquely identifies a rule that is used to schedule the backup of a selection
     * of resources. </p>
     */
    inline AwsBackupBackupPlanRuleDetails& WithRuleId(const Aws::String& value) { SetRuleId(value); return *this;}

    /**
     * <p>Uniquely identifies a rule that is used to schedule the backup of a selection
     * of resources. </p>
     */
    inline AwsBackupBackupPlanRuleDetails& WithRuleId(Aws::String&& value) { SetRuleId(std::move(value)); return *this;}

    /**
     * <p>Uniquely identifies a rule that is used to schedule the backup of a selection
     * of resources. </p>
     */
    inline AwsBackupBackupPlanRuleDetails& WithRuleId(const char* value) { SetRuleId(value); return *this;}


    /**
     * <p>Specifies whether Backup creates continuous backups capable of point-in-time
     * restore (PITR). </p>
     */
    inline bool GetEnableContinuousBackup() const{ return m_enableContinuousBackup; }

    /**
     * <p>Specifies whether Backup creates continuous backups capable of point-in-time
     * restore (PITR). </p>
     */
    inline bool EnableContinuousBackupHasBeenSet() const { return m_enableContinuousBackupHasBeenSet; }

    /**
     * <p>Specifies whether Backup creates continuous backups capable of point-in-time
     * restore (PITR). </p>
     */
    inline void SetEnableContinuousBackup(bool value) { m_enableContinuousBackupHasBeenSet = true; m_enableContinuousBackup = value; }

    /**
     * <p>Specifies whether Backup creates continuous backups capable of point-in-time
     * restore (PITR). </p>
     */
    inline AwsBackupBackupPlanRuleDetails& WithEnableContinuousBackup(bool value) { SetEnableContinuousBackup(value); return *this;}


    /**
     * <p>A value in minutes after a backup job is successfully started before it must
     * be completed, or it is canceled by Backup. </p>
     */
    inline long long GetCompletionWindowMinutes() const{ return m_completionWindowMinutes; }

    /**
     * <p>A value in minutes after a backup job is successfully started before it must
     * be completed, or it is canceled by Backup. </p>
     */
    inline bool CompletionWindowMinutesHasBeenSet() const { return m_completionWindowMinutesHasBeenSet; }

    /**
     * <p>A value in minutes after a backup job is successfully started before it must
     * be completed, or it is canceled by Backup. </p>
     */
    inline void SetCompletionWindowMinutes(long long value) { m_completionWindowMinutesHasBeenSet = true; m_completionWindowMinutes = value; }

    /**
     * <p>A value in minutes after a backup job is successfully started before it must
     * be completed, or it is canceled by Backup. </p>
     */
    inline AwsBackupBackupPlanRuleDetails& WithCompletionWindowMinutes(long long value) { SetCompletionWindowMinutes(value); return *this;}


    /**
     * <p>An array of <code>CopyAction</code> objects, each of which contains details
     * of the copy operation. </p>
     */
    inline const Aws::Vector<AwsBackupBackupPlanRuleCopyActionsDetails>& GetCopyActions() const{ return m_copyActions; }

    /**
     * <p>An array of <code>CopyAction</code> objects, each of which contains details
     * of the copy operation. </p>
     */
    inline bool CopyActionsHasBeenSet() const { return m_copyActionsHasBeenSet; }

    /**
     * <p>An array of <code>CopyAction</code> objects, each of which contains details
     * of the copy operation. </p>
     */
    inline void SetCopyActions(const Aws::Vector<AwsBackupBackupPlanRuleCopyActionsDetails>& value) { m_copyActionsHasBeenSet = true; m_copyActions = value; }

    /**
     * <p>An array of <code>CopyAction</code> objects, each of which contains details
     * of the copy operation. </p>
     */
    inline void SetCopyActions(Aws::Vector<AwsBackupBackupPlanRuleCopyActionsDetails>&& value) { m_copyActionsHasBeenSet = true; m_copyActions = std::move(value); }

    /**
     * <p>An array of <code>CopyAction</code> objects, each of which contains details
     * of the copy operation. </p>
     */
    inline AwsBackupBackupPlanRuleDetails& WithCopyActions(const Aws::Vector<AwsBackupBackupPlanRuleCopyActionsDetails>& value) { SetCopyActions(value); return *this;}

    /**
     * <p>An array of <code>CopyAction</code> objects, each of which contains details
     * of the copy operation. </p>
     */
    inline AwsBackupBackupPlanRuleDetails& WithCopyActions(Aws::Vector<AwsBackupBackupPlanRuleCopyActionsDetails>&& value) { SetCopyActions(std::move(value)); return *this;}

    /**
     * <p>An array of <code>CopyAction</code> objects, each of which contains details
     * of the copy operation. </p>
     */
    inline AwsBackupBackupPlanRuleDetails& AddCopyActions(const AwsBackupBackupPlanRuleCopyActionsDetails& value) { m_copyActionsHasBeenSet = true; m_copyActions.push_back(value); return *this; }

    /**
     * <p>An array of <code>CopyAction</code> objects, each of which contains details
     * of the copy operation. </p>
     */
    inline AwsBackupBackupPlanRuleDetails& AddCopyActions(AwsBackupBackupPlanRuleCopyActionsDetails&& value) { m_copyActionsHasBeenSet = true; m_copyActions.push_back(std::move(value)); return *this; }


    /**
     * <p>Defines when a protected resource is transitioned to cold storage and when it
     * expires. Backup transitions and expires backups automatically according to the
     * lifecycle that you define. If you do not specify a lifecycle, Backup applies the
     * lifecycle policy of the source backup to the destination backup.</p> <p>Backups
     * transitioned to cold storage must be stored in cold storage for a minimum of 90
     * days.</p>
     */
    inline const AwsBackupBackupPlanLifecycleDetails& GetLifecycle() const{ return m_lifecycle; }

    /**
     * <p>Defines when a protected resource is transitioned to cold storage and when it
     * expires. Backup transitions and expires backups automatically according to the
     * lifecycle that you define. If you do not specify a lifecycle, Backup applies the
     * lifecycle policy of the source backup to the destination backup.</p> <p>Backups
     * transitioned to cold storage must be stored in cold storage for a minimum of 90
     * days.</p>
     */
    inline bool LifecycleHasBeenSet() const { return m_lifecycleHasBeenSet; }

    /**
     * <p>Defines when a protected resource is transitioned to cold storage and when it
     * expires. Backup transitions and expires backups automatically according to the
     * lifecycle that you define. If you do not specify a lifecycle, Backup applies the
     * lifecycle policy of the source backup to the destination backup.</p> <p>Backups
     * transitioned to cold storage must be stored in cold storage for a minimum of 90
     * days.</p>
     */
    inline void SetLifecycle(const AwsBackupBackupPlanLifecycleDetails& value) { m_lifecycleHasBeenSet = true; m_lifecycle = value; }

    /**
     * <p>Defines when a protected resource is transitioned to cold storage and when it
     * expires. Backup transitions and expires backups automatically according to the
     * lifecycle that you define. If you do not specify a lifecycle, Backup applies the
     * lifecycle policy of the source backup to the destination backup.</p> <p>Backups
     * transitioned to cold storage must be stored in cold storage for a minimum of 90
     * days.</p>
     */
    inline void SetLifecycle(AwsBackupBackupPlanLifecycleDetails&& value) { m_lifecycleHasBeenSet = true; m_lifecycle = std::move(value); }

    /**
     * <p>Defines when a protected resource is transitioned to cold storage and when it
     * expires. Backup transitions and expires backups automatically according to the
     * lifecycle that you define. If you do not specify a lifecycle, Backup applies the
     * lifecycle policy of the source backup to the destination backup.</p> <p>Backups
     * transitioned to cold storage must be stored in cold storage for a minimum of 90
     * days.</p>
     */
    inline AwsBackupBackupPlanRuleDetails& WithLifecycle(const AwsBackupBackupPlanLifecycleDetails& value) { SetLifecycle(value); return *this;}

    /**
     * <p>Defines when a protected resource is transitioned to cold storage and when it
     * expires. Backup transitions and expires backups automatically according to the
     * lifecycle that you define. If you do not specify a lifecycle, Backup applies the
     * lifecycle policy of the source backup to the destination backup.</p> <p>Backups
     * transitioned to cold storage must be stored in cold storage for a minimum of 90
     * days.</p>
     */
    inline AwsBackupBackupPlanRuleDetails& WithLifecycle(AwsBackupBackupPlanLifecycleDetails&& value) { SetLifecycle(std::move(value)); return *this;}

  private:

    Aws::String m_targetBackupVault;
    bool m_targetBackupVaultHasBeenSet = false;

    long long m_startWindowMinutes;
    bool m_startWindowMinutesHasBeenSet = false;

    Aws::String m_scheduleExpression;
    bool m_scheduleExpressionHasBeenSet = false;

    Aws::String m_ruleName;
    bool m_ruleNameHasBeenSet = false;

    Aws::String m_ruleId;
    bool m_ruleIdHasBeenSet = false;

    bool m_enableContinuousBackup;
    bool m_enableContinuousBackupHasBeenSet = false;

    long long m_completionWindowMinutes;
    bool m_completionWindowMinutesHasBeenSet = false;

    Aws::Vector<AwsBackupBackupPlanRuleCopyActionsDetails> m_copyActions;
    bool m_copyActionsHasBeenSet = false;

    AwsBackupBackupPlanLifecycleDetails m_lifecycle;
    bool m_lifecycleHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
