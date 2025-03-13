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
    AWS_MIGRATIONHUBORCHESTRATOR_API UpdateWorkflowStepRequest() = default;

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
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    UpdateWorkflowStepRequest& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the step group.</p>
     */
    inline const Aws::String& GetStepGroupId() const { return m_stepGroupId; }
    inline bool StepGroupIdHasBeenSet() const { return m_stepGroupIdHasBeenSet; }
    template<typename StepGroupIdT = Aws::String>
    void SetStepGroupId(StepGroupIdT&& value) { m_stepGroupIdHasBeenSet = true; m_stepGroupId = std::forward<StepGroupIdT>(value); }
    template<typename StepGroupIdT = Aws::String>
    UpdateWorkflowStepRequest& WithStepGroupId(StepGroupIdT&& value) { SetStepGroupId(std::forward<StepGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the migration workflow.</p>
     */
    inline const Aws::String& GetWorkflowId() const { return m_workflowId; }
    inline bool WorkflowIdHasBeenSet() const { return m_workflowIdHasBeenSet; }
    template<typename WorkflowIdT = Aws::String>
    void SetWorkflowId(WorkflowIdT&& value) { m_workflowIdHasBeenSet = true; m_workflowId = std::forward<WorkflowIdT>(value); }
    template<typename WorkflowIdT = Aws::String>
    UpdateWorkflowStepRequest& WithWorkflowId(WorkflowIdT&& value) { SetWorkflowId(std::forward<WorkflowIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the step.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateWorkflowStepRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the step.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateWorkflowStepRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action type of the step. You must run and update the status of a manual
     * step for the workflow to continue after the completion of the step.</p>
     */
    inline StepActionType GetStepActionType() const { return m_stepActionType; }
    inline bool StepActionTypeHasBeenSet() const { return m_stepActionTypeHasBeenSet; }
    inline void SetStepActionType(StepActionType value) { m_stepActionTypeHasBeenSet = true; m_stepActionType = value; }
    inline UpdateWorkflowStepRequest& WithStepActionType(StepActionType value) { SetStepActionType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The custom script to run tests on the source and target environments.</p>
     */
    inline const WorkflowStepAutomationConfiguration& GetWorkflowStepAutomationConfiguration() const { return m_workflowStepAutomationConfiguration; }
    inline bool WorkflowStepAutomationConfigurationHasBeenSet() const { return m_workflowStepAutomationConfigurationHasBeenSet; }
    template<typename WorkflowStepAutomationConfigurationT = WorkflowStepAutomationConfiguration>
    void SetWorkflowStepAutomationConfiguration(WorkflowStepAutomationConfigurationT&& value) { m_workflowStepAutomationConfigurationHasBeenSet = true; m_workflowStepAutomationConfiguration = std::forward<WorkflowStepAutomationConfigurationT>(value); }
    template<typename WorkflowStepAutomationConfigurationT = WorkflowStepAutomationConfiguration>
    UpdateWorkflowStepRequest& WithWorkflowStepAutomationConfiguration(WorkflowStepAutomationConfigurationT&& value) { SetWorkflowStepAutomationConfiguration(std::forward<WorkflowStepAutomationConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The servers on which a step will be run.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStepTarget() const { return m_stepTarget; }
    inline bool StepTargetHasBeenSet() const { return m_stepTargetHasBeenSet; }
    template<typename StepTargetT = Aws::Vector<Aws::String>>
    void SetStepTarget(StepTargetT&& value) { m_stepTargetHasBeenSet = true; m_stepTarget = std::forward<StepTargetT>(value); }
    template<typename StepTargetT = Aws::Vector<Aws::String>>
    UpdateWorkflowStepRequest& WithStepTarget(StepTargetT&& value) { SetStepTarget(std::forward<StepTargetT>(value)); return *this;}
    template<typename StepTargetT = Aws::String>
    UpdateWorkflowStepRequest& AddStepTarget(StepTargetT&& value) { m_stepTargetHasBeenSet = true; m_stepTarget.emplace_back(std::forward<StepTargetT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The outputs of a step.</p>
     */
    inline const Aws::Vector<WorkflowStepOutput>& GetOutputs() const { return m_outputs; }
    inline bool OutputsHasBeenSet() const { return m_outputsHasBeenSet; }
    template<typename OutputsT = Aws::Vector<WorkflowStepOutput>>
    void SetOutputs(OutputsT&& value) { m_outputsHasBeenSet = true; m_outputs = std::forward<OutputsT>(value); }
    template<typename OutputsT = Aws::Vector<WorkflowStepOutput>>
    UpdateWorkflowStepRequest& WithOutputs(OutputsT&& value) { SetOutputs(std::forward<OutputsT>(value)); return *this;}
    template<typename OutputsT = WorkflowStepOutput>
    UpdateWorkflowStepRequest& AddOutputs(OutputsT&& value) { m_outputsHasBeenSet = true; m_outputs.emplace_back(std::forward<OutputsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The previous step.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPrevious() const { return m_previous; }
    inline bool PreviousHasBeenSet() const { return m_previousHasBeenSet; }
    template<typename PreviousT = Aws::Vector<Aws::String>>
    void SetPrevious(PreviousT&& value) { m_previousHasBeenSet = true; m_previous = std::forward<PreviousT>(value); }
    template<typename PreviousT = Aws::Vector<Aws::String>>
    UpdateWorkflowStepRequest& WithPrevious(PreviousT&& value) { SetPrevious(std::forward<PreviousT>(value)); return *this;}
    template<typename PreviousT = Aws::String>
    UpdateWorkflowStepRequest& AddPrevious(PreviousT&& value) { m_previousHasBeenSet = true; m_previous.emplace_back(std::forward<PreviousT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The next step.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNext() const { return m_next; }
    inline bool NextHasBeenSet() const { return m_nextHasBeenSet; }
    template<typename NextT = Aws::Vector<Aws::String>>
    void SetNext(NextT&& value) { m_nextHasBeenSet = true; m_next = std::forward<NextT>(value); }
    template<typename NextT = Aws::Vector<Aws::String>>
    UpdateWorkflowStepRequest& WithNext(NextT&& value) { SetNext(std::forward<NextT>(value)); return *this;}
    template<typename NextT = Aws::String>
    UpdateWorkflowStepRequest& AddNext(NextT&& value) { m_nextHasBeenSet = true; m_next.emplace_back(std::forward<NextT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of the step.</p>
     */
    inline StepStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(StepStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline UpdateWorkflowStepRequest& WithStatus(StepStatus value) { SetStatus(value); return *this;}
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

    StepActionType m_stepActionType{StepActionType::NOT_SET};
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

    StepStatus m_status{StepStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubOrchestrator
} // namespace Aws
