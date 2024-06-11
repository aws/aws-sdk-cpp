/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhuborchestrator/MigrationHubOrchestrator_EXPORTS.h>
#include <aws/migrationhuborchestrator/MigrationHubOrchestratorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/migrationhuborchestrator/model/StepActionType.h>
#include <aws/migrationhuborchestrator/model/WorkflowStepAutomationConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/migrationhuborchestrator/model/StepStatus.h>
#include <aws/migrationhuborchestrator/model/WorkflowStepOutput.h>
#include <utility>

namespace Aws
{
namespace MigrationHubOrchestrator
{
namespace Model
{

  /**
   */
  class UpdateWorkflowStepRequest : public MigrationHubOrchestratorRequest
  {
  public:
    AWS_MIGRATIONHUBORCHESTRATOR_API UpdateWorkflowStepRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateWorkflowStep"; }

    AWS_MIGRATIONHUBORCHESTRATOR_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the step.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline UpdateWorkflowStepRequest& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline UpdateWorkflowStepRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline UpdateWorkflowStepRequest& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the step group.</p>
     */
    inline const Aws::String& GetStepGroupId() const{ return m_stepGroupId; }
    inline bool StepGroupIdHasBeenSet() const { return m_stepGroupIdHasBeenSet; }
    inline void SetStepGroupId(const Aws::String& value) { m_stepGroupIdHasBeenSet = true; m_stepGroupId = value; }
    inline void SetStepGroupId(Aws::String&& value) { m_stepGroupIdHasBeenSet = true; m_stepGroupId = std::move(value); }
    inline void SetStepGroupId(const char* value) { m_stepGroupIdHasBeenSet = true; m_stepGroupId.assign(value); }
    inline UpdateWorkflowStepRequest& WithStepGroupId(const Aws::String& value) { SetStepGroupId(value); return *this;}
    inline UpdateWorkflowStepRequest& WithStepGroupId(Aws::String&& value) { SetStepGroupId(std::move(value)); return *this;}
    inline UpdateWorkflowStepRequest& WithStepGroupId(const char* value) { SetStepGroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the migration workflow.</p>
     */
    inline const Aws::String& GetWorkflowId() const{ return m_workflowId; }
    inline bool WorkflowIdHasBeenSet() const { return m_workflowIdHasBeenSet; }
    inline void SetWorkflowId(const Aws::String& value) { m_workflowIdHasBeenSet = true; m_workflowId = value; }
    inline void SetWorkflowId(Aws::String&& value) { m_workflowIdHasBeenSet = true; m_workflowId = std::move(value); }
    inline void SetWorkflowId(const char* value) { m_workflowIdHasBeenSet = true; m_workflowId.assign(value); }
    inline UpdateWorkflowStepRequest& WithWorkflowId(const Aws::String& value) { SetWorkflowId(value); return *this;}
    inline UpdateWorkflowStepRequest& WithWorkflowId(Aws::String&& value) { SetWorkflowId(std::move(value)); return *this;}
    inline UpdateWorkflowStepRequest& WithWorkflowId(const char* value) { SetWorkflowId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the step.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateWorkflowStepRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateWorkflowStepRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateWorkflowStepRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the step.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateWorkflowStepRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateWorkflowStepRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateWorkflowStepRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action type of the step. You must run and update the status of a manual
     * step for the workflow to continue after the completion of the step.</p>
     */
    inline const StepActionType& GetStepActionType() const{ return m_stepActionType; }
    inline bool StepActionTypeHasBeenSet() const { return m_stepActionTypeHasBeenSet; }
    inline void SetStepActionType(const StepActionType& value) { m_stepActionTypeHasBeenSet = true; m_stepActionType = value; }
    inline void SetStepActionType(StepActionType&& value) { m_stepActionTypeHasBeenSet = true; m_stepActionType = std::move(value); }
    inline UpdateWorkflowStepRequest& WithStepActionType(const StepActionType& value) { SetStepActionType(value); return *this;}
    inline UpdateWorkflowStepRequest& WithStepActionType(StepActionType&& value) { SetStepActionType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The custom script to run tests on the source and target environments.</p>
     */
    inline const WorkflowStepAutomationConfiguration& GetWorkflowStepAutomationConfiguration() const{ return m_workflowStepAutomationConfiguration; }
    inline bool WorkflowStepAutomationConfigurationHasBeenSet() const { return m_workflowStepAutomationConfigurationHasBeenSet; }
    inline void SetWorkflowStepAutomationConfiguration(const WorkflowStepAutomationConfiguration& value) { m_workflowStepAutomationConfigurationHasBeenSet = true; m_workflowStepAutomationConfiguration = value; }
    inline void SetWorkflowStepAutomationConfiguration(WorkflowStepAutomationConfiguration&& value) { m_workflowStepAutomationConfigurationHasBeenSet = true; m_workflowStepAutomationConfiguration = std::move(value); }
    inline UpdateWorkflowStepRequest& WithWorkflowStepAutomationConfiguration(const WorkflowStepAutomationConfiguration& value) { SetWorkflowStepAutomationConfiguration(value); return *this;}
    inline UpdateWorkflowStepRequest& WithWorkflowStepAutomationConfiguration(WorkflowStepAutomationConfiguration&& value) { SetWorkflowStepAutomationConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The servers on which a step will be run.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStepTarget() const{ return m_stepTarget; }
    inline bool StepTargetHasBeenSet() const { return m_stepTargetHasBeenSet; }
    inline void SetStepTarget(const Aws::Vector<Aws::String>& value) { m_stepTargetHasBeenSet = true; m_stepTarget = value; }
    inline void SetStepTarget(Aws::Vector<Aws::String>&& value) { m_stepTargetHasBeenSet = true; m_stepTarget = std::move(value); }
    inline UpdateWorkflowStepRequest& WithStepTarget(const Aws::Vector<Aws::String>& value) { SetStepTarget(value); return *this;}
    inline UpdateWorkflowStepRequest& WithStepTarget(Aws::Vector<Aws::String>&& value) { SetStepTarget(std::move(value)); return *this;}
    inline UpdateWorkflowStepRequest& AddStepTarget(const Aws::String& value) { m_stepTargetHasBeenSet = true; m_stepTarget.push_back(value); return *this; }
    inline UpdateWorkflowStepRequest& AddStepTarget(Aws::String&& value) { m_stepTargetHasBeenSet = true; m_stepTarget.push_back(std::move(value)); return *this; }
    inline UpdateWorkflowStepRequest& AddStepTarget(const char* value) { m_stepTargetHasBeenSet = true; m_stepTarget.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The outputs of a step.</p>
     */
    inline const Aws::Vector<WorkflowStepOutput>& GetOutputs() const{ return m_outputs; }
    inline bool OutputsHasBeenSet() const { return m_outputsHasBeenSet; }
    inline void SetOutputs(const Aws::Vector<WorkflowStepOutput>& value) { m_outputsHasBeenSet = true; m_outputs = value; }
    inline void SetOutputs(Aws::Vector<WorkflowStepOutput>&& value) { m_outputsHasBeenSet = true; m_outputs = std::move(value); }
    inline UpdateWorkflowStepRequest& WithOutputs(const Aws::Vector<WorkflowStepOutput>& value) { SetOutputs(value); return *this;}
    inline UpdateWorkflowStepRequest& WithOutputs(Aws::Vector<WorkflowStepOutput>&& value) { SetOutputs(std::move(value)); return *this;}
    inline UpdateWorkflowStepRequest& AddOutputs(const WorkflowStepOutput& value) { m_outputsHasBeenSet = true; m_outputs.push_back(value); return *this; }
    inline UpdateWorkflowStepRequest& AddOutputs(WorkflowStepOutput&& value) { m_outputsHasBeenSet = true; m_outputs.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The previous step.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPrevious() const{ return m_previous; }
    inline bool PreviousHasBeenSet() const { return m_previousHasBeenSet; }
    inline void SetPrevious(const Aws::Vector<Aws::String>& value) { m_previousHasBeenSet = true; m_previous = value; }
    inline void SetPrevious(Aws::Vector<Aws::String>&& value) { m_previousHasBeenSet = true; m_previous = std::move(value); }
    inline UpdateWorkflowStepRequest& WithPrevious(const Aws::Vector<Aws::String>& value) { SetPrevious(value); return *this;}
    inline UpdateWorkflowStepRequest& WithPrevious(Aws::Vector<Aws::String>&& value) { SetPrevious(std::move(value)); return *this;}
    inline UpdateWorkflowStepRequest& AddPrevious(const Aws::String& value) { m_previousHasBeenSet = true; m_previous.push_back(value); return *this; }
    inline UpdateWorkflowStepRequest& AddPrevious(Aws::String&& value) { m_previousHasBeenSet = true; m_previous.push_back(std::move(value)); return *this; }
    inline UpdateWorkflowStepRequest& AddPrevious(const char* value) { m_previousHasBeenSet = true; m_previous.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The next step.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNext() const{ return m_next; }
    inline bool NextHasBeenSet() const { return m_nextHasBeenSet; }
    inline void SetNext(const Aws::Vector<Aws::String>& value) { m_nextHasBeenSet = true; m_next = value; }
    inline void SetNext(Aws::Vector<Aws::String>&& value) { m_nextHasBeenSet = true; m_next = std::move(value); }
    inline UpdateWorkflowStepRequest& WithNext(const Aws::Vector<Aws::String>& value) { SetNext(value); return *this;}
    inline UpdateWorkflowStepRequest& WithNext(Aws::Vector<Aws::String>&& value) { SetNext(std::move(value)); return *this;}
    inline UpdateWorkflowStepRequest& AddNext(const Aws::String& value) { m_nextHasBeenSet = true; m_next.push_back(value); return *this; }
    inline UpdateWorkflowStepRequest& AddNext(Aws::String&& value) { m_nextHasBeenSet = true; m_next.push_back(std::move(value)); return *this; }
    inline UpdateWorkflowStepRequest& AddNext(const char* value) { m_nextHasBeenSet = true; m_next.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of the step.</p>
     */
    inline const StepStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const StepStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(StepStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline UpdateWorkflowStepRequest& WithStatus(const StepStatus& value) { SetStatus(value); return *this;}
    inline UpdateWorkflowStepRequest& WithStatus(StepStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_stepGroupId;
    bool m_stepGroupIdHasBeenSet = false;

    Aws::String m_workflowId;
    bool m_workflowIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    StepActionType m_stepActionType;
    bool m_stepActionTypeHasBeenSet = false;

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

    StepStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubOrchestrator
} // namespace Aws
