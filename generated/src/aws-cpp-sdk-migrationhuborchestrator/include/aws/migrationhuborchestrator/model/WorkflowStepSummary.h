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
    AWS_MIGRATIONHUBORCHESTRATOR_API WorkflowStepSummary();
    AWS_MIGRATIONHUBORCHESTRATOR_API WorkflowStepSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBORCHESTRATOR_API WorkflowStepSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBORCHESTRATOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the step.</p>
     */
    inline const Aws::String& GetStepId() const{ return m_stepId; }
    inline bool StepIdHasBeenSet() const { return m_stepIdHasBeenSet; }
    inline void SetStepId(const Aws::String& value) { m_stepIdHasBeenSet = true; m_stepId = value; }
    inline void SetStepId(Aws::String&& value) { m_stepIdHasBeenSet = true; m_stepId = std::move(value); }
    inline void SetStepId(const char* value) { m_stepIdHasBeenSet = true; m_stepId.assign(value); }
    inline WorkflowStepSummary& WithStepId(const Aws::String& value) { SetStepId(value); return *this;}
    inline WorkflowStepSummary& WithStepId(Aws::String&& value) { SetStepId(std::move(value)); return *this;}
    inline WorkflowStepSummary& WithStepId(const char* value) { SetStepId(value); return *this;}
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
    inline WorkflowStepSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline WorkflowStepSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline WorkflowStepSummary& WithName(const char* value) { SetName(value); return *this;}
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
    inline WorkflowStepSummary& WithStepActionType(const StepActionType& value) { SetStepActionType(value); return *this;}
    inline WorkflowStepSummary& WithStepActionType(StepActionType&& value) { SetStepActionType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The owner of the step.</p>
     */
    inline const Owner& GetOwner() const{ return m_owner; }
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }
    inline void SetOwner(const Owner& value) { m_ownerHasBeenSet = true; m_owner = value; }
    inline void SetOwner(Owner&& value) { m_ownerHasBeenSet = true; m_owner = std::move(value); }
    inline WorkflowStepSummary& WithOwner(const Owner& value) { SetOwner(value); return *this;}
    inline WorkflowStepSummary& WithOwner(Owner&& value) { SetOwner(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The previous step.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPrevious() const{ return m_previous; }
    inline bool PreviousHasBeenSet() const { return m_previousHasBeenSet; }
    inline void SetPrevious(const Aws::Vector<Aws::String>& value) { m_previousHasBeenSet = true; m_previous = value; }
    inline void SetPrevious(Aws::Vector<Aws::String>&& value) { m_previousHasBeenSet = true; m_previous = std::move(value); }
    inline WorkflowStepSummary& WithPrevious(const Aws::Vector<Aws::String>& value) { SetPrevious(value); return *this;}
    inline WorkflowStepSummary& WithPrevious(Aws::Vector<Aws::String>&& value) { SetPrevious(std::move(value)); return *this;}
    inline WorkflowStepSummary& AddPrevious(const Aws::String& value) { m_previousHasBeenSet = true; m_previous.push_back(value); return *this; }
    inline WorkflowStepSummary& AddPrevious(Aws::String&& value) { m_previousHasBeenSet = true; m_previous.push_back(std::move(value)); return *this; }
    inline WorkflowStepSummary& AddPrevious(const char* value) { m_previousHasBeenSet = true; m_previous.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The next step.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNext() const{ return m_next; }
    inline bool NextHasBeenSet() const { return m_nextHasBeenSet; }
    inline void SetNext(const Aws::Vector<Aws::String>& value) { m_nextHasBeenSet = true; m_next = value; }
    inline void SetNext(Aws::Vector<Aws::String>&& value) { m_nextHasBeenSet = true; m_next = std::move(value); }
    inline WorkflowStepSummary& WithNext(const Aws::Vector<Aws::String>& value) { SetNext(value); return *this;}
    inline WorkflowStepSummary& WithNext(Aws::Vector<Aws::String>&& value) { SetNext(std::move(value)); return *this;}
    inline WorkflowStepSummary& AddNext(const Aws::String& value) { m_nextHasBeenSet = true; m_next.push_back(value); return *this; }
    inline WorkflowStepSummary& AddNext(Aws::String&& value) { m_nextHasBeenSet = true; m_next.push_back(std::move(value)); return *this; }
    inline WorkflowStepSummary& AddNext(const char* value) { m_nextHasBeenSet = true; m_next.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of the step.</p>
     */
    inline const StepStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const StepStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(StepStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline WorkflowStepSummary& WithStatus(const StepStatus& value) { SetStatus(value); return *this;}
    inline WorkflowStepSummary& WithStatus(StepStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status message of the migration workflow.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }
    inline WorkflowStepSummary& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline WorkflowStepSummary& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline WorkflowStepSummary& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of servers that have been migrated.</p>
     */
    inline int GetNoOfSrvCompleted() const{ return m_noOfSrvCompleted; }
    inline bool NoOfSrvCompletedHasBeenSet() const { return m_noOfSrvCompletedHasBeenSet; }
    inline void SetNoOfSrvCompleted(int value) { m_noOfSrvCompletedHasBeenSet = true; m_noOfSrvCompleted = value; }
    inline WorkflowStepSummary& WithNoOfSrvCompleted(int value) { SetNoOfSrvCompleted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of servers that have failed to migrate.</p>
     */
    inline int GetNoOfSrvFailed() const{ return m_noOfSrvFailed; }
    inline bool NoOfSrvFailedHasBeenSet() const { return m_noOfSrvFailedHasBeenSet; }
    inline void SetNoOfSrvFailed(int value) { m_noOfSrvFailedHasBeenSet = true; m_noOfSrvFailed = value; }
    inline WorkflowStepSummary& WithNoOfSrvFailed(int value) { SetNoOfSrvFailed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of servers that have been migrated.</p>
     */
    inline int GetTotalNoOfSrv() const{ return m_totalNoOfSrv; }
    inline bool TotalNoOfSrvHasBeenSet() const { return m_totalNoOfSrvHasBeenSet; }
    inline void SetTotalNoOfSrv(int value) { m_totalNoOfSrvHasBeenSet = true; m_totalNoOfSrv = value; }
    inline WorkflowStepSummary& WithTotalNoOfSrv(int value) { SetTotalNoOfSrv(value); return *this;}
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
    inline WorkflowStepSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline WorkflowStepSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline WorkflowStepSummary& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of the script.</p>
     */
    inline const Aws::String& GetScriptLocation() const{ return m_scriptLocation; }
    inline bool ScriptLocationHasBeenSet() const { return m_scriptLocationHasBeenSet; }
    inline void SetScriptLocation(const Aws::String& value) { m_scriptLocationHasBeenSet = true; m_scriptLocation = value; }
    inline void SetScriptLocation(Aws::String&& value) { m_scriptLocationHasBeenSet = true; m_scriptLocation = std::move(value); }
    inline void SetScriptLocation(const char* value) { m_scriptLocationHasBeenSet = true; m_scriptLocation.assign(value); }
    inline WorkflowStepSummary& WithScriptLocation(const Aws::String& value) { SetScriptLocation(value); return *this;}
    inline WorkflowStepSummary& WithScriptLocation(Aws::String&& value) { SetScriptLocation(std::move(value)); return *this;}
    inline WorkflowStepSummary& WithScriptLocation(const char* value) { SetScriptLocation(value); return *this;}
    ///@}
  private:

    Aws::String m_stepId;
    bool m_stepIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    StepActionType m_stepActionType;
    bool m_stepActionTypeHasBeenSet = false;

    Owner m_owner;
    bool m_ownerHasBeenSet = false;

    Aws::Vector<Aws::String> m_previous;
    bool m_previousHasBeenSet = false;

    Aws::Vector<Aws::String> m_next;
    bool m_nextHasBeenSet = false;

    StepStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    int m_noOfSrvCompleted;
    bool m_noOfSrvCompletedHasBeenSet = false;

    int m_noOfSrvFailed;
    bool m_noOfSrvFailedHasBeenSet = false;

    int m_totalNoOfSrv;
    bool m_totalNoOfSrvHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_scriptLocation;
    bool m_scriptLocationHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubOrchestrator
} // namespace Aws
