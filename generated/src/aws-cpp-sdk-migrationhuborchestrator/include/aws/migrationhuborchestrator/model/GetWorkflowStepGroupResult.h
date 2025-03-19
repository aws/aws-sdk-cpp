/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhuborchestrator/MigrationHubOrchestrator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/migrationhuborchestrator/model/StepGroupStatus.h>
#include <aws/migrationhuborchestrator/model/Owner.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/migrationhuborchestrator/model/Tool.h>
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
  class GetWorkflowStepGroupResult
  {
  public:
    AWS_MIGRATIONHUBORCHESTRATOR_API GetWorkflowStepGroupResult() = default;
    AWS_MIGRATIONHUBORCHESTRATOR_API GetWorkflowStepGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUBORCHESTRATOR_API GetWorkflowStepGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the step group.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    GetWorkflowStepGroupResult& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the migration workflow.</p>
     */
    inline const Aws::String& GetWorkflowId() const { return m_workflowId; }
    template<typename WorkflowIdT = Aws::String>
    void SetWorkflowId(WorkflowIdT&& value) { m_workflowIdHasBeenSet = true; m_workflowId = std::forward<WorkflowIdT>(value); }
    template<typename WorkflowIdT = Aws::String>
    GetWorkflowStepGroupResult& WithWorkflowId(WorkflowIdT&& value) { SetWorkflowId(std::forward<WorkflowIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the step group.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GetWorkflowStepGroupResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the step group.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GetWorkflowStepGroupResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the step group.</p>
     */
    inline StepGroupStatus GetStatus() const { return m_status; }
    inline void SetStatus(StepGroupStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetWorkflowStepGroupResult& WithStatus(StepGroupStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The owner of the step group.</p>
     */
    inline Owner GetOwner() const { return m_owner; }
    inline void SetOwner(Owner value) { m_ownerHasBeenSet = true; m_owner = value; }
    inline GetWorkflowStepGroupResult& WithOwner(Owner value) { SetOwner(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the step group was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    GetWorkflowStepGroupResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the step group was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    GetWorkflowStepGroupResult& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the step group ended.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    GetWorkflowStepGroupResult& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of AWS services utilized in a migration workflow.</p>
     */
    inline const Aws::Vector<Tool>& GetTools() const { return m_tools; }
    template<typename ToolsT = Aws::Vector<Tool>>
    void SetTools(ToolsT&& value) { m_toolsHasBeenSet = true; m_tools = std::forward<ToolsT>(value); }
    template<typename ToolsT = Aws::Vector<Tool>>
    GetWorkflowStepGroupResult& WithTools(ToolsT&& value) { SetTools(std::forward<ToolsT>(value)); return *this;}
    template<typename ToolsT = Tool>
    GetWorkflowStepGroupResult& AddTools(ToolsT&& value) { m_toolsHasBeenSet = true; m_tools.emplace_back(std::forward<ToolsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The previous step group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPrevious() const { return m_previous; }
    template<typename PreviousT = Aws::Vector<Aws::String>>
    void SetPrevious(PreviousT&& value) { m_previousHasBeenSet = true; m_previous = std::forward<PreviousT>(value); }
    template<typename PreviousT = Aws::Vector<Aws::String>>
    GetWorkflowStepGroupResult& WithPrevious(PreviousT&& value) { SetPrevious(std::forward<PreviousT>(value)); return *this;}
    template<typename PreviousT = Aws::String>
    GetWorkflowStepGroupResult& AddPrevious(PreviousT&& value) { m_previousHasBeenSet = true; m_previous.emplace_back(std::forward<PreviousT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The next step group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNext() const { return m_next; }
    template<typename NextT = Aws::Vector<Aws::String>>
    void SetNext(NextT&& value) { m_nextHasBeenSet = true; m_next = std::forward<NextT>(value); }
    template<typename NextT = Aws::Vector<Aws::String>>
    GetWorkflowStepGroupResult& WithNext(NextT&& value) { SetNext(std::forward<NextT>(value)); return *this;}
    template<typename NextT = Aws::String>
    GetWorkflowStepGroupResult& AddNext(NextT&& value) { m_nextHasBeenSet = true; m_next.emplace_back(std::forward<NextT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetWorkflowStepGroupResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_workflowId;
    bool m_workflowIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    StepGroupStatus m_status{StepGroupStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Owner m_owner{Owner::NOT_SET};
    bool m_ownerHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    Aws::Vector<Tool> m_tools;
    bool m_toolsHasBeenSet = false;

    Aws::Vector<Aws::String> m_previous;
    bool m_previousHasBeenSet = false;

    Aws::Vector<Aws::String> m_next;
    bool m_nextHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubOrchestrator
} // namespace Aws
