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


    /**
     * <p>The name of the step.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the step.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the step.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the step.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the step.</p>
     */
    inline GetWorkflowStepResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the step.</p>
     */
    inline GetWorkflowStepResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the step.</p>
     */
    inline GetWorkflowStepResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The ID of the step group.</p>
     */
    inline const Aws::String& GetStepGroupId() const{ return m_stepGroupId; }

    /**
     * <p>The ID of the step group.</p>
     */
    inline void SetStepGroupId(const Aws::String& value) { m_stepGroupId = value; }

    /**
     * <p>The ID of the step group.</p>
     */
    inline void SetStepGroupId(Aws::String&& value) { m_stepGroupId = std::move(value); }

    /**
     * <p>The ID of the step group.</p>
     */
    inline void SetStepGroupId(const char* value) { m_stepGroupId.assign(value); }

    /**
     * <p>The ID of the step group.</p>
     */
    inline GetWorkflowStepResult& WithStepGroupId(const Aws::String& value) { SetStepGroupId(value); return *this;}

    /**
     * <p>The ID of the step group.</p>
     */
    inline GetWorkflowStepResult& WithStepGroupId(Aws::String&& value) { SetStepGroupId(std::move(value)); return *this;}

    /**
     * <p>The ID of the step group.</p>
     */
    inline GetWorkflowStepResult& WithStepGroupId(const char* value) { SetStepGroupId(value); return *this;}


    /**
     * <p>The ID of the migration workflow.</p>
     */
    inline const Aws::String& GetWorkflowId() const{ return m_workflowId; }

    /**
     * <p>The ID of the migration workflow.</p>
     */
    inline void SetWorkflowId(const Aws::String& value) { m_workflowId = value; }

    /**
     * <p>The ID of the migration workflow.</p>
     */
    inline void SetWorkflowId(Aws::String&& value) { m_workflowId = std::move(value); }

    /**
     * <p>The ID of the migration workflow.</p>
     */
    inline void SetWorkflowId(const char* value) { m_workflowId.assign(value); }

    /**
     * <p>The ID of the migration workflow.</p>
     */
    inline GetWorkflowStepResult& WithWorkflowId(const Aws::String& value) { SetWorkflowId(value); return *this;}

    /**
     * <p>The ID of the migration workflow.</p>
     */
    inline GetWorkflowStepResult& WithWorkflowId(Aws::String&& value) { SetWorkflowId(std::move(value)); return *this;}

    /**
     * <p>The ID of the migration workflow.</p>
     */
    inline GetWorkflowStepResult& WithWorkflowId(const char* value) { SetWorkflowId(value); return *this;}


    /**
     * <p>The ID of the step.</p>
     */
    inline const Aws::String& GetStepId() const{ return m_stepId; }

    /**
     * <p>The ID of the step.</p>
     */
    inline void SetStepId(const Aws::String& value) { m_stepId = value; }

    /**
     * <p>The ID of the step.</p>
     */
    inline void SetStepId(Aws::String&& value) { m_stepId = std::move(value); }

    /**
     * <p>The ID of the step.</p>
     */
    inline void SetStepId(const char* value) { m_stepId.assign(value); }

    /**
     * <p>The ID of the step.</p>
     */
    inline GetWorkflowStepResult& WithStepId(const Aws::String& value) { SetStepId(value); return *this;}

    /**
     * <p>The ID of the step.</p>
     */
    inline GetWorkflowStepResult& WithStepId(Aws::String&& value) { SetStepId(std::move(value)); return *this;}

    /**
     * <p>The ID of the step.</p>
     */
    inline GetWorkflowStepResult& WithStepId(const char* value) { SetStepId(value); return *this;}


    /**
     * <p>The description of the step.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the step.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description of the step.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description of the step.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description of the step.</p>
     */
    inline GetWorkflowStepResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the step.</p>
     */
    inline GetWorkflowStepResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the step.</p>
     */
    inline GetWorkflowStepResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The action type of the step. You must run and update the status of a manual
     * step for the workflow to continue after the completion of the step.</p>
     */
    inline const StepActionType& GetStepActionType() const{ return m_stepActionType; }

    /**
     * <p>The action type of the step. You must run and update the status of a manual
     * step for the workflow to continue after the completion of the step.</p>
     */
    inline void SetStepActionType(const StepActionType& value) { m_stepActionType = value; }

    /**
     * <p>The action type of the step. You must run and update the status of a manual
     * step for the workflow to continue after the completion of the step.</p>
     */
    inline void SetStepActionType(StepActionType&& value) { m_stepActionType = std::move(value); }

    /**
     * <p>The action type of the step. You must run and update the status of a manual
     * step for the workflow to continue after the completion of the step.</p>
     */
    inline GetWorkflowStepResult& WithStepActionType(const StepActionType& value) { SetStepActionType(value); return *this;}

    /**
     * <p>The action type of the step. You must run and update the status of a manual
     * step for the workflow to continue after the completion of the step.</p>
     */
    inline GetWorkflowStepResult& WithStepActionType(StepActionType&& value) { SetStepActionType(std::move(value)); return *this;}


    /**
     * <p>The owner of the step.</p>
     */
    inline const Owner& GetOwner() const{ return m_owner; }

    /**
     * <p>The owner of the step.</p>
     */
    inline void SetOwner(const Owner& value) { m_owner = value; }

    /**
     * <p>The owner of the step.</p>
     */
    inline void SetOwner(Owner&& value) { m_owner = std::move(value); }

    /**
     * <p>The owner of the step.</p>
     */
    inline GetWorkflowStepResult& WithOwner(const Owner& value) { SetOwner(value); return *this;}

    /**
     * <p>The owner of the step.</p>
     */
    inline GetWorkflowStepResult& WithOwner(Owner&& value) { SetOwner(std::move(value)); return *this;}


    /**
     * <p>The custom script to run tests on source or target environments.</p>
     */
    inline const WorkflowStepAutomationConfiguration& GetWorkflowStepAutomationConfiguration() const{ return m_workflowStepAutomationConfiguration; }

    /**
     * <p>The custom script to run tests on source or target environments.</p>
     */
    inline void SetWorkflowStepAutomationConfiguration(const WorkflowStepAutomationConfiguration& value) { m_workflowStepAutomationConfiguration = value; }

    /**
     * <p>The custom script to run tests on source or target environments.</p>
     */
    inline void SetWorkflowStepAutomationConfiguration(WorkflowStepAutomationConfiguration&& value) { m_workflowStepAutomationConfiguration = std::move(value); }

    /**
     * <p>The custom script to run tests on source or target environments.</p>
     */
    inline GetWorkflowStepResult& WithWorkflowStepAutomationConfiguration(const WorkflowStepAutomationConfiguration& value) { SetWorkflowStepAutomationConfiguration(value); return *this;}

    /**
     * <p>The custom script to run tests on source or target environments.</p>
     */
    inline GetWorkflowStepResult& WithWorkflowStepAutomationConfiguration(WorkflowStepAutomationConfiguration&& value) { SetWorkflowStepAutomationConfiguration(std::move(value)); return *this;}


    /**
     * <p>The servers on which a step will be run.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStepTarget() const{ return m_stepTarget; }

    /**
     * <p>The servers on which a step will be run.</p>
     */
    inline void SetStepTarget(const Aws::Vector<Aws::String>& value) { m_stepTarget = value; }

    /**
     * <p>The servers on which a step will be run.</p>
     */
    inline void SetStepTarget(Aws::Vector<Aws::String>&& value) { m_stepTarget = std::move(value); }

    /**
     * <p>The servers on which a step will be run.</p>
     */
    inline GetWorkflowStepResult& WithStepTarget(const Aws::Vector<Aws::String>& value) { SetStepTarget(value); return *this;}

    /**
     * <p>The servers on which a step will be run.</p>
     */
    inline GetWorkflowStepResult& WithStepTarget(Aws::Vector<Aws::String>&& value) { SetStepTarget(std::move(value)); return *this;}

    /**
     * <p>The servers on which a step will be run.</p>
     */
    inline GetWorkflowStepResult& AddStepTarget(const Aws::String& value) { m_stepTarget.push_back(value); return *this; }

    /**
     * <p>The servers on which a step will be run.</p>
     */
    inline GetWorkflowStepResult& AddStepTarget(Aws::String&& value) { m_stepTarget.push_back(std::move(value)); return *this; }

    /**
     * <p>The servers on which a step will be run.</p>
     */
    inline GetWorkflowStepResult& AddStepTarget(const char* value) { m_stepTarget.push_back(value); return *this; }


    /**
     * <p>The outputs of the step.</p>
     */
    inline const Aws::Vector<WorkflowStepOutput>& GetOutputs() const{ return m_outputs; }

    /**
     * <p>The outputs of the step.</p>
     */
    inline void SetOutputs(const Aws::Vector<WorkflowStepOutput>& value) { m_outputs = value; }

    /**
     * <p>The outputs of the step.</p>
     */
    inline void SetOutputs(Aws::Vector<WorkflowStepOutput>&& value) { m_outputs = std::move(value); }

    /**
     * <p>The outputs of the step.</p>
     */
    inline GetWorkflowStepResult& WithOutputs(const Aws::Vector<WorkflowStepOutput>& value) { SetOutputs(value); return *this;}

    /**
     * <p>The outputs of the step.</p>
     */
    inline GetWorkflowStepResult& WithOutputs(Aws::Vector<WorkflowStepOutput>&& value) { SetOutputs(std::move(value)); return *this;}

    /**
     * <p>The outputs of the step.</p>
     */
    inline GetWorkflowStepResult& AddOutputs(const WorkflowStepOutput& value) { m_outputs.push_back(value); return *this; }

    /**
     * <p>The outputs of the step.</p>
     */
    inline GetWorkflowStepResult& AddOutputs(WorkflowStepOutput&& value) { m_outputs.push_back(std::move(value)); return *this; }


    /**
     * <p>The previous step.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPrevious() const{ return m_previous; }

    /**
     * <p>The previous step.</p>
     */
    inline void SetPrevious(const Aws::Vector<Aws::String>& value) { m_previous = value; }

    /**
     * <p>The previous step.</p>
     */
    inline void SetPrevious(Aws::Vector<Aws::String>&& value) { m_previous = std::move(value); }

    /**
     * <p>The previous step.</p>
     */
    inline GetWorkflowStepResult& WithPrevious(const Aws::Vector<Aws::String>& value) { SetPrevious(value); return *this;}

    /**
     * <p>The previous step.</p>
     */
    inline GetWorkflowStepResult& WithPrevious(Aws::Vector<Aws::String>&& value) { SetPrevious(std::move(value)); return *this;}

    /**
     * <p>The previous step.</p>
     */
    inline GetWorkflowStepResult& AddPrevious(const Aws::String& value) { m_previous.push_back(value); return *this; }

    /**
     * <p>The previous step.</p>
     */
    inline GetWorkflowStepResult& AddPrevious(Aws::String&& value) { m_previous.push_back(std::move(value)); return *this; }

    /**
     * <p>The previous step.</p>
     */
    inline GetWorkflowStepResult& AddPrevious(const char* value) { m_previous.push_back(value); return *this; }


    /**
     * <p>The next step.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNext() const{ return m_next; }

    /**
     * <p>The next step.</p>
     */
    inline void SetNext(const Aws::Vector<Aws::String>& value) { m_next = value; }

    /**
     * <p>The next step.</p>
     */
    inline void SetNext(Aws::Vector<Aws::String>&& value) { m_next = std::move(value); }

    /**
     * <p>The next step.</p>
     */
    inline GetWorkflowStepResult& WithNext(const Aws::Vector<Aws::String>& value) { SetNext(value); return *this;}

    /**
     * <p>The next step.</p>
     */
    inline GetWorkflowStepResult& WithNext(Aws::Vector<Aws::String>&& value) { SetNext(std::move(value)); return *this;}

    /**
     * <p>The next step.</p>
     */
    inline GetWorkflowStepResult& AddNext(const Aws::String& value) { m_next.push_back(value); return *this; }

    /**
     * <p>The next step.</p>
     */
    inline GetWorkflowStepResult& AddNext(Aws::String&& value) { m_next.push_back(std::move(value)); return *this; }

    /**
     * <p>The next step.</p>
     */
    inline GetWorkflowStepResult& AddNext(const char* value) { m_next.push_back(value); return *this; }


    /**
     * <p>The status of the step.</p>
     */
    inline const StepStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the step.</p>
     */
    inline void SetStatus(const StepStatus& value) { m_status = value; }

    /**
     * <p>The status of the step.</p>
     */
    inline void SetStatus(StepStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the step.</p>
     */
    inline GetWorkflowStepResult& WithStatus(const StepStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the step.</p>
     */
    inline GetWorkflowStepResult& WithStatus(StepStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The status message of the migration workflow.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>The status message of the migration workflow.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessage = value; }

    /**
     * <p>The status message of the migration workflow.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessage = std::move(value); }

    /**
     * <p>The status message of the migration workflow.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessage.assign(value); }

    /**
     * <p>The status message of the migration workflow.</p>
     */
    inline GetWorkflowStepResult& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>The status message of the migration workflow.</p>
     */
    inline GetWorkflowStepResult& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>The status message of the migration workflow.</p>
     */
    inline GetWorkflowStepResult& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}


    /**
     * <p>The output location of the script.</p>
     */
    inline const Aws::String& GetScriptOutputLocation() const{ return m_scriptOutputLocation; }

    /**
     * <p>The output location of the script.</p>
     */
    inline void SetScriptOutputLocation(const Aws::String& value) { m_scriptOutputLocation = value; }

    /**
     * <p>The output location of the script.</p>
     */
    inline void SetScriptOutputLocation(Aws::String&& value) { m_scriptOutputLocation = std::move(value); }

    /**
     * <p>The output location of the script.</p>
     */
    inline void SetScriptOutputLocation(const char* value) { m_scriptOutputLocation.assign(value); }

    /**
     * <p>The output location of the script.</p>
     */
    inline GetWorkflowStepResult& WithScriptOutputLocation(const Aws::String& value) { SetScriptOutputLocation(value); return *this;}

    /**
     * <p>The output location of the script.</p>
     */
    inline GetWorkflowStepResult& WithScriptOutputLocation(Aws::String&& value) { SetScriptOutputLocation(std::move(value)); return *this;}

    /**
     * <p>The output location of the script.</p>
     */
    inline GetWorkflowStepResult& WithScriptOutputLocation(const char* value) { SetScriptOutputLocation(value); return *this;}


    /**
     * <p>The time at which the step was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time at which the step was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>The time at which the step was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>The time at which the step was created.</p>
     */
    inline GetWorkflowStepResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time at which the step was created.</p>
     */
    inline GetWorkflowStepResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The time at which the workflow was last started.</p>
     */
    inline const Aws::Utils::DateTime& GetLastStartTime() const{ return m_lastStartTime; }

    /**
     * <p>The time at which the workflow was last started.</p>
     */
    inline void SetLastStartTime(const Aws::Utils::DateTime& value) { m_lastStartTime = value; }

    /**
     * <p>The time at which the workflow was last started.</p>
     */
    inline void SetLastStartTime(Aws::Utils::DateTime&& value) { m_lastStartTime = std::move(value); }

    /**
     * <p>The time at which the workflow was last started.</p>
     */
    inline GetWorkflowStepResult& WithLastStartTime(const Aws::Utils::DateTime& value) { SetLastStartTime(value); return *this;}

    /**
     * <p>The time at which the workflow was last started.</p>
     */
    inline GetWorkflowStepResult& WithLastStartTime(Aws::Utils::DateTime&& value) { SetLastStartTime(std::move(value)); return *this;}


    /**
     * <p>The time at which the step ended.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The time at which the step ended.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTime = value; }

    /**
     * <p>The time at which the step ended.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTime = std::move(value); }

    /**
     * <p>The time at which the step ended.</p>
     */
    inline GetWorkflowStepResult& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The time at which the step ended.</p>
     */
    inline GetWorkflowStepResult& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>The number of servers that have been migrated.</p>
     */
    inline int GetNoOfSrvCompleted() const{ return m_noOfSrvCompleted; }

    /**
     * <p>The number of servers that have been migrated.</p>
     */
    inline void SetNoOfSrvCompleted(int value) { m_noOfSrvCompleted = value; }

    /**
     * <p>The number of servers that have been migrated.</p>
     */
    inline GetWorkflowStepResult& WithNoOfSrvCompleted(int value) { SetNoOfSrvCompleted(value); return *this;}


    /**
     * <p>The number of servers that have failed to migrate.</p>
     */
    inline int GetNoOfSrvFailed() const{ return m_noOfSrvFailed; }

    /**
     * <p>The number of servers that have failed to migrate.</p>
     */
    inline void SetNoOfSrvFailed(int value) { m_noOfSrvFailed = value; }

    /**
     * <p>The number of servers that have failed to migrate.</p>
     */
    inline GetWorkflowStepResult& WithNoOfSrvFailed(int value) { SetNoOfSrvFailed(value); return *this;}


    /**
     * <p>The total number of servers that have been migrated.</p>
     */
    inline int GetTotalNoOfSrv() const{ return m_totalNoOfSrv; }

    /**
     * <p>The total number of servers that have been migrated.</p>
     */
    inline void SetTotalNoOfSrv(int value) { m_totalNoOfSrv = value; }

    /**
     * <p>The total number of servers that have been migrated.</p>
     */
    inline GetWorkflowStepResult& WithTotalNoOfSrv(int value) { SetTotalNoOfSrv(value); return *this;}

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
  };

} // namespace Model
} // namespace MigrationHubOrchestrator
} // namespace Aws
