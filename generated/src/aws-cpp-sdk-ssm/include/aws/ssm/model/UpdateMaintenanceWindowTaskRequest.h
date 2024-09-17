/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/ssm/model/MaintenanceWindowTaskInvocationParameters.h>
#include <aws/ssm/model/LoggingInfo.h>
#include <aws/ssm/model/MaintenanceWindowTaskCutoffBehavior.h>
#include <aws/ssm/model/AlarmConfiguration.h>
#include <aws/ssm/model/Target.h>
#include <aws/ssm/model/MaintenanceWindowTaskParameterValueExpression.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class UpdateMaintenanceWindowTaskRequest : public SSMRequest
  {
  public:
    AWS_SSM_API UpdateMaintenanceWindowTaskRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateMaintenanceWindowTask"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The maintenance window ID that contains the task to modify.</p>
     */
    inline const Aws::String& GetWindowId() const{ return m_windowId; }
    inline bool WindowIdHasBeenSet() const { return m_windowIdHasBeenSet; }
    inline void SetWindowId(const Aws::String& value) { m_windowIdHasBeenSet = true; m_windowId = value; }
    inline void SetWindowId(Aws::String&& value) { m_windowIdHasBeenSet = true; m_windowId = std::move(value); }
    inline void SetWindowId(const char* value) { m_windowIdHasBeenSet = true; m_windowId.assign(value); }
    inline UpdateMaintenanceWindowTaskRequest& WithWindowId(const Aws::String& value) { SetWindowId(value); return *this;}
    inline UpdateMaintenanceWindowTaskRequest& WithWindowId(Aws::String&& value) { SetWindowId(std::move(value)); return *this;}
    inline UpdateMaintenanceWindowTaskRequest& WithWindowId(const char* value) { SetWindowId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The task ID to modify.</p>
     */
    inline const Aws::String& GetWindowTaskId() const{ return m_windowTaskId; }
    inline bool WindowTaskIdHasBeenSet() const { return m_windowTaskIdHasBeenSet; }
    inline void SetWindowTaskId(const Aws::String& value) { m_windowTaskIdHasBeenSet = true; m_windowTaskId = value; }
    inline void SetWindowTaskId(Aws::String&& value) { m_windowTaskIdHasBeenSet = true; m_windowTaskId = std::move(value); }
    inline void SetWindowTaskId(const char* value) { m_windowTaskIdHasBeenSet = true; m_windowTaskId.assign(value); }
    inline UpdateMaintenanceWindowTaskRequest& WithWindowTaskId(const Aws::String& value) { SetWindowTaskId(value); return *this;}
    inline UpdateMaintenanceWindowTaskRequest& WithWindowTaskId(Aws::String&& value) { SetWindowTaskId(std::move(value)); return *this;}
    inline UpdateMaintenanceWindowTaskRequest& WithWindowTaskId(const char* value) { SetWindowTaskId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The targets (either managed nodes or tags) to modify. Managed nodes are
     * specified using the format
     * <code>Key=instanceids,Values=instanceID_1,instanceID_2</code>. Tags are
     * specified using the format <code> Key=tag_name,Values=tag_value</code>. </p>
     *  <p>One or more targets must be specified for maintenance window Run
     * Command-type tasks. Depending on the task, targets are optional for other
     * maintenance window task types (Automation, Lambda, and Step Functions). For more
     * information about running tasks that don't specify targets, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/maintenance-windows-targetless-tasks.html">Registering
     * maintenance window tasks without targets</a> in the <i>Amazon Web Services
     * Systems Manager User Guide</i>.</p> 
     */
    inline const Aws::Vector<Target>& GetTargets() const{ return m_targets; }
    inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }
    inline void SetTargets(const Aws::Vector<Target>& value) { m_targetsHasBeenSet = true; m_targets = value; }
    inline void SetTargets(Aws::Vector<Target>&& value) { m_targetsHasBeenSet = true; m_targets = std::move(value); }
    inline UpdateMaintenanceWindowTaskRequest& WithTargets(const Aws::Vector<Target>& value) { SetTargets(value); return *this;}
    inline UpdateMaintenanceWindowTaskRequest& WithTargets(Aws::Vector<Target>&& value) { SetTargets(std::move(value)); return *this;}
    inline UpdateMaintenanceWindowTaskRequest& AddTargets(const Target& value) { m_targetsHasBeenSet = true; m_targets.push_back(value); return *this; }
    inline UpdateMaintenanceWindowTaskRequest& AddTargets(Target&& value) { m_targetsHasBeenSet = true; m_targets.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The task ARN to modify.</p>
     */
    inline const Aws::String& GetTaskArn() const{ return m_taskArn; }
    inline bool TaskArnHasBeenSet() const { return m_taskArnHasBeenSet; }
    inline void SetTaskArn(const Aws::String& value) { m_taskArnHasBeenSet = true; m_taskArn = value; }
    inline void SetTaskArn(Aws::String&& value) { m_taskArnHasBeenSet = true; m_taskArn = std::move(value); }
    inline void SetTaskArn(const char* value) { m_taskArnHasBeenSet = true; m_taskArn.assign(value); }
    inline UpdateMaintenanceWindowTaskRequest& WithTaskArn(const Aws::String& value) { SetTaskArn(value); return *this;}
    inline UpdateMaintenanceWindowTaskRequest& WithTaskArn(Aws::String&& value) { SetTaskArn(std::move(value)); return *this;}
    inline UpdateMaintenanceWindowTaskRequest& WithTaskArn(const char* value) { SetTaskArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM service role for Amazon Web
     * Services Systems Manager to assume when running a maintenance window task. If
     * you do not specify a service role ARN, Systems Manager uses a service-linked
     * role in your account. If no appropriate service-linked role for Systems Manager
     * exists in your account, it is created when you run
     * <code>RegisterTaskWithMaintenanceWindow</code>.</p> <p>However, for an improved
     * security posture, we strongly recommend creating a custom policy and custom
     * service role for running your maintenance window tasks. The policy can be
     * crafted to provide only the permissions needed for your particular maintenance
     * window tasks. For more information, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/sysman-maintenance-permissions.html">Setting
     * up Maintenance Windows</a> in the in the <i>Amazon Web Services Systems Manager
     * User Guide</i>.</p>
     */
    inline const Aws::String& GetServiceRoleArn() const{ return m_serviceRoleArn; }
    inline bool ServiceRoleArnHasBeenSet() const { return m_serviceRoleArnHasBeenSet; }
    inline void SetServiceRoleArn(const Aws::String& value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn = value; }
    inline void SetServiceRoleArn(Aws::String&& value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn = std::move(value); }
    inline void SetServiceRoleArn(const char* value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn.assign(value); }
    inline UpdateMaintenanceWindowTaskRequest& WithServiceRoleArn(const Aws::String& value) { SetServiceRoleArn(value); return *this;}
    inline UpdateMaintenanceWindowTaskRequest& WithServiceRoleArn(Aws::String&& value) { SetServiceRoleArn(std::move(value)); return *this;}
    inline UpdateMaintenanceWindowTaskRequest& WithServiceRoleArn(const char* value) { SetServiceRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters to modify.</p>  <p> <code>TaskParameters</code> has been
     * deprecated. To specify parameters to pass to a task when it runs, instead use
     * the <code>Parameters</code> option in the <code>TaskInvocationParameters</code>
     * structure. For information about how Systems Manager handles these options for
     * the supported maintenance window task types, see
     * <a>MaintenanceWindowTaskInvocationParameters</a>.</p>  <p>The map has the
     * following format:</p> <p>Key: string, between 1 and 255 characters</p> <p>Value:
     * an array of strings, each string is between 1 and 255 characters</p>
     */
    inline const Aws::Map<Aws::String, MaintenanceWindowTaskParameterValueExpression>& GetTaskParameters() const{ return m_taskParameters; }
    inline bool TaskParametersHasBeenSet() const { return m_taskParametersHasBeenSet; }
    inline void SetTaskParameters(const Aws::Map<Aws::String, MaintenanceWindowTaskParameterValueExpression>& value) { m_taskParametersHasBeenSet = true; m_taskParameters = value; }
    inline void SetTaskParameters(Aws::Map<Aws::String, MaintenanceWindowTaskParameterValueExpression>&& value) { m_taskParametersHasBeenSet = true; m_taskParameters = std::move(value); }
    inline UpdateMaintenanceWindowTaskRequest& WithTaskParameters(const Aws::Map<Aws::String, MaintenanceWindowTaskParameterValueExpression>& value) { SetTaskParameters(value); return *this;}
    inline UpdateMaintenanceWindowTaskRequest& WithTaskParameters(Aws::Map<Aws::String, MaintenanceWindowTaskParameterValueExpression>&& value) { SetTaskParameters(std::move(value)); return *this;}
    inline UpdateMaintenanceWindowTaskRequest& AddTaskParameters(const Aws::String& key, const MaintenanceWindowTaskParameterValueExpression& value) { m_taskParametersHasBeenSet = true; m_taskParameters.emplace(key, value); return *this; }
    inline UpdateMaintenanceWindowTaskRequest& AddTaskParameters(Aws::String&& key, const MaintenanceWindowTaskParameterValueExpression& value) { m_taskParametersHasBeenSet = true; m_taskParameters.emplace(std::move(key), value); return *this; }
    inline UpdateMaintenanceWindowTaskRequest& AddTaskParameters(const Aws::String& key, MaintenanceWindowTaskParameterValueExpression&& value) { m_taskParametersHasBeenSet = true; m_taskParameters.emplace(key, std::move(value)); return *this; }
    inline UpdateMaintenanceWindowTaskRequest& AddTaskParameters(Aws::String&& key, MaintenanceWindowTaskParameterValueExpression&& value) { m_taskParametersHasBeenSet = true; m_taskParameters.emplace(std::move(key), std::move(value)); return *this; }
    inline UpdateMaintenanceWindowTaskRequest& AddTaskParameters(const char* key, MaintenanceWindowTaskParameterValueExpression&& value) { m_taskParametersHasBeenSet = true; m_taskParameters.emplace(key, std::move(value)); return *this; }
    inline UpdateMaintenanceWindowTaskRequest& AddTaskParameters(const char* key, const MaintenanceWindowTaskParameterValueExpression& value) { m_taskParametersHasBeenSet = true; m_taskParameters.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The parameters that the task should use during execution. Populate only the
     * fields that match the task type. All other fields should be empty.</p>
     *  <p>When you update a maintenance window task that has options
     * specified in <code>TaskInvocationParameters</code>, you must provide again all
     * the <code>TaskInvocationParameters</code> values that you want to retain. The
     * values you don't specify again are removed. For example, suppose that when you
     * registered a Run Command task, you specified
     * <code>TaskInvocationParameters</code> values for <code>Comment</code>,
     * <code>NotificationConfig</code>, and <code>OutputS3BucketName</code>. If you
     * update the maintenance window task and specify only a different
     * <code>OutputS3BucketName</code> value, the values for <code>Comment</code> and
     * <code>NotificationConfig</code> are removed.</p> 
     */
    inline const MaintenanceWindowTaskInvocationParameters& GetTaskInvocationParameters() const{ return m_taskInvocationParameters; }
    inline bool TaskInvocationParametersHasBeenSet() const { return m_taskInvocationParametersHasBeenSet; }
    inline void SetTaskInvocationParameters(const MaintenanceWindowTaskInvocationParameters& value) { m_taskInvocationParametersHasBeenSet = true; m_taskInvocationParameters = value; }
    inline void SetTaskInvocationParameters(MaintenanceWindowTaskInvocationParameters&& value) { m_taskInvocationParametersHasBeenSet = true; m_taskInvocationParameters = std::move(value); }
    inline UpdateMaintenanceWindowTaskRequest& WithTaskInvocationParameters(const MaintenanceWindowTaskInvocationParameters& value) { SetTaskInvocationParameters(value); return *this;}
    inline UpdateMaintenanceWindowTaskRequest& WithTaskInvocationParameters(MaintenanceWindowTaskInvocationParameters&& value) { SetTaskInvocationParameters(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new task priority to specify. The lower the number, the higher the
     * priority. Tasks that have the same priority are scheduled in parallel.</p>
     */
    inline int GetPriority() const{ return m_priority; }
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }
    inline UpdateMaintenanceWindowTaskRequest& WithPriority(int value) { SetPriority(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new <code>MaxConcurrency</code> value you want to specify.
     * <code>MaxConcurrency</code> is the number of targets that are allowed to run
     * this task, in parallel.</p>  <p>Although this element is listed as
     * "Required: No", a value can be omitted only when you are registering or updating
     * a <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/maintenance-windows-targetless-tasks.html">targetless
     * task</a> You must provide a value in all other cases.</p> <p>For maintenance
     * window tasks without a target specified, you can't supply a value for this
     * option. Instead, the system inserts a placeholder value of <code>1</code>. This
     * value doesn't affect the running of your task.</p> 
     */
    inline const Aws::String& GetMaxConcurrency() const{ return m_maxConcurrency; }
    inline bool MaxConcurrencyHasBeenSet() const { return m_maxConcurrencyHasBeenSet; }
    inline void SetMaxConcurrency(const Aws::String& value) { m_maxConcurrencyHasBeenSet = true; m_maxConcurrency = value; }
    inline void SetMaxConcurrency(Aws::String&& value) { m_maxConcurrencyHasBeenSet = true; m_maxConcurrency = std::move(value); }
    inline void SetMaxConcurrency(const char* value) { m_maxConcurrencyHasBeenSet = true; m_maxConcurrency.assign(value); }
    inline UpdateMaintenanceWindowTaskRequest& WithMaxConcurrency(const Aws::String& value) { SetMaxConcurrency(value); return *this;}
    inline UpdateMaintenanceWindowTaskRequest& WithMaxConcurrency(Aws::String&& value) { SetMaxConcurrency(std::move(value)); return *this;}
    inline UpdateMaintenanceWindowTaskRequest& WithMaxConcurrency(const char* value) { SetMaxConcurrency(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new <code>MaxErrors</code> value to specify. <code>MaxErrors</code> is
     * the maximum number of errors that are allowed before the task stops being
     * scheduled.</p>  <p>Although this element is listed as "Required: No", a
     * value can be omitted only when you are registering or updating a <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/maintenance-windows-targetless-tasks.html">targetless
     * task</a> You must provide a value in all other cases.</p> <p>For maintenance
     * window tasks without a target specified, you can't supply a value for this
     * option. Instead, the system inserts a placeholder value of <code>1</code>. This
     * value doesn't affect the running of your task.</p> 
     */
    inline const Aws::String& GetMaxErrors() const{ return m_maxErrors; }
    inline bool MaxErrorsHasBeenSet() const { return m_maxErrorsHasBeenSet; }
    inline void SetMaxErrors(const Aws::String& value) { m_maxErrorsHasBeenSet = true; m_maxErrors = value; }
    inline void SetMaxErrors(Aws::String&& value) { m_maxErrorsHasBeenSet = true; m_maxErrors = std::move(value); }
    inline void SetMaxErrors(const char* value) { m_maxErrorsHasBeenSet = true; m_maxErrors.assign(value); }
    inline UpdateMaintenanceWindowTaskRequest& WithMaxErrors(const Aws::String& value) { SetMaxErrors(value); return *this;}
    inline UpdateMaintenanceWindowTaskRequest& WithMaxErrors(Aws::String&& value) { SetMaxErrors(std::move(value)); return *this;}
    inline UpdateMaintenanceWindowTaskRequest& WithMaxErrors(const char* value) { SetMaxErrors(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new logging location in Amazon S3 to specify.</p>  <p>
     * <code>LoggingInfo</code> has been deprecated. To specify an Amazon Simple
     * Storage Service (Amazon S3) bucket to contain logs, instead use the
     * <code>OutputS3BucketName</code> and <code>OutputS3KeyPrefix</code> options in
     * the <code>TaskInvocationParameters</code> structure. For information about how
     * Amazon Web Services Systems Manager handles these options for the supported
     * maintenance window task types, see
     * <a>MaintenanceWindowTaskInvocationParameters</a>.</p> 
     */
    inline const LoggingInfo& GetLoggingInfo() const{ return m_loggingInfo; }
    inline bool LoggingInfoHasBeenSet() const { return m_loggingInfoHasBeenSet; }
    inline void SetLoggingInfo(const LoggingInfo& value) { m_loggingInfoHasBeenSet = true; m_loggingInfo = value; }
    inline void SetLoggingInfo(LoggingInfo&& value) { m_loggingInfoHasBeenSet = true; m_loggingInfo = std::move(value); }
    inline UpdateMaintenanceWindowTaskRequest& WithLoggingInfo(const LoggingInfo& value) { SetLoggingInfo(value); return *this;}
    inline UpdateMaintenanceWindowTaskRequest& WithLoggingInfo(LoggingInfo&& value) { SetLoggingInfo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new task name to specify.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateMaintenanceWindowTaskRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateMaintenanceWindowTaskRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateMaintenanceWindowTaskRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new task description to specify.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateMaintenanceWindowTaskRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateMaintenanceWindowTaskRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateMaintenanceWindowTaskRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If True, then all fields that are required by the
     * <a>RegisterTaskWithMaintenanceWindow</a> operation are also required for this
     * API request. Optional fields that aren't specified are set to null.</p>
     */
    inline bool GetReplace() const{ return m_replace; }
    inline bool ReplaceHasBeenSet() const { return m_replaceHasBeenSet; }
    inline void SetReplace(bool value) { m_replaceHasBeenSet = true; m_replace = value; }
    inline UpdateMaintenanceWindowTaskRequest& WithReplace(bool value) { SetReplace(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether tasks should continue to run after the cutoff time
     * specified in the maintenance windows is reached. </p> <ul> <li> <p>
     * <code>CONTINUE_TASK</code>: When the cutoff time is reached, any tasks that are
     * running continue. The default value.</p> </li> <li> <p>
     * <code>CANCEL_TASK</code>:</p> <ul> <li> <p>For Automation, Lambda, Step
     * Functions tasks: When the cutoff time is reached, any task invocations that are
     * already running continue, but no new task invocations are started.</p> </li>
     * <li> <p>For Run Command tasks: When the cutoff time is reached, the system sends
     * a <a>CancelCommand</a> operation that attempts to cancel the command associated
     * with the task. However, there is no guarantee that the command will be
     * terminated and the underlying process stopped.</p> </li> </ul> <p>The status for
     * tasks that are not completed is <code>TIMED_OUT</code>.</p> </li> </ul>
     */
    inline const MaintenanceWindowTaskCutoffBehavior& GetCutoffBehavior() const{ return m_cutoffBehavior; }
    inline bool CutoffBehaviorHasBeenSet() const { return m_cutoffBehaviorHasBeenSet; }
    inline void SetCutoffBehavior(const MaintenanceWindowTaskCutoffBehavior& value) { m_cutoffBehaviorHasBeenSet = true; m_cutoffBehavior = value; }
    inline void SetCutoffBehavior(MaintenanceWindowTaskCutoffBehavior&& value) { m_cutoffBehaviorHasBeenSet = true; m_cutoffBehavior = std::move(value); }
    inline UpdateMaintenanceWindowTaskRequest& WithCutoffBehavior(const MaintenanceWindowTaskCutoffBehavior& value) { SetCutoffBehavior(value); return *this;}
    inline UpdateMaintenanceWindowTaskRequest& WithCutoffBehavior(MaintenanceWindowTaskCutoffBehavior&& value) { SetCutoffBehavior(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CloudWatch alarm you want to apply to your maintenance window task.</p>
     */
    inline const AlarmConfiguration& GetAlarmConfiguration() const{ return m_alarmConfiguration; }
    inline bool AlarmConfigurationHasBeenSet() const { return m_alarmConfigurationHasBeenSet; }
    inline void SetAlarmConfiguration(const AlarmConfiguration& value) { m_alarmConfigurationHasBeenSet = true; m_alarmConfiguration = value; }
    inline void SetAlarmConfiguration(AlarmConfiguration&& value) { m_alarmConfigurationHasBeenSet = true; m_alarmConfiguration = std::move(value); }
    inline UpdateMaintenanceWindowTaskRequest& WithAlarmConfiguration(const AlarmConfiguration& value) { SetAlarmConfiguration(value); return *this;}
    inline UpdateMaintenanceWindowTaskRequest& WithAlarmConfiguration(AlarmConfiguration&& value) { SetAlarmConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_windowId;
    bool m_windowIdHasBeenSet = false;

    Aws::String m_windowTaskId;
    bool m_windowTaskIdHasBeenSet = false;

    Aws::Vector<Target> m_targets;
    bool m_targetsHasBeenSet = false;

    Aws::String m_taskArn;
    bool m_taskArnHasBeenSet = false;

    Aws::String m_serviceRoleArn;
    bool m_serviceRoleArnHasBeenSet = false;

    Aws::Map<Aws::String, MaintenanceWindowTaskParameterValueExpression> m_taskParameters;
    bool m_taskParametersHasBeenSet = false;

    MaintenanceWindowTaskInvocationParameters m_taskInvocationParameters;
    bool m_taskInvocationParametersHasBeenSet = false;

    int m_priority;
    bool m_priorityHasBeenSet = false;

    Aws::String m_maxConcurrency;
    bool m_maxConcurrencyHasBeenSet = false;

    Aws::String m_maxErrors;
    bool m_maxErrorsHasBeenSet = false;

    LoggingInfo m_loggingInfo;
    bool m_loggingInfoHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    bool m_replace;
    bool m_replaceHasBeenSet = false;

    MaintenanceWindowTaskCutoffBehavior m_cutoffBehavior;
    bool m_cutoffBehaviorHasBeenSet = false;

    AlarmConfiguration m_alarmConfiguration;
    bool m_alarmConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
