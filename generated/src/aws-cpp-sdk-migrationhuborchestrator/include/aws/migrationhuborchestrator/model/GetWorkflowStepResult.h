/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhuborchestrator/MigrationHubOrchestrator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/migrationhuborchestrator/model/StepActionType.h>
#include <aws/migrationhuborchestrator/model/Owner.h>
#include <aws/migrationhuborchestrator/model/WorkflowStepAutomationConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/migrationhuborchestrator/model/StepStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/migrationhuborchestrator/model/WorkflowStepOutput.h>
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
namespace MigrationHubOrchestrator
{
namespace Model
{
  class GetWorkflowStepResult
  {
  public:
    AWS_MIGRATIONHUBORCHESTRATOR_API GetWorkflowStepResult() = default;
    AWS_MIGRATIONHUBORCHESTRATOR_API GetWorkflowStepResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUBORCHESTRATOR_API GetWorkflowStepResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the step.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GetWorkflowStepResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the step group.</p>
     */
    inline const Aws::String& GetStepGroupId() const { return m_stepGroupId; }
    template<typename StepGroupIdT = Aws::String>
    void SetStepGroupId(StepGroupIdT&& value) { m_stepGroupIdHasBeenSet = true; m_stepGroupId = std::forward<StepGroupIdT>(value); }
    template<typename StepGroupIdT = Aws::String>
    GetWorkflowStepResult& WithStepGroupId(StepGroupIdT&& value) { SetStepGroupId(std::forward<StepGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the migration workflow.</p>
     */
    inline const Aws::String& GetWorkflowId() const { return m_workflowId; }
    template<typename WorkflowIdT = Aws::String>
    void SetWorkflowId(WorkflowIdT&& value) { m_workflowIdHasBeenSet = true; m_workflowId = std::forward<WorkflowIdT>(value); }
    template<typename WorkflowIdT = Aws::String>
    GetWorkflowStepResult& WithWorkflowId(WorkflowIdT&& value) { SetWorkflowId(std::forward<WorkflowIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the step.</p>
     */
    inline const Aws::String& GetStepId() const { return m_stepId; }
    template<typename StepIdT = Aws::String>
    void SetStepId(StepIdT&& value) { m_stepIdHasBeenSet = true; m_stepId = std::forward<StepIdT>(value); }
    template<typename StepIdT = Aws::String>
    GetWorkflowStepResult& WithStepId(StepIdT&& value) { SetStepId(std::forward<StepIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the step.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GetWorkflowStepResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action type of the step. You must run and update the status of a manual
     * step for the workflow to continue after the completion of the step.</p>
     */
    inline StepActionType GetStepActionType() const { return m_stepActionType; }
    inline void SetStepActionType(StepActionType value) { m_stepActionTypeHasBeenSet = true; m_stepActionType = value; }
    inline GetWorkflowStepResult& WithStepActionType(StepActionType value) { SetStepActionType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The owner of the step.</p>
     */
    inline Owner GetOwner() const { return m_owner; }
    inline void SetOwner(Owner value) { m_ownerHasBeenSet = true; m_owner = value; }
    inline GetWorkflowStepResult& WithOwner(Owner value) { SetOwner(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The custom script to run tests on source or target environments.</p>
     */
    inline const WorkflowStepAutomationConfiguration& GetWorkflowStepAutomationConfiguration() const { return m_workflowStepAutomationConfiguration; }
    template<typename WorkflowStepAutomationConfigurationT = WorkflowStepAutomationConfiguration>
    void SetWorkflowStepAutomationConfiguration(WorkflowStepAutomationConfigurationT&& value) { m_workflowStepAutomationConfigurationHasBeenSet = true; m_workflowStepAutomationConfiguration = std::forward<WorkflowStepAutomationConfigurationT>(value); }
    template<typename WorkflowStepAutomationConfigurationT = WorkflowStepAutomationConfiguration>
    GetWorkflowStepResult& WithWorkflowStepAutomationConfiguration(WorkflowStepAutomationConfigurationT&& value) { SetWorkflowStepAutomationConfiguration(std::forward<WorkflowStepAutomationConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The servers on which a step will be run.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStepTarget() const { return m_stepTarget; }
    template<typename StepTargetT = Aws::Vector<Aws::String>>
    void SetStepTarget(StepTargetT&& value) { m_stepTargetHasBeenSet = true; m_stepTarget = std::forward<StepTargetT>(value); }
    template<typename StepTargetT = Aws::Vector<Aws::String>>
    GetWorkflowStepResult& WithStepTarget(StepTargetT&& value) { SetStepTarget(std::forward<StepTargetT>(value)); return *this;}
    template<typename StepTargetT = Aws::String>
    GetWorkflowStepResult& AddStepTarget(StepTargetT&& value) { m_stepTargetHasBeenSet = true; m_stepTarget.emplace_back(std::forward<StepTargetT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The outputs of the step.</p>
     */
    inline const Aws::Vector<WorkflowStepOutput>& GetOutputs() const { return m_outputs; }
    template<typename OutputsT = Aws::Vector<WorkflowStepOutput>>
    void SetOutputs(OutputsT&& value) { m_outputsHasBeenSet = true; m_outputs = std::forward<OutputsT>(value); }
    template<typename OutputsT = Aws::Vector<WorkflowStepOutput>>
    GetWorkflowStepResult& WithOutputs(OutputsT&& value) { SetOutputs(std::forward<OutputsT>(value)); return *this;}
    template<typename OutputsT = WorkflowStepOutput>
    GetWorkflowStepResult& AddOutputs(OutputsT&& value) { m_outputsHasBeenSet = true; m_outputs.emplace_back(std::forward<OutputsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The previous step.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPrevious() const { return m_previous; }
    template<typename PreviousT = Aws::Vector<Aws::String>>
    void SetPrevious(PreviousT&& value) { m_previousHasBeenSet = true; m_previous = std::forward<PreviousT>(value); }
    template<typename PreviousT = Aws::Vector<Aws::String>>
    GetWorkflowStepResult& WithPrevious(PreviousT&& value) { SetPrevious(std::forward<PreviousT>(value)); return *this;}
    template<typename PreviousT = Aws::String>
    GetWorkflowStepResult& AddPrevious(PreviousT&& value) { m_previousHasBeenSet = true; m_previous.emplace_back(std::forward<PreviousT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The next step.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNext() const { return m_next; }
    template<typename NextT = Aws::Vector<Aws::String>>
    void SetNext(NextT&& value) { m_nextHasBeenSet = true; m_next = std::forward<NextT>(value); }
    template<typename NextT = Aws::Vector<Aws::String>>
    GetWorkflowStepResult& WithNext(NextT&& value) { SetNext(std::forward<NextT>(value)); return *this;}
    template<typename NextT = Aws::String>
    GetWorkflowStepResult& AddNext(NextT&& value) { m_nextHasBeenSet = true; m_next.emplace_back(std::forward<NextT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of the step.</p>
     */
    inline StepStatus GetStatus() const { return m_status; }
    inline void SetStatus(StepStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetWorkflowStepResult& WithStatus(StepStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status message of the migration workflow.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    GetWorkflowStepResult& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The output location of the script.</p>
     */
    inline const Aws::String& GetScriptOutputLocation() const { return m_scriptOutputLocation; }
    template<typename ScriptOutputLocationT = Aws::String>
    void SetScriptOutputLocation(ScriptOutputLocationT&& value) { m_scriptOutputLocationHasBeenSet = true; m_scriptOutputLocation = std::forward<ScriptOutputLocationT>(value); }
    template<typename ScriptOutputLocationT = Aws::String>
    GetWorkflowStepResult& WithScriptOutputLocation(ScriptOutputLocationT&& value) { SetScriptOutputLocation(std::forward<ScriptOutputLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the step was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    GetWorkflowStepResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the workflow was last started.</p>
     */
    inline const Aws::Utils::DateTime& GetLastStartTime() const { return m_lastStartTime; }
    template<typename LastStartTimeT = Aws::Utils::DateTime>
    void SetLastStartTime(LastStartTimeT&& value) { m_lastStartTimeHasBeenSet = true; m_lastStartTime = std::forward<LastStartTimeT>(value); }
    template<typename LastStartTimeT = Aws::Utils::DateTime>
    GetWorkflowStepResult& WithLastStartTime(LastStartTimeT&& value) { SetLastStartTime(std::forward<LastStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the step ended.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    GetWorkflowStepResult& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of servers that have been migrated.</p>
     */
    inline int GetNoOfSrvCompleted() const { return m_noOfSrvCompleted; }
    inline void SetNoOfSrvCompleted(int value) { m_noOfSrvCompletedHasBeenSet = true; m_noOfSrvCompleted = value; }
    inline GetWorkflowStepResult& WithNoOfSrvCompleted(int value) { SetNoOfSrvCompleted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of servers that have failed to migrate.</p>
     */
    inline int GetNoOfSrvFailed() const { return m_noOfSrvFailed; }
    inline void SetNoOfSrvFailed(int value) { m_noOfSrvFailedHasBeenSet = true; m_noOfSrvFailed = value; }
    inline GetWorkflowStepResult& WithNoOfSrvFailed(int value) { SetNoOfSrvFailed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of servers that have been migrated.</p>
     */
    inline int GetTotalNoOfSrv() const { return m_totalNoOfSrv; }
    inline void SetTotalNoOfSrv(int value) { m_totalNoOfSrvHasBeenSet = true; m_totalNoOfSrv = value; }
    inline GetWorkflowStepResult& WithTotalNoOfSrv(int value) { SetTotalNoOfSrv(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetWorkflowStepResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_stepGroupId;
    bool m_stepGroupIdHasBeenSet = false;

    Aws::String m_workflowId;
    bool m_workflowIdHasBeenSet = false;

    Aws::String m_stepId;
    bool m_stepIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    StepActionType m_stepActionType{StepActionType::NOT_SET};
    bool m_stepActionTypeHasBeenSet = false;

    Owner m_owner{Owner::NOT_SET};
    bool m_ownerHasBeenSet = false;

    WorkflowStepAutomationConfiguration m_workflowStepAutomationConfiguration;
    bool m_workflowStepAutomationConfigurationHasBeenSet = false;

    Aws::Vector<Aws::String> m_stepTarget;
    bool m_stepTargetHasBeenSet = false;

    Aws::Vector<WorkflowStepOutput> m_outputs;
    bool m_outputsHasBeenSet = false;

    Aws::Vector<Aws::String> m_previous;
    bool m_previousHasBeenSet = false;

    Aws::Vector<Aws::String> m_next;
    bool m_nextHasBeenSet = false;

    StepStatus m_status{StepStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::String m_scriptOutputLocation;
    bool m_scriptOutputLocationHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastStartTime{};
    bool m_lastStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    int m_noOfSrvCompleted{0};
    bool m_noOfSrvCompletedHasBeenSet = false;

    int m_noOfSrvFailed{0};
    bool m_noOfSrvFailedHasBeenSet = false;

    int m_totalNoOfSrv{0};
    bool m_totalNoOfSrvHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubOrchestrator
} // namespace Aws
