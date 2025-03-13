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
  class GetMaintenanceWindowExecutionTaskInvocationResult
  {
  public:
    AWS_SSM_API GetMaintenanceWindowExecutionTaskInvocationResult() = default;
    AWS_SSM_API GetMaintenanceWindowExecutionTaskInvocationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API GetMaintenanceWindowExecutionTaskInvocationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The maintenance window execution ID.</p>
     */
    inline const Aws::String& GetWindowExecutionId() const { return m_windowExecutionId; }
    template<typename WindowExecutionIdT = Aws::String>
    void SetWindowExecutionId(WindowExecutionIdT&& value) { m_windowExecutionIdHasBeenSet = true; m_windowExecutionId = std::forward<WindowExecutionIdT>(value); }
    template<typename WindowExecutionIdT = Aws::String>
    GetMaintenanceWindowExecutionTaskInvocationResult& WithWindowExecutionId(WindowExecutionIdT&& value) { SetWindowExecutionId(std::forward<WindowExecutionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The task execution ID.</p>
     */
    inline const Aws::String& GetTaskExecutionId() const { return m_taskExecutionId; }
    template<typename TaskExecutionIdT = Aws::String>
    void SetTaskExecutionId(TaskExecutionIdT&& value) { m_taskExecutionIdHasBeenSet = true; m_taskExecutionId = std::forward<TaskExecutionIdT>(value); }
    template<typename TaskExecutionIdT = Aws::String>
    GetMaintenanceWindowExecutionTaskInvocationResult& WithTaskExecutionId(TaskExecutionIdT&& value) { SetTaskExecutionId(std::forward<TaskExecutionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The invocation ID.</p>
     */
    inline const Aws::String& GetInvocationId() const { return m_invocationId; }
    template<typename InvocationIdT = Aws::String>
    void SetInvocationId(InvocationIdT&& value) { m_invocationIdHasBeenSet = true; m_invocationId = std::forward<InvocationIdT>(value); }
    template<typename InvocationIdT = Aws::String>
    GetMaintenanceWindowExecutionTaskInvocationResult& WithInvocationId(InvocationIdT&& value) { SetInvocationId(std::forward<InvocationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The execution ID.</p>
     */
    inline const Aws::String& GetExecutionId() const { return m_executionId; }
    template<typename ExecutionIdT = Aws::String>
    void SetExecutionId(ExecutionIdT&& value) { m_executionIdHasBeenSet = true; m_executionId = std::forward<ExecutionIdT>(value); }
    template<typename ExecutionIdT = Aws::String>
    GetMaintenanceWindowExecutionTaskInvocationResult& WithExecutionId(ExecutionIdT&& value) { SetExecutionId(std::forward<ExecutionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Retrieves the task type for a maintenance window.</p>
     */
    inline MaintenanceWindowTaskType GetTaskType() const { return m_taskType; }
    inline void SetTaskType(MaintenanceWindowTaskType value) { m_taskTypeHasBeenSet = true; m_taskType = value; }
    inline GetMaintenanceWindowExecutionTaskInvocationResult& WithTaskType(MaintenanceWindowTaskType value) { SetTaskType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters used at the time that the task ran.</p>
     */
    inline const Aws::String& GetParameters() const { return m_parameters; }
    template<typename ParametersT = Aws::String>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Aws::String>
    GetMaintenanceWindowExecutionTaskInvocationResult& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The task status for an invocation.</p>
     */
    inline MaintenanceWindowExecutionStatus GetStatus() const { return m_status; }
    inline void SetStatus(MaintenanceWindowExecutionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetMaintenanceWindowExecutionTaskInvocationResult& WithStatus(MaintenanceWindowExecutionStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details explaining the status. Details are only available for certain
     * status values.</p>
     */
    inline const Aws::String& GetStatusDetails() const { return m_statusDetails; }
    template<typename StatusDetailsT = Aws::String>
    void SetStatusDetails(StatusDetailsT&& value) { m_statusDetailsHasBeenSet = true; m_statusDetails = std::forward<StatusDetailsT>(value); }
    template<typename StatusDetailsT = Aws::String>
    GetMaintenanceWindowExecutionTaskInvocationResult& WithStatusDetails(StatusDetailsT&& value) { SetStatusDetails(std::forward<StatusDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the task started running on the target.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    GetMaintenanceWindowExecutionTaskInvocationResult& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the task finished running on the target.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    GetMaintenanceWindowExecutionTaskInvocationResult& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>User-provided value to be included in any Amazon CloudWatch Events or Amazon
     * EventBridge events raised while running tasks for these targets in this
     * maintenance window.</p>
     */
    inline const Aws::String& GetOwnerInformation() const { return m_ownerInformation; }
    template<typename OwnerInformationT = Aws::String>
    void SetOwnerInformation(OwnerInformationT&& value) { m_ownerInformationHasBeenSet = true; m_ownerInformation = std::forward<OwnerInformationT>(value); }
    template<typename OwnerInformationT = Aws::String>
    GetMaintenanceWindowExecutionTaskInvocationResult& WithOwnerInformation(OwnerInformationT&& value) { SetOwnerInformation(std::forward<OwnerInformationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maintenance window target ID.</p>
     */
    inline const Aws::String& GetWindowTargetId() const { return m_windowTargetId; }
    template<typename WindowTargetIdT = Aws::String>
    void SetWindowTargetId(WindowTargetIdT&& value) { m_windowTargetIdHasBeenSet = true; m_windowTargetId = std::forward<WindowTargetIdT>(value); }
    template<typename WindowTargetIdT = Aws::String>
    GetMaintenanceWindowExecutionTaskInvocationResult& WithWindowTargetId(WindowTargetIdT&& value) { SetWindowTargetId(std::forward<WindowTargetIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetMaintenanceWindowExecutionTaskInvocationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
