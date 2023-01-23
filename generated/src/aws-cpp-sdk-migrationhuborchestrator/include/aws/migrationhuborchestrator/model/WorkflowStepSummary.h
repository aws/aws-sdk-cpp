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


    /**
     * <p>The ID of the step.</p>
     */
    inline const Aws::String& GetStepId() const{ return m_stepId; }

    /**
     * <p>The ID of the step.</p>
     */
    inline bool StepIdHasBeenSet() const { return m_stepIdHasBeenSet; }

    /**
     * <p>The ID of the step.</p>
     */
    inline void SetStepId(const Aws::String& value) { m_stepIdHasBeenSet = true; m_stepId = value; }

    /**
     * <p>The ID of the step.</p>
     */
    inline void SetStepId(Aws::String&& value) { m_stepIdHasBeenSet = true; m_stepId = std::move(value); }

    /**
     * <p>The ID of the step.</p>
     */
    inline void SetStepId(const char* value) { m_stepIdHasBeenSet = true; m_stepId.assign(value); }

    /**
     * <p>The ID of the step.</p>
     */
    inline WorkflowStepSummary& WithStepId(const Aws::String& value) { SetStepId(value); return *this;}

    /**
     * <p>The ID of the step.</p>
     */
    inline WorkflowStepSummary& WithStepId(Aws::String&& value) { SetStepId(std::move(value)); return *this;}

    /**
     * <p>The ID of the step.</p>
     */
    inline WorkflowStepSummary& WithStepId(const char* value) { SetStepId(value); return *this;}


    /**
     * <p>The name of the step.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the step.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the step.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the step.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the step.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the step.</p>
     */
    inline WorkflowStepSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the step.</p>
     */
    inline WorkflowStepSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the step.</p>
     */
    inline WorkflowStepSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The action type of the step. You must run and update the status of a manual
     * step for the workflow to continue after the completion of the step.</p>
     */
    inline const StepActionType& GetStepActionType() const{ return m_stepActionType; }

    /**
     * <p>The action type of the step. You must run and update the status of a manual
     * step for the workflow to continue after the completion of the step.</p>
     */
    inline bool StepActionTypeHasBeenSet() const { return m_stepActionTypeHasBeenSet; }

    /**
     * <p>The action type of the step. You must run and update the status of a manual
     * step for the workflow to continue after the completion of the step.</p>
     */
    inline void SetStepActionType(const StepActionType& value) { m_stepActionTypeHasBeenSet = true; m_stepActionType = value; }

    /**
     * <p>The action type of the step. You must run and update the status of a manual
     * step for the workflow to continue after the completion of the step.</p>
     */
    inline void SetStepActionType(StepActionType&& value) { m_stepActionTypeHasBeenSet = true; m_stepActionType = std::move(value); }

    /**
     * <p>The action type of the step. You must run and update the status of a manual
     * step for the workflow to continue after the completion of the step.</p>
     */
    inline WorkflowStepSummary& WithStepActionType(const StepActionType& value) { SetStepActionType(value); return *this;}

    /**
     * <p>The action type of the step. You must run and update the status of a manual
     * step for the workflow to continue after the completion of the step.</p>
     */
    inline WorkflowStepSummary& WithStepActionType(StepActionType&& value) { SetStepActionType(std::move(value)); return *this;}


    /**
     * <p>The owner of the step.</p>
     */
    inline const Owner& GetOwner() const{ return m_owner; }

    /**
     * <p>The owner of the step.</p>
     */
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }

    /**
     * <p>The owner of the step.</p>
     */
    inline void SetOwner(const Owner& value) { m_ownerHasBeenSet = true; m_owner = value; }

    /**
     * <p>The owner of the step.</p>
     */
    inline void SetOwner(Owner&& value) { m_ownerHasBeenSet = true; m_owner = std::move(value); }

    /**
     * <p>The owner of the step.</p>
     */
    inline WorkflowStepSummary& WithOwner(const Owner& value) { SetOwner(value); return *this;}

    /**
     * <p>The owner of the step.</p>
     */
    inline WorkflowStepSummary& WithOwner(Owner&& value) { SetOwner(std::move(value)); return *this;}


    /**
     * <p>The previous step.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPrevious() const{ return m_previous; }

    /**
     * <p>The previous step.</p>
     */
    inline bool PreviousHasBeenSet() const { return m_previousHasBeenSet; }

    /**
     * <p>The previous step.</p>
     */
    inline void SetPrevious(const Aws::Vector<Aws::String>& value) { m_previousHasBeenSet = true; m_previous = value; }

    /**
     * <p>The previous step.</p>
     */
    inline void SetPrevious(Aws::Vector<Aws::String>&& value) { m_previousHasBeenSet = true; m_previous = std::move(value); }

    /**
     * <p>The previous step.</p>
     */
    inline WorkflowStepSummary& WithPrevious(const Aws::Vector<Aws::String>& value) { SetPrevious(value); return *this;}

    /**
     * <p>The previous step.</p>
     */
    inline WorkflowStepSummary& WithPrevious(Aws::Vector<Aws::String>&& value) { SetPrevious(std::move(value)); return *this;}

    /**
     * <p>The previous step.</p>
     */
    inline WorkflowStepSummary& AddPrevious(const Aws::String& value) { m_previousHasBeenSet = true; m_previous.push_back(value); return *this; }

    /**
     * <p>The previous step.</p>
     */
    inline WorkflowStepSummary& AddPrevious(Aws::String&& value) { m_previousHasBeenSet = true; m_previous.push_back(std::move(value)); return *this; }

    /**
     * <p>The previous step.</p>
     */
    inline WorkflowStepSummary& AddPrevious(const char* value) { m_previousHasBeenSet = true; m_previous.push_back(value); return *this; }


    /**
     * <p>The next step.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNext() const{ return m_next; }

    /**
     * <p>The next step.</p>
     */
    inline bool NextHasBeenSet() const { return m_nextHasBeenSet; }

    /**
     * <p>The next step.</p>
     */
    inline void SetNext(const Aws::Vector<Aws::String>& value) { m_nextHasBeenSet = true; m_next = value; }

    /**
     * <p>The next step.</p>
     */
    inline void SetNext(Aws::Vector<Aws::String>&& value) { m_nextHasBeenSet = true; m_next = std::move(value); }

    /**
     * <p>The next step.</p>
     */
    inline WorkflowStepSummary& WithNext(const Aws::Vector<Aws::String>& value) { SetNext(value); return *this;}

    /**
     * <p>The next step.</p>
     */
    inline WorkflowStepSummary& WithNext(Aws::Vector<Aws::String>&& value) { SetNext(std::move(value)); return *this;}

    /**
     * <p>The next step.</p>
     */
    inline WorkflowStepSummary& AddNext(const Aws::String& value) { m_nextHasBeenSet = true; m_next.push_back(value); return *this; }

    /**
     * <p>The next step.</p>
     */
    inline WorkflowStepSummary& AddNext(Aws::String&& value) { m_nextHasBeenSet = true; m_next.push_back(std::move(value)); return *this; }

    /**
     * <p>The next step.</p>
     */
    inline WorkflowStepSummary& AddNext(const char* value) { m_nextHasBeenSet = true; m_next.push_back(value); return *this; }


    /**
     * <p>The status of the step.</p>
     */
    inline const StepStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the step.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the step.</p>
     */
    inline void SetStatus(const StepStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the step.</p>
     */
    inline void SetStatus(StepStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the step.</p>
     */
    inline WorkflowStepSummary& WithStatus(const StepStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the step.</p>
     */
    inline WorkflowStepSummary& WithStatus(StepStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The status message of the migration workflow.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>The status message of the migration workflow.</p>
     */
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }

    /**
     * <p>The status message of the migration workflow.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p>The status message of the migration workflow.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    /**
     * <p>The status message of the migration workflow.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * <p>The status message of the migration workflow.</p>
     */
    inline WorkflowStepSummary& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>The status message of the migration workflow.</p>
     */
    inline WorkflowStepSummary& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>The status message of the migration workflow.</p>
     */
    inline WorkflowStepSummary& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}


    /**
     * <p>The number of servers that have been migrated.</p>
     */
    inline int GetNoOfSrvCompleted() const{ return m_noOfSrvCompleted; }

    /**
     * <p>The number of servers that have been migrated.</p>
     */
    inline bool NoOfSrvCompletedHasBeenSet() const { return m_noOfSrvCompletedHasBeenSet; }

    /**
     * <p>The number of servers that have been migrated.</p>
     */
    inline void SetNoOfSrvCompleted(int value) { m_noOfSrvCompletedHasBeenSet = true; m_noOfSrvCompleted = value; }

    /**
     * <p>The number of servers that have been migrated.</p>
     */
    inline WorkflowStepSummary& WithNoOfSrvCompleted(int value) { SetNoOfSrvCompleted(value); return *this;}


    /**
     * <p>The number of servers that have failed to migrate.</p>
     */
    inline int GetNoOfSrvFailed() const{ return m_noOfSrvFailed; }

    /**
     * <p>The number of servers that have failed to migrate.</p>
     */
    inline bool NoOfSrvFailedHasBeenSet() const { return m_noOfSrvFailedHasBeenSet; }

    /**
     * <p>The number of servers that have failed to migrate.</p>
     */
    inline void SetNoOfSrvFailed(int value) { m_noOfSrvFailedHasBeenSet = true; m_noOfSrvFailed = value; }

    /**
     * <p>The number of servers that have failed to migrate.</p>
     */
    inline WorkflowStepSummary& WithNoOfSrvFailed(int value) { SetNoOfSrvFailed(value); return *this;}


    /**
     * <p>The total number of servers that have been migrated.</p>
     */
    inline int GetTotalNoOfSrv() const{ return m_totalNoOfSrv; }

    /**
     * <p>The total number of servers that have been migrated.</p>
     */
    inline bool TotalNoOfSrvHasBeenSet() const { return m_totalNoOfSrvHasBeenSet; }

    /**
     * <p>The total number of servers that have been migrated.</p>
     */
    inline void SetTotalNoOfSrv(int value) { m_totalNoOfSrvHasBeenSet = true; m_totalNoOfSrv = value; }

    /**
     * <p>The total number of servers that have been migrated.</p>
     */
    inline WorkflowStepSummary& WithTotalNoOfSrv(int value) { SetTotalNoOfSrv(value); return *this;}


    /**
     * <p>The description of the step.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the step.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the step.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the step.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the step.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the step.</p>
     */
    inline WorkflowStepSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the step.</p>
     */
    inline WorkflowStepSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the step.</p>
     */
    inline WorkflowStepSummary& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The location of the script.</p>
     */
    inline const Aws::String& GetScriptLocation() const{ return m_scriptLocation; }

    /**
     * <p>The location of the script.</p>
     */
    inline bool ScriptLocationHasBeenSet() const { return m_scriptLocationHasBeenSet; }

    /**
     * <p>The location of the script.</p>
     */
    inline void SetScriptLocation(const Aws::String& value) { m_scriptLocationHasBeenSet = true; m_scriptLocation = value; }

    /**
     * <p>The location of the script.</p>
     */
    inline void SetScriptLocation(Aws::String&& value) { m_scriptLocationHasBeenSet = true; m_scriptLocation = std::move(value); }

    /**
     * <p>The location of the script.</p>
     */
    inline void SetScriptLocation(const char* value) { m_scriptLocationHasBeenSet = true; m_scriptLocation.assign(value); }

    /**
     * <p>The location of the script.</p>
     */
    inline WorkflowStepSummary& WithScriptLocation(const Aws::String& value) { SetScriptLocation(value); return *this;}

    /**
     * <p>The location of the script.</p>
     */
    inline WorkflowStepSummary& WithScriptLocation(Aws::String&& value) { SetScriptLocation(std::move(value)); return *this;}

    /**
     * <p>The location of the script.</p>
     */
    inline WorkflowStepSummary& WithScriptLocation(const char* value) { SetScriptLocation(value); return *this;}

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
