/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/MaintenanceWindowTaskType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/MaintenanceWindowExecutionStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ssm/model/AlarmConfiguration.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/ssm/model/AlarmStateInformation.h>
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
  class GetMaintenanceWindowExecutionTaskResult
  {
  public:
    AWS_SSM_API GetMaintenanceWindowExecutionTaskResult() = default;
    AWS_SSM_API GetMaintenanceWindowExecutionTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API GetMaintenanceWindowExecutionTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the maintenance window execution that includes the task.</p>
     */
    inline const Aws::String& GetWindowExecutionId() const { return m_windowExecutionId; }
    template<typename WindowExecutionIdT = Aws::String>
    void SetWindowExecutionId(WindowExecutionIdT&& value) { m_windowExecutionIdHasBeenSet = true; m_windowExecutionId = std::forward<WindowExecutionIdT>(value); }
    template<typename WindowExecutionIdT = Aws::String>
    GetMaintenanceWindowExecutionTaskResult& WithWindowExecutionId(WindowExecutionIdT&& value) { SetWindowExecutionId(std::forward<WindowExecutionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the specific task execution in the maintenance window task that was
     * retrieved.</p>
     */
    inline const Aws::String& GetTaskExecutionId() const { return m_taskExecutionId; }
    template<typename TaskExecutionIdT = Aws::String>
    void SetTaskExecutionId(TaskExecutionIdT&& value) { m_taskExecutionIdHasBeenSet = true; m_taskExecutionId = std::forward<TaskExecutionIdT>(value); }
    template<typename TaskExecutionIdT = Aws::String>
    GetMaintenanceWindowExecutionTaskResult& WithTaskExecutionId(TaskExecutionIdT&& value) { SetTaskExecutionId(std::forward<TaskExecutionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the task that ran.</p>
     */
    inline const Aws::String& GetTaskArn() const { return m_taskArn; }
    template<typename TaskArnT = Aws::String>
    void SetTaskArn(TaskArnT&& value) { m_taskArnHasBeenSet = true; m_taskArn = std::forward<TaskArnT>(value); }
    template<typename TaskArnT = Aws::String>
    GetMaintenanceWindowExecutionTaskResult& WithTaskArn(TaskArnT&& value) { SetTaskArn(std::forward<TaskArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The role that was assumed when running the task.</p>
     */
    inline const Aws::String& GetServiceRole() const { return m_serviceRole; }
    template<typename ServiceRoleT = Aws::String>
    void SetServiceRole(ServiceRoleT&& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = std::forward<ServiceRoleT>(value); }
    template<typename ServiceRoleT = Aws::String>
    GetMaintenanceWindowExecutionTaskResult& WithServiceRole(ServiceRoleT&& value) { SetServiceRole(std::forward<ServiceRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of task that was run.</p>
     */
    inline MaintenanceWindowTaskType GetType() const { return m_type; }
    inline void SetType(MaintenanceWindowTaskType value) { m_typeHasBeenSet = true; m_type = value; }
    inline GetMaintenanceWindowExecutionTaskResult& WithType(MaintenanceWindowTaskType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters passed to the task when it was run.</p>  <p>
     * <code>TaskParameters</code> has been deprecated. To specify parameters to pass
     * to a task when it runs, instead use the <code>Parameters</code> option in the
     * <code>TaskInvocationParameters</code> structure. For information about how
     * Systems Manager handles these options for the supported maintenance window task
     * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p>  <p>The
     * map has the following format:</p> <ul> <li> <p> <code>Key</code>: string,
     * between 1 and 255 characters</p> </li> <li> <p> <code>Value</code>: an array of
     * strings, each between 1 and 255 characters</p> </li> </ul>
     */
    inline const Aws::Vector<Aws::Map<Aws::String, MaintenanceWindowTaskParameterValueExpression>>& GetTaskParameters() const { return m_taskParameters; }
    template<typename TaskParametersT = Aws::Vector<Aws::Map<Aws::String, MaintenanceWindowTaskParameterValueExpression>>>
    void SetTaskParameters(TaskParametersT&& value) { m_taskParametersHasBeenSet = true; m_taskParameters = std::forward<TaskParametersT>(value); }
    template<typename TaskParametersT = Aws::Vector<Aws::Map<Aws::String, MaintenanceWindowTaskParameterValueExpression>>>
    GetMaintenanceWindowExecutionTaskResult& WithTaskParameters(TaskParametersT&& value) { SetTaskParameters(std::forward<TaskParametersT>(value)); return *this;}
    template<typename TaskParametersT = Aws::Map<Aws::String, MaintenanceWindowTaskParameterValueExpression>>
    GetMaintenanceWindowExecutionTaskResult& AddTaskParameters(TaskParametersT&& value) { m_taskParametersHasBeenSet = true; m_taskParameters.emplace_back(std::forward<TaskParametersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The priority of the task.</p>
     */
    inline int GetPriority() const { return m_priority; }
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }
    inline GetMaintenanceWindowExecutionTaskResult& WithPriority(int value) { SetPriority(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The defined maximum number of task executions that could be run in
     * parallel.</p>
     */
    inline const Aws::String& GetMaxConcurrency() const { return m_maxConcurrency; }
    template<typename MaxConcurrencyT = Aws::String>
    void SetMaxConcurrency(MaxConcurrencyT&& value) { m_maxConcurrencyHasBeenSet = true; m_maxConcurrency = std::forward<MaxConcurrencyT>(value); }
    template<typename MaxConcurrencyT = Aws::String>
    GetMaintenanceWindowExecutionTaskResult& WithMaxConcurrency(MaxConcurrencyT&& value) { SetMaxConcurrency(std::forward<MaxConcurrencyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The defined maximum number of task execution errors allowed before scheduling
     * of the task execution would have been stopped.</p>
     */
    inline const Aws::String& GetMaxErrors() const { return m_maxErrors; }
    template<typename MaxErrorsT = Aws::String>
    void SetMaxErrors(MaxErrorsT&& value) { m_maxErrorsHasBeenSet = true; m_maxErrors = std::forward<MaxErrorsT>(value); }
    template<typename MaxErrorsT = Aws::String>
    GetMaintenanceWindowExecutionTaskResult& WithMaxErrors(MaxErrorsT&& value) { SetMaxErrors(std::forward<MaxErrorsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the task.</p>
     */
    inline MaintenanceWindowExecutionStatus GetStatus() const { return m_status; }
    inline void SetStatus(MaintenanceWindowExecutionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetMaintenanceWindowExecutionTaskResult& WithStatus(MaintenanceWindowExecutionStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details explaining the status. Not available for all status values.</p>
     */
    inline const Aws::String& GetStatusDetails() const { return m_statusDetails; }
    template<typename StatusDetailsT = Aws::String>
    void SetStatusDetails(StatusDetailsT&& value) { m_statusDetailsHasBeenSet = true; m_statusDetails = std::forward<StatusDetailsT>(value); }
    template<typename StatusDetailsT = Aws::String>
    GetMaintenanceWindowExecutionTaskResult& WithStatusDetails(StatusDetailsT&& value) { SetStatusDetails(std::forward<StatusDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the task execution started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    GetMaintenanceWindowExecutionTaskResult& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the task execution completed.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    GetMaintenanceWindowExecutionTaskResult& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
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
    GetMaintenanceWindowExecutionTaskResult& WithAlarmConfiguration(AlarmConfigurationT&& value) { SetAlarmConfiguration(std::forward<AlarmConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CloudWatch alarms that were invoked by the maintenance window task.</p>
     */
    inline const Aws::Vector<AlarmStateInformation>& GetTriggeredAlarms() const { return m_triggeredAlarms; }
    template<typename TriggeredAlarmsT = Aws::Vector<AlarmStateInformation>>
    void SetTriggeredAlarms(TriggeredAlarmsT&& value) { m_triggeredAlarmsHasBeenSet = true; m_triggeredAlarms = std::forward<TriggeredAlarmsT>(value); }
    template<typename TriggeredAlarmsT = Aws::Vector<AlarmStateInformation>>
    GetMaintenanceWindowExecutionTaskResult& WithTriggeredAlarms(TriggeredAlarmsT&& value) { SetTriggeredAlarms(std::forward<TriggeredAlarmsT>(value)); return *this;}
    template<typename TriggeredAlarmsT = AlarmStateInformation>
    GetMaintenanceWindowExecutionTaskResult& AddTriggeredAlarms(TriggeredAlarmsT&& value) { m_triggeredAlarmsHasBeenSet = true; m_triggeredAlarms.emplace_back(std::forward<TriggeredAlarmsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetMaintenanceWindowExecutionTaskResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_windowExecutionId;
    bool m_windowExecutionIdHasBeenSet = false;

    Aws::String m_taskExecutionId;
    bool m_taskExecutionIdHasBeenSet = false;

    Aws::String m_taskArn;
    bool m_taskArnHasBeenSet = false;

    Aws::String m_serviceRole;
    bool m_serviceRoleHasBeenSet = false;

    MaintenanceWindowTaskType m_type{MaintenanceWindowTaskType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::Vector<Aws::Map<Aws::String, MaintenanceWindowTaskParameterValueExpression>> m_taskParameters;
    bool m_taskParametersHasBeenSet = false;

    int m_priority{0};
    bool m_priorityHasBeenSet = false;

    Aws::String m_maxConcurrency;
    bool m_maxConcurrencyHasBeenSet = false;

    Aws::String m_maxErrors;
    bool m_maxErrorsHasBeenSet = false;

    MaintenanceWindowExecutionStatus m_status{MaintenanceWindowExecutionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusDetails;
    bool m_statusDetailsHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    AlarmConfiguration m_alarmConfiguration;
    bool m_alarmConfigurationHasBeenSet = false;

    Aws::Vector<AlarmStateInformation> m_triggeredAlarms;
    bool m_triggeredAlarmsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
