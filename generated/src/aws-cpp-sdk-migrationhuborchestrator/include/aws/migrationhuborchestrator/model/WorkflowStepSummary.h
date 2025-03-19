/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhuborchestrator/MigrationHubOrchestrator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/migrationhuborchestrator/model/StepActionType.h>
#include <aws/migrationhuborchestrator/model/Owner.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/migrationhuborchestrator/model/StepStatus.h>
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
namespace MigrationHubOrchestrator
{
namespace Model
{

  /**
   * <p>The summary of the step in a migration workflow.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/WorkflowStepSummary">AWS
   * API Reference</a></p>
   */
  class WorkflowStepSummary
  {
  public:
    AWS_MIGRATIONHUBORCHESTRATOR_API WorkflowStepSummary() = default;
    AWS_MIGRATIONHUBORCHESTRATOR_API WorkflowStepSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBORCHESTRATOR_API WorkflowStepSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBORCHESTRATOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the step.</p>
     */
    inline const Aws::String& GetStepId() const { return m_stepId; }
    inline bool StepIdHasBeenSet() const { return m_stepIdHasBeenSet; }
    template<typename StepIdT = Aws::String>
    void SetStepId(StepIdT&& value) { m_stepIdHasBeenSet = true; m_stepId = std::forward<StepIdT>(value); }
    template<typename StepIdT = Aws::String>
    WorkflowStepSummary& WithStepId(StepIdT&& value) { SetStepId(std::forward<StepIdT>(value)); return *this;}
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
    WorkflowStepSummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action type of the step. You must run and update the status of a manual
     * step for the workflow to continue after the completion of the step.</p>
     */
    inline StepActionType GetStepActionType() const { return m_stepActionType; }
    inline bool StepActionTypeHasBeenSet() const { return m_stepActionTypeHasBeenSet; }
    inline void SetStepActionType(StepActionType value) { m_stepActionTypeHasBeenSet = true; m_stepActionType = value; }
    inline WorkflowStepSummary& WithStepActionType(StepActionType value) { SetStepActionType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The owner of the step.</p>
     */
    inline Owner GetOwner() const { return m_owner; }
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }
    inline void SetOwner(Owner value) { m_ownerHasBeenSet = true; m_owner = value; }
    inline WorkflowStepSummary& WithOwner(Owner value) { SetOwner(value); return *this;}
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
    WorkflowStepSummary& WithPrevious(PreviousT&& value) { SetPrevious(std::forward<PreviousT>(value)); return *this;}
    template<typename PreviousT = Aws::String>
    WorkflowStepSummary& AddPrevious(PreviousT&& value) { m_previousHasBeenSet = true; m_previous.emplace_back(std::forward<PreviousT>(value)); return *this; }
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
    WorkflowStepSummary& WithNext(NextT&& value) { SetNext(std::forward<NextT>(value)); return *this;}
    template<typename NextT = Aws::String>
    WorkflowStepSummary& AddNext(NextT&& value) { m_nextHasBeenSet = true; m_next.emplace_back(std::forward<NextT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of the step.</p>
     */
    inline StepStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(StepStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline WorkflowStepSummary& WithStatus(StepStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status message of the migration workflow.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    WorkflowStepSummary& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of servers that have been migrated.</p>
     */
    inline int GetNoOfSrvCompleted() const { return m_noOfSrvCompleted; }
    inline bool NoOfSrvCompletedHasBeenSet() const { return m_noOfSrvCompletedHasBeenSet; }
    inline void SetNoOfSrvCompleted(int value) { m_noOfSrvCompletedHasBeenSet = true; m_noOfSrvCompleted = value; }
    inline WorkflowStepSummary& WithNoOfSrvCompleted(int value) { SetNoOfSrvCompleted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of servers that have failed to migrate.</p>
     */
    inline int GetNoOfSrvFailed() const { return m_noOfSrvFailed; }
    inline bool NoOfSrvFailedHasBeenSet() const { return m_noOfSrvFailedHasBeenSet; }
    inline void SetNoOfSrvFailed(int value) { m_noOfSrvFailedHasBeenSet = true; m_noOfSrvFailed = value; }
    inline WorkflowStepSummary& WithNoOfSrvFailed(int value) { SetNoOfSrvFailed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of servers that have been migrated.</p>
     */
    inline int GetTotalNoOfSrv() const { return m_totalNoOfSrv; }
    inline bool TotalNoOfSrvHasBeenSet() const { return m_totalNoOfSrvHasBeenSet; }
    inline void SetTotalNoOfSrv(int value) { m_totalNoOfSrvHasBeenSet = true; m_totalNoOfSrv = value; }
    inline WorkflowStepSummary& WithTotalNoOfSrv(int value) { SetTotalNoOfSrv(value); return *this;}
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
    WorkflowStepSummary& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of the script.</p>
     */
    inline const Aws::String& GetScriptLocation() const { return m_scriptLocation; }
    inline bool ScriptLocationHasBeenSet() const { return m_scriptLocationHasBeenSet; }
    template<typename ScriptLocationT = Aws::String>
    void SetScriptLocation(ScriptLocationT&& value) { m_scriptLocationHasBeenSet = true; m_scriptLocation = std::forward<ScriptLocationT>(value); }
    template<typename ScriptLocationT = Aws::String>
    WorkflowStepSummary& WithScriptLocation(ScriptLocationT&& value) { SetScriptLocation(std::forward<ScriptLocationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_stepId;
    bool m_stepIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    StepActionType m_stepActionType{StepActionType::NOT_SET};
    bool m_stepActionTypeHasBeenSet = false;

    Owner m_owner{Owner::NOT_SET};
    bool m_ownerHasBeenSet = false;

    Aws::Vector<Aws::String> m_previous;
    bool m_previousHasBeenSet = false;

    Aws::Vector<Aws::String> m_next;
    bool m_nextHasBeenSet = false;

    StepStatus m_status{StepStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    int m_noOfSrvCompleted{0};
    bool m_noOfSrvCompletedHasBeenSet = false;

    int m_noOfSrvFailed{0};
    bool m_noOfSrvFailedHasBeenSet = false;

    int m_totalNoOfSrv{0};
    bool m_totalNoOfSrvHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_scriptLocation;
    bool m_scriptLocationHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubOrchestrator
} // namespace Aws
