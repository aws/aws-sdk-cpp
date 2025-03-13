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
  class CreateWorkflowStepRequest : public MigrationHubOrchestratorRequest
  {
  public:
    AWS_MIGRATIONHUBORCHESTRATOR_API CreateWorkflowStepRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateWorkflowStep"; }

    AWS_MIGRATIONHUBORCHESTRATOR_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the step.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateWorkflowStepRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
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
    CreateWorkflowStepRequest& WithStepGroupId(StepGroupIdT&& value) { SetStepGroupId(std::forward<StepGroupIdT>(value)); return *this;}
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
    CreateWorkflowStepRequest& WithWorkflowId(WorkflowIdT&& value) { SetWorkflowId(std::forward<WorkflowIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action type of the step. You must run and update the status of a manual
     * step for the workflow to continue after the completion of the step.</p>
     */
    inline StepActionType GetStepActionType() const { return m_stepActionType; }
    inline bool StepActionTypeHasBeenSet() const { return m_stepActionTypeHasBeenSet; }
    inline void SetStepActionType(StepActionType value) { m_stepActionTypeHasBeenSet = true; m_stepActionType = value; }
    inline CreateWorkflowStepRequest& WithStepActionType(StepActionType value) { SetStepActionType(value); return *this;}
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
    CreateWorkflowStepRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The custom script to run tests on source or target environments.</p>
     */
    inline const WorkflowStepAutomationConfiguration& GetWorkflowStepAutomationConfiguration() const { return m_workflowStepAutomationConfiguration; }
    inline bool WorkflowStepAutomationConfigurationHasBeenSet() const { return m_workflowStepAutomationConfigurationHasBeenSet; }
    template<typename WorkflowStepAutomationConfigurationT = WorkflowStepAutomationConfiguration>
    void SetWorkflowStepAutomationConfiguration(WorkflowStepAutomationConfigurationT&& value) { m_workflowStepAutomationConfigurationHasBeenSet = true; m_workflowStepAutomationConfiguration = std::forward<WorkflowStepAutomationConfigurationT>(value); }
    template<typename WorkflowStepAutomationConfigurationT = WorkflowStepAutomationConfiguration>
    CreateWorkflowStepRequest& WithWorkflowStepAutomationConfiguration(WorkflowStepAutomationConfigurationT&& value) { SetWorkflowStepAutomationConfiguration(std::forward<WorkflowStepAutomationConfigurationT>(value)); return *this;}
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
    CreateWorkflowStepRequest& WithStepTarget(StepTargetT&& value) { SetStepTarget(std::forward<StepTargetT>(value)); return *this;}
    template<typename StepTargetT = Aws::String>
    CreateWorkflowStepRequest& AddStepTarget(StepTargetT&& value) { m_stepTargetHasBeenSet = true; m_stepTarget.emplace_back(std::forward<StepTargetT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The key value pairs added for the expected output.</p>
     */
    inline const Aws::Vector<WorkflowStepOutput>& GetOutputs() const { return m_outputs; }
    inline bool OutputsHasBeenSet() const { return m_outputsHasBeenSet; }
    template<typename OutputsT = Aws::Vector<WorkflowStepOutput>>
    void SetOutputs(OutputsT&& value) { m_outputsHasBeenSet = true; m_outputs = std::forward<OutputsT>(value); }
    template<typename OutputsT = Aws::Vector<WorkflowStepOutput>>
    CreateWorkflowStepRequest& WithOutputs(OutputsT&& value) { SetOutputs(std::forward<OutputsT>(value)); return *this;}
    template<typename OutputsT = WorkflowStepOutput>
    CreateWorkflowStepRequest& AddOutputs(OutputsT&& value) { m_outputsHasBeenSet = true; m_outputs.emplace_back(std::forward<OutputsT>(value)); return *this; }
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
    CreateWorkflowStepRequest& WithPrevious(PreviousT&& value) { SetPrevious(std::forward<PreviousT>(value)); return *this;}
    template<typename PreviousT = Aws::String>
    CreateWorkflowStepRequest& AddPrevious(PreviousT&& value) { m_previousHasBeenSet = true; m_previous.emplace_back(std::forward<PreviousT>(value)); return *this; }
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
    CreateWorkflowStepRequest& WithNext(NextT&& value) { SetNext(std::forward<NextT>(value)); return *this;}
    template<typename NextT = Aws::String>
    CreateWorkflowStepRequest& AddNext(NextT&& value) { m_nextHasBeenSet = true; m_next.emplace_back(std::forward<NextT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_stepGroupId;
    bool m_stepGroupIdHasBeenSet = false;

    Aws::String m_workflowId;
    bool m_workflowIdHasBeenSet = false;

    StepActionType m_stepActionType{StepActionType::NOT_SET};
    bool m_stepActionTypeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

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
  };

} // namespace Model
} // namespace MigrationHubOrchestrator
} // namespace Aws
