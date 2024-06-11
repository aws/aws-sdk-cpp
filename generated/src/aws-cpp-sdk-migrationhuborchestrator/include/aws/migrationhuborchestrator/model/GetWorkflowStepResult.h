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
    AWS_MIGRATIONHUBORCHESTRATOR_API GetWorkflowStepResult();
    AWS_MIGRATIONHUBORCHESTRATOR_API GetWorkflowStepResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUBORCHESTRATOR_API GetWorkflowStepResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the step.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetWorkflowStepResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetWorkflowStepResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetWorkflowStepResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the step group.</p>
     */
    inline const Aws::String& GetStepGroupId() const{ return m_stepGroupId; }
    inline void SetStepGroupId(const Aws::String& value) { m_stepGroupId = value; }
    inline void SetStepGroupId(Aws::String&& value) { m_stepGroupId = std::move(value); }
    inline void SetStepGroupId(const char* value) { m_stepGroupId.assign(value); }
    inline GetWorkflowStepResult& WithStepGroupId(const Aws::String& value) { SetStepGroupId(value); return *this;}
    inline GetWorkflowStepResult& WithStepGroupId(Aws::String&& value) { SetStepGroupId(std::move(value)); return *this;}
    inline GetWorkflowStepResult& WithStepGroupId(const char* value) { SetStepGroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the migration workflow.</p>
     */
    inline const Aws::String& GetWorkflowId() const{ return m_workflowId; }
    inline void SetWorkflowId(const Aws::String& value) { m_workflowId = value; }
    inline void SetWorkflowId(Aws::String&& value) { m_workflowId = std::move(value); }
    inline void SetWorkflowId(const char* value) { m_workflowId.assign(value); }
    inline GetWorkflowStepResult& WithWorkflowId(const Aws::String& value) { SetWorkflowId(value); return *this;}
    inline GetWorkflowStepResult& WithWorkflowId(Aws::String&& value) { SetWorkflowId(std::move(value)); return *this;}
    inline GetWorkflowStepResult& WithWorkflowId(const char* value) { SetWorkflowId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the step.</p>
     */
    inline const Aws::String& GetStepId() const{ return m_stepId; }
    inline void SetStepId(const Aws::String& value) { m_stepId = value; }
    inline void SetStepId(Aws::String&& value) { m_stepId = std::move(value); }
    inline void SetStepId(const char* value) { m_stepId.assign(value); }
    inline GetWorkflowStepResult& WithStepId(const Aws::String& value) { SetStepId(value); return *this;}
    inline GetWorkflowStepResult& WithStepId(Aws::String&& value) { SetStepId(std::move(value)); return *this;}
    inline GetWorkflowStepResult& WithStepId(const char* value) { SetStepId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the step.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetWorkflowStepResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetWorkflowStepResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetWorkflowStepResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action type of the step. You must run and update the status of a manual
     * step for the workflow to continue after the completion of the step.</p>
     */
    inline const StepActionType& GetStepActionType() const{ return m_stepActionType; }
    inline void SetStepActionType(const StepActionType& value) { m_stepActionType = value; }
    inline void SetStepActionType(StepActionType&& value) { m_stepActionType = std::move(value); }
    inline GetWorkflowStepResult& WithStepActionType(const StepActionType& value) { SetStepActionType(value); return *this;}
    inline GetWorkflowStepResult& WithStepActionType(StepActionType&& value) { SetStepActionType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The owner of the step.</p>
     */
    inline const Owner& GetOwner() const{ return m_owner; }
    inline void SetOwner(const Owner& value) { m_owner = value; }
    inline void SetOwner(Owner&& value) { m_owner = std::move(value); }
    inline GetWorkflowStepResult& WithOwner(const Owner& value) { SetOwner(value); return *this;}
    inline GetWorkflowStepResult& WithOwner(Owner&& value) { SetOwner(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The custom script to run tests on source or target environments.</p>
     */
    inline const WorkflowStepAutomationConfiguration& GetWorkflowStepAutomationConfiguration() const{ return m_workflowStepAutomationConfiguration; }
    inline void SetWorkflowStepAutomationConfiguration(const WorkflowStepAutomationConfiguration& value) { m_workflowStepAutomationConfiguration = value; }
    inline void SetWorkflowStepAutomationConfiguration(WorkflowStepAutomationConfiguration&& value) { m_workflowStepAutomationConfiguration = std::move(value); }
    inline GetWorkflowStepResult& WithWorkflowStepAutomationConfiguration(const WorkflowStepAutomationConfiguration& value) { SetWorkflowStepAutomationConfiguration(value); return *this;}
    inline GetWorkflowStepResult& WithWorkflowStepAutomationConfiguration(WorkflowStepAutomationConfiguration&& value) { SetWorkflowStepAutomationConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The servers on which a step will be run.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStepTarget() const{ return m_stepTarget; }
    inline void SetStepTarget(const Aws::Vector<Aws::String>& value) { m_stepTarget = value; }
    inline void SetStepTarget(Aws::Vector<Aws::String>&& value) { m_stepTarget = std::move(value); }
    inline GetWorkflowStepResult& WithStepTarget(const Aws::Vector<Aws::String>& value) { SetStepTarget(value); return *this;}
    inline GetWorkflowStepResult& WithStepTarget(Aws::Vector<Aws::String>&& value) { SetStepTarget(std::move(value)); return *this;}
    inline GetWorkflowStepResult& AddStepTarget(const Aws::String& value) { m_stepTarget.push_back(value); return *this; }
    inline GetWorkflowStepResult& AddStepTarget(Aws::String&& value) { m_stepTarget.push_back(std::move(value)); return *this; }
    inline GetWorkflowStepResult& AddStepTarget(const char* value) { m_stepTarget.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The outputs of the step.</p>
     */
    inline const Aws::Vector<WorkflowStepOutput>& GetOutputs() const{ return m_outputs; }
    inline void SetOutputs(const Aws::Vector<WorkflowStepOutput>& value) { m_outputs = value; }
    inline void SetOutputs(Aws::Vector<WorkflowStepOutput>&& value) { m_outputs = std::move(value); }
    inline GetWorkflowStepResult& WithOutputs(const Aws::Vector<WorkflowStepOutput>& value) { SetOutputs(value); return *this;}
    inline GetWorkflowStepResult& WithOutputs(Aws::Vector<WorkflowStepOutput>&& value) { SetOutputs(std::move(value)); return *this;}
    inline GetWorkflowStepResult& AddOutputs(const WorkflowStepOutput& value) { m_outputs.push_back(value); return *this; }
    inline GetWorkflowStepResult& AddOutputs(WorkflowStepOutput&& value) { m_outputs.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The previous step.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPrevious() const{ return m_previous; }
    inline void SetPrevious(const Aws::Vector<Aws::String>& value) { m_previous = value; }
    inline void SetPrevious(Aws::Vector<Aws::String>&& value) { m_previous = std::move(value); }
    inline GetWorkflowStepResult& WithPrevious(const Aws::Vector<Aws::String>& value) { SetPrevious(value); return *this;}
    inline GetWorkflowStepResult& WithPrevious(Aws::Vector<Aws::String>&& value) { SetPrevious(std::move(value)); return *this;}
    inline GetWorkflowStepResult& AddPrevious(const Aws::String& value) { m_previous.push_back(value); return *this; }
    inline GetWorkflowStepResult& AddPrevious(Aws::String&& value) { m_previous.push_back(std::move(value)); return *this; }
    inline GetWorkflowStepResult& AddPrevious(const char* value) { m_previous.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The next step.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNext() const{ return m_next; }
    inline void SetNext(const Aws::Vector<Aws::String>& value) { m_next = value; }
    inline void SetNext(Aws::Vector<Aws::String>&& value) { m_next = std::move(value); }
    inline GetWorkflowStepResult& WithNext(const Aws::Vector<Aws::String>& value) { SetNext(value); return *this;}
    inline GetWorkflowStepResult& WithNext(Aws::Vector<Aws::String>&& value) { SetNext(std::move(value)); return *this;}
    inline GetWorkflowStepResult& AddNext(const Aws::String& value) { m_next.push_back(value); return *this; }
    inline GetWorkflowStepResult& AddNext(Aws::String&& value) { m_next.push_back(std::move(value)); return *this; }
    inline GetWorkflowStepResult& AddNext(const char* value) { m_next.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of the step.</p>
     */
    inline const StepStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const StepStatus& value) { m_status = value; }
    inline void SetStatus(StepStatus&& value) { m_status = std::move(value); }
    inline GetWorkflowStepResult& WithStatus(const StepStatus& value) { SetStatus(value); return *this;}
    inline GetWorkflowStepResult& WithStatus(StepStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status message of the migration workflow.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessage.assign(value); }
    inline GetWorkflowStepResult& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline GetWorkflowStepResult& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline GetWorkflowStepResult& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The output location of the script.</p>
     */
    inline const Aws::String& GetScriptOutputLocation() const{ return m_scriptOutputLocation; }
    inline void SetScriptOutputLocation(const Aws::String& value) { m_scriptOutputLocation = value; }
    inline void SetScriptOutputLocation(Aws::String&& value) { m_scriptOutputLocation = std::move(value); }
    inline void SetScriptOutputLocation(const char* value) { m_scriptOutputLocation.assign(value); }
    inline GetWorkflowStepResult& WithScriptOutputLocation(const Aws::String& value) { SetScriptOutputLocation(value); return *this;}
    inline GetWorkflowStepResult& WithScriptOutputLocation(Aws::String&& value) { SetScriptOutputLocation(std::move(value)); return *this;}
    inline GetWorkflowStepResult& WithScriptOutputLocation(const char* value) { SetScriptOutputLocation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the step was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline GetWorkflowStepResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline GetWorkflowStepResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the workflow was last started.</p>
     */
    inline const Aws::Utils::DateTime& GetLastStartTime() const{ return m_lastStartTime; }
    inline void SetLastStartTime(const Aws::Utils::DateTime& value) { m_lastStartTime = value; }
    inline void SetLastStartTime(Aws::Utils::DateTime&& value) { m_lastStartTime = std::move(value); }
    inline GetWorkflowStepResult& WithLastStartTime(const Aws::Utils::DateTime& value) { SetLastStartTime(value); return *this;}
    inline GetWorkflowStepResult& WithLastStartTime(Aws::Utils::DateTime&& value) { SetLastStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the step ended.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTime = std::move(value); }
    inline GetWorkflowStepResult& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline GetWorkflowStepResult& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of servers that have been migrated.</p>
     */
    inline int GetNoOfSrvCompleted() const{ return m_noOfSrvCompleted; }
    inline void SetNoOfSrvCompleted(int value) { m_noOfSrvCompleted = value; }
    inline GetWorkflowStepResult& WithNoOfSrvCompleted(int value) { SetNoOfSrvCompleted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of servers that have failed to migrate.</p>
     */
    inline int GetNoOfSrvFailed() const{ return m_noOfSrvFailed; }
    inline void SetNoOfSrvFailed(int value) { m_noOfSrvFailed = value; }
    inline GetWorkflowStepResult& WithNoOfSrvFailed(int value) { SetNoOfSrvFailed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of servers that have been migrated.</p>
     */
    inline int GetTotalNoOfSrv() const{ return m_totalNoOfSrv; }
    inline void SetTotalNoOfSrv(int value) { m_totalNoOfSrv = value; }
    inline GetWorkflowStepResult& WithTotalNoOfSrv(int value) { SetTotalNoOfSrv(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetWorkflowStepResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetWorkflowStepResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetWorkflowStepResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_name;

    Aws::String m_stepGroupId;

    Aws::String m_workflowId;

    Aws::String m_stepId;

    Aws::String m_description;

    StepActionType m_stepActionType;

    Owner m_owner;

    WorkflowStepAutomationConfiguration m_workflowStepAutomationConfiguration;

    Aws::Vector<Aws::String> m_stepTarget;

    Aws::Vector<WorkflowStepOutput> m_outputs;

    Aws::Vector<Aws::String> m_previous;

    Aws::Vector<Aws::String> m_next;

    StepStatus m_status;

    Aws::String m_statusMessage;

    Aws::String m_scriptOutputLocation;

    Aws::Utils::DateTime m_creationTime;

    Aws::Utils::DateTime m_lastStartTime;

    Aws::Utils::DateTime m_endTime;

    int m_noOfSrvCompleted;

    int m_noOfSrvFailed;

    int m_totalNoOfSrv;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MigrationHubOrchestrator
} // namespace Aws
