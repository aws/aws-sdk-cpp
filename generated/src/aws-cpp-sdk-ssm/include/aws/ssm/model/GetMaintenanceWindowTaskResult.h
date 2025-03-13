/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/MaintenanceWindowTaskType.h>
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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SSM
{
namespace Model
{
  class GetMaintenanceWindowTaskResult
  {
  public:
    AWS_SSM_API GetMaintenanceWindowTaskResult() = default;
    AWS_SSM_API GetMaintenanceWindowTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API GetMaintenanceWindowTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The retrieved maintenance window ID.</p>
     */
    inline const Aws::String& GetWindowId() const { return m_windowId; }
    template<typename WindowIdT = Aws::String>
    void SetWindowId(WindowIdT&& value) { m_windowIdHasBeenSet = true; m_windowId = std::forward<WindowIdT>(value); }
    template<typename WindowIdT = Aws::String>
    GetMaintenanceWindowTaskResult& WithWindowId(WindowIdT&& value) { SetWindowId(std::forward<WindowIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The retrieved maintenance window task ID.</p>
     */
    inline const Aws::String& GetWindowTaskId() const { return m_windowTaskId; }
    template<typename WindowTaskIdT = Aws::String>
    void SetWindowTaskId(WindowTaskIdT&& value) { m_windowTaskIdHasBeenSet = true; m_windowTaskId = std::forward<WindowTaskIdT>(value); }
    template<typename WindowTaskIdT = Aws::String>
    GetMaintenanceWindowTaskResult& WithWindowTaskId(WindowTaskIdT&& value) { SetWindowTaskId(std::forward<WindowTaskIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The targets where the task should run.</p>
     */
    inline const Aws::Vector<Target>& GetTargets() const { return m_targets; }
    template<typename TargetsT = Aws::Vector<Target>>
    void SetTargets(TargetsT&& value) { m_targetsHasBeenSet = true; m_targets = std::forward<TargetsT>(value); }
    template<typename TargetsT = Aws::Vector<Target>>
    GetMaintenanceWindowTaskResult& WithTargets(TargetsT&& value) { SetTargets(std::forward<TargetsT>(value)); return *this;}
    template<typename TargetsT = Target>
    GetMaintenanceWindowTaskResult& AddTargets(TargetsT&& value) { m_targetsHasBeenSet = true; m_targets.emplace_back(std::forward<TargetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The resource that the task used during execution. For
     * <code>RUN_COMMAND</code> and <code>AUTOMATION</code> task types, the value of
     * <code>TaskArn</code> is the SSM document name/ARN. For <code>LAMBDA</code>
     * tasks, the value is the function name/ARN. For <code>STEP_FUNCTIONS</code>
     * tasks, the value is the state machine ARN.</p>
     */
    inline const Aws::String& GetTaskArn() const { return m_taskArn; }
    template<typename TaskArnT = Aws::String>
    void SetTaskArn(TaskArnT&& value) { m_taskArnHasBeenSet = true; m_taskArn = std::forward<TaskArnT>(value); }
    template<typename TaskArnT = Aws::String>
    GetMaintenanceWindowTaskResult& WithTaskArn(TaskArnT&& value) { SetTaskArn(std::forward<TaskArnT>(value)); return *this;}
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
    inline const Aws::String& GetServiceRoleArn() const { return m_serviceRoleArn; }
    template<typename ServiceRoleArnT = Aws::String>
    void SetServiceRoleArn(ServiceRoleArnT&& value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn = std::forward<ServiceRoleArnT>(value); }
    template<typename ServiceRoleArnT = Aws::String>
    GetMaintenanceWindowTaskResult& WithServiceRoleArn(ServiceRoleArnT&& value) { SetServiceRoleArn(std::forward<ServiceRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of task to run.</p>
     */
    inline MaintenanceWindowTaskType GetTaskType() const { return m_taskType; }
    inline void SetTaskType(MaintenanceWindowTaskType value) { m_taskTypeHasBeenSet = true; m_taskType = value; }
    inline GetMaintenanceWindowTaskResult& WithTaskType(MaintenanceWindowTaskType value) { SetTaskType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters to pass to the task when it runs.</p>  <p>
     * <code>TaskParameters</code> has been deprecated. To specify parameters to pass
     * to a task when it runs, instead use the <code>Parameters</code> option in the
     * <code>TaskInvocationParameters</code> structure. For information about how
     * Systems Manager handles these options for the supported maintenance window task
     * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> 
     */
    inline const Aws::Map<Aws::String, MaintenanceWindowTaskParameterValueExpression>& GetTaskParameters() const { return m_taskParameters; }
    template<typename TaskParametersT = Aws::Map<Aws::String, MaintenanceWindowTaskParameterValueExpression>>
    void SetTaskParameters(TaskParametersT&& value) { m_taskParametersHasBeenSet = true; m_taskParameters = std::forward<TaskParametersT>(value); }
    template<typename TaskParametersT = Aws::Map<Aws::String, MaintenanceWindowTaskParameterValueExpression>>
    GetMaintenanceWindowTaskResult& WithTaskParameters(TaskParametersT&& value) { SetTaskParameters(std::forward<TaskParametersT>(value)); return *this;}
    template<typename TaskParametersKeyT = Aws::String, typename TaskParametersValueT = MaintenanceWindowTaskParameterValueExpression>
    GetMaintenanceWindowTaskResult& AddTaskParameters(TaskParametersKeyT&& key, TaskParametersValueT&& value) {
      m_taskParametersHasBeenSet = true; m_taskParameters.emplace(std::forward<TaskParametersKeyT>(key), std::forward<TaskParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The parameters to pass to the task when it runs.</p>
     */
    inline const MaintenanceWindowTaskInvocationParameters& GetTaskInvocationParameters() const { return m_taskInvocationParameters; }
    template<typename TaskInvocationParametersT = MaintenanceWindowTaskInvocationParameters>
    void SetTaskInvocationParameters(TaskInvocationParametersT&& value) { m_taskInvocationParametersHasBeenSet = true; m_taskInvocationParameters = std::forward<TaskInvocationParametersT>(value); }
    template<typename TaskInvocationParametersT = MaintenanceWindowTaskInvocationParameters>
    GetMaintenanceWindowTaskResult& WithTaskInvocationParameters(TaskInvocationParametersT&& value) { SetTaskInvocationParameters(std::forward<TaskInvocationParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The priority of the task when it runs. The lower the number, the higher the
     * priority. Tasks that have the same priority are scheduled in parallel.</p>
     */
    inline int GetPriority() const { return m_priority; }
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }
    inline GetMaintenanceWindowTaskResult& WithPriority(int value) { SetPriority(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of targets allowed to run this task in parallel.</p>
     *  <p>For maintenance window tasks without a target specified, you can't
     * supply a value for this option. Instead, the system inserts a placeholder value
     * of <code>1</code>, which may be reported in the response to this command. This
     * value doesn't affect the running of your task and can be ignored.</p> 
     */
    inline const Aws::String& GetMaxConcurrency() const { return m_maxConcurrency; }
    template<typename MaxConcurrencyT = Aws::String>
    void SetMaxConcurrency(MaxConcurrencyT&& value) { m_maxConcurrencyHasBeenSet = true; m_maxConcurrency = std::forward<MaxConcurrencyT>(value); }
    template<typename MaxConcurrencyT = Aws::String>
    GetMaintenanceWindowTaskResult& WithMaxConcurrency(MaxConcurrencyT&& value) { SetMaxConcurrency(std::forward<MaxConcurrencyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of errors allowed before the task stops being
     * scheduled.</p>  <p>For maintenance window tasks without a target
     * specified, you can't supply a value for this option. Instead, the system inserts
     * a placeholder value of <code>1</code>, which may be reported in the response to
     * this command. This value doesn't affect the running of your task and can be
     * ignored.</p> 
     */
    inline const Aws::String& GetMaxErrors() const { return m_maxErrors; }
    template<typename MaxErrorsT = Aws::String>
    void SetMaxErrors(MaxErrorsT&& value) { m_maxErrorsHasBeenSet = true; m_maxErrors = std::forward<MaxErrorsT>(value); }
    template<typename MaxErrorsT = Aws::String>
    GetMaintenanceWindowTaskResult& WithMaxErrors(MaxErrorsT&& value) { SetMaxErrors(std::forward<MaxErrorsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location in Amazon Simple Storage Service (Amazon S3) where the task
     * results are logged.</p>  <p> <code>LoggingInfo</code> has been deprecated.
     * To specify an Amazon Simple Storage Service (Amazon S3) bucket to contain logs,
     * instead use the <code>OutputS3BucketName</code> and
     * <code>OutputS3KeyPrefix</code> options in the
     * <code>TaskInvocationParameters</code> structure. For information about how
     * Amazon Web Services Systems Manager handles these options for the supported
     * maintenance window task types, see
     * <a>MaintenanceWindowTaskInvocationParameters</a>.</p> 
     */
    inline const LoggingInfo& GetLoggingInfo() const { return m_loggingInfo; }
    template<typename LoggingInfoT = LoggingInfo>
    void SetLoggingInfo(LoggingInfoT&& value) { m_loggingInfoHasBeenSet = true; m_loggingInfo = std::forward<LoggingInfoT>(value); }
    template<typename LoggingInfoT = LoggingInfo>
    GetMaintenanceWindowTaskResult& WithLoggingInfo(LoggingInfoT&& value) { SetLoggingInfo(std::forward<LoggingInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The retrieved task name.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GetMaintenanceWindowTaskResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The retrieved task description.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GetMaintenanceWindowTaskResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action to take on tasks when the maintenance window cutoff time is
     * reached. <code>CONTINUE_TASK</code> means that tasks continue to run. For
     * Automation, Lambda, Step Functions tasks, <code>CANCEL_TASK</code> means that
     * currently running task invocations continue, but no new task invocations are
     * started. For Run Command tasks, <code>CANCEL_TASK</code> means the system
     * attempts to stop the task by sending a <code>CancelCommand</code> operation.</p>
     */
    inline MaintenanceWindowTaskCutoffBehavior GetCutoffBehavior() const { return m_cutoffBehavior; }
    inline void SetCutoffBehavior(MaintenanceWindowTaskCutoffBehavior value) { m_cutoffBehaviorHasBeenSet = true; m_cutoffBehavior = value; }
    inline GetMaintenanceWindowTaskResult& WithCutoffBehavior(MaintenanceWindowTaskCutoffBehavior value) { SetCutoffBehavior(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details for the CloudWatch alarm you applied to your maintenance window
     * task.</p>
     */
    inline const AlarmConfiguration& GetAlarmConfiguration() const { return m_alarmConfiguration; }
    template<typename AlarmConfigurationT = AlarmConfiguration>
    void SetAlarmConfiguration(AlarmConfigurationT&& value) { m_alarmConfigurationHasBeenSet = true; m_alarmConfiguration = std::forward<AlarmConfigurationT>(value); }
    template<typename AlarmConfigurationT = AlarmConfiguration>
    GetMaintenanceWindowTaskResult& WithAlarmConfiguration(AlarmConfigurationT&& value) { SetAlarmConfiguration(std::forward<AlarmConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetMaintenanceWindowTaskResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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

    MaintenanceWindowTaskType m_taskType{MaintenanceWindowTaskType::NOT_SET};
    bool m_taskTypeHasBeenSet = false;

    Aws::Map<Aws::String, MaintenanceWindowTaskParameterValueExpression> m_taskParameters;
    bool m_taskParametersHasBeenSet = false;

    MaintenanceWindowTaskInvocationParameters m_taskInvocationParameters;
    bool m_taskInvocationParametersHasBeenSet = false;

    int m_priority{0};
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

    MaintenanceWindowTaskCutoffBehavior m_cutoffBehavior{MaintenanceWindowTaskCutoffBehavior::NOT_SET};
    bool m_cutoffBehaviorHasBeenSet = false;

    AlarmConfiguration m_alarmConfiguration;
    bool m_alarmConfigurationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
