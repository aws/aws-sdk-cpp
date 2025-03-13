/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/MaintenanceWindowTaskType.h>
#include <aws/ssm/model/MaintenanceWindowExecutionStatus.h>
#include <aws/core/utils/DateTime.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>Describes the information about a task invocation for a particular target as
   * part of a task execution performed as part of a maintenance window
   * execution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/MaintenanceWindowExecutionTaskInvocationIdentity">AWS
   * API Reference</a></p>
   */
  class MaintenanceWindowExecutionTaskInvocationIdentity
  {
  public:
    AWS_SSM_API MaintenanceWindowExecutionTaskInvocationIdentity() = default;
    AWS_SSM_API MaintenanceWindowExecutionTaskInvocationIdentity(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API MaintenanceWindowExecutionTaskInvocationIdentity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the maintenance window execution that ran the task.</p>
     */
    inline const Aws::String& GetWindowExecutionId() const { return m_windowExecutionId; }
    inline bool WindowExecutionIdHasBeenSet() const { return m_windowExecutionIdHasBeenSet; }
    template<typename WindowExecutionIdT = Aws::String>
    void SetWindowExecutionId(WindowExecutionIdT&& value) { m_windowExecutionIdHasBeenSet = true; m_windowExecutionId = std::forward<WindowExecutionIdT>(value); }
    template<typename WindowExecutionIdT = Aws::String>
    MaintenanceWindowExecutionTaskInvocationIdentity& WithWindowExecutionId(WindowExecutionIdT&& value) { SetWindowExecutionId(std::forward<WindowExecutionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the specific task execution in the maintenance window
     * execution.</p>
     */
    inline const Aws::String& GetTaskExecutionId() const { return m_taskExecutionId; }
    inline bool TaskExecutionIdHasBeenSet() const { return m_taskExecutionIdHasBeenSet; }
    template<typename TaskExecutionIdT = Aws::String>
    void SetTaskExecutionId(TaskExecutionIdT&& value) { m_taskExecutionIdHasBeenSet = true; m_taskExecutionId = std::forward<TaskExecutionIdT>(value); }
    template<typename TaskExecutionIdT = Aws::String>
    MaintenanceWindowExecutionTaskInvocationIdentity& WithTaskExecutionId(TaskExecutionIdT&& value) { SetTaskExecutionId(std::forward<TaskExecutionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the task invocation.</p>
     */
    inline const Aws::String& GetInvocationId() const { return m_invocationId; }
    inline bool InvocationIdHasBeenSet() const { return m_invocationIdHasBeenSet; }
    template<typename InvocationIdT = Aws::String>
    void SetInvocationId(InvocationIdT&& value) { m_invocationIdHasBeenSet = true; m_invocationId = std::forward<InvocationIdT>(value); }
    template<typename InvocationIdT = Aws::String>
    MaintenanceWindowExecutionTaskInvocationIdentity& WithInvocationId(InvocationIdT&& value) { SetInvocationId(std::forward<InvocationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the action performed in the service that actually handled the task
     * invocation. If the task type is <code>RUN_COMMAND</code>, this value is the
     * command ID.</p>
     */
    inline const Aws::String& GetExecutionId() const { return m_executionId; }
    inline bool ExecutionIdHasBeenSet() const { return m_executionIdHasBeenSet; }
    template<typename ExecutionIdT = Aws::String>
    void SetExecutionId(ExecutionIdT&& value) { m_executionIdHasBeenSet = true; m_executionId = std::forward<ExecutionIdT>(value); }
    template<typename ExecutionIdT = Aws::String>
    MaintenanceWindowExecutionTaskInvocationIdentity& WithExecutionId(ExecutionIdT&& value) { SetExecutionId(std::forward<ExecutionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The task type.</p>
     */
    inline MaintenanceWindowTaskType GetTaskType() const { return m_taskType; }
    inline bool TaskTypeHasBeenSet() const { return m_taskTypeHasBeenSet; }
    inline void SetTaskType(MaintenanceWindowTaskType value) { m_taskTypeHasBeenSet = true; m_taskType = value; }
    inline MaintenanceWindowExecutionTaskInvocationIdentity& WithTaskType(MaintenanceWindowTaskType value) { SetTaskType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters that were provided for the invocation when it was run.</p>
     */
    inline const Aws::String& GetParameters() const { return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    template<typename ParametersT = Aws::String>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Aws::String>
    MaintenanceWindowExecutionTaskInvocationIdentity& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the task invocation.</p>
     */
    inline MaintenanceWindowExecutionStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(MaintenanceWindowExecutionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline MaintenanceWindowExecutionTaskInvocationIdentity& WithStatus(MaintenanceWindowExecutionStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details explaining the status of the task invocation. Not available for
     * all status values. </p>
     */
    inline const Aws::String& GetStatusDetails() const { return m_statusDetails; }
    inline bool StatusDetailsHasBeenSet() const { return m_statusDetailsHasBeenSet; }
    template<typename StatusDetailsT = Aws::String>
    void SetStatusDetails(StatusDetailsT&& value) { m_statusDetailsHasBeenSet = true; m_statusDetails = std::forward<StatusDetailsT>(value); }
    template<typename StatusDetailsT = Aws::String>
    MaintenanceWindowExecutionTaskInvocationIdentity& WithStatusDetails(StatusDetailsT&& value) { SetStatusDetails(std::forward<StatusDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the invocation started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    MaintenanceWindowExecutionTaskInvocationIdentity& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the invocation finished.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    MaintenanceWindowExecutionTaskInvocationIdentity& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>User-provided value that was specified when the target was registered with
     * the maintenance window. This was also included in any Amazon CloudWatch Events
     * events raised during the task invocation.</p>
     */
    inline const Aws::String& GetOwnerInformation() const { return m_ownerInformation; }
    inline bool OwnerInformationHasBeenSet() const { return m_ownerInformationHasBeenSet; }
    template<typename OwnerInformationT = Aws::String>
    void SetOwnerInformation(OwnerInformationT&& value) { m_ownerInformationHasBeenSet = true; m_ownerInformation = std::forward<OwnerInformationT>(value); }
    template<typename OwnerInformationT = Aws::String>
    MaintenanceWindowExecutionTaskInvocationIdentity& WithOwnerInformation(OwnerInformationT&& value) { SetOwnerInformation(std::forward<OwnerInformationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the target definition in this maintenance window the invocation was
     * performed for.</p>
     */
    inline const Aws::String& GetWindowTargetId() const { return m_windowTargetId; }
    inline bool WindowTargetIdHasBeenSet() const { return m_windowTargetIdHasBeenSet; }
    template<typename WindowTargetIdT = Aws::String>
    void SetWindowTargetId(WindowTargetIdT&& value) { m_windowTargetIdHasBeenSet = true; m_windowTargetId = std::forward<WindowTargetIdT>(value); }
    template<typename WindowTargetIdT = Aws::String>
    MaintenanceWindowExecutionTaskInvocationIdentity& WithWindowTargetId(WindowTargetIdT&& value) { SetWindowTargetId(std::forward<WindowTargetIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_windowExecutionId;
    bool m_windowExecutionIdHasBeenSet = false;

    Aws::String m_taskExecutionId;
    bool m_taskExecutionIdHasBeenSet = false;

    Aws::String m_invocationId;
    bool m_invocationIdHasBeenSet = false;

    Aws::String m_executionId;
    bool m_executionIdHasBeenSet = false;

    MaintenanceWindowTaskType m_taskType{MaintenanceWindowTaskType::NOT_SET};
    bool m_taskTypeHasBeenSet = false;

    Aws::String m_parameters;
    bool m_parametersHasBeenSet = false;

    MaintenanceWindowExecutionStatus m_status{MaintenanceWindowExecutionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusDetails;
    bool m_statusDetailsHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    Aws::String m_ownerInformation;
    bool m_ownerInformationHasBeenSet = false;

    Aws::String m_windowTargetId;
    bool m_windowTargetIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
