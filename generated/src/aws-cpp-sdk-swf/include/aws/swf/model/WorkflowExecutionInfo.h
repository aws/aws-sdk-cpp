/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/swf/SWF_EXPORTS.h>
#include <aws/swf/model/WorkflowExecution.h>
#include <aws/swf/model/WorkflowType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/swf/model/ExecutionStatus.h>
#include <aws/swf/model/CloseStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SWF
{
namespace Model
{

  /**
   * <p>Contains information about a workflow execution.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/WorkflowExecutionInfo">AWS
   * API Reference</a></p>
   */
  class WorkflowExecutionInfo
  {
  public:
    AWS_SWF_API WorkflowExecutionInfo() = default;
    AWS_SWF_API WorkflowExecutionInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API WorkflowExecutionInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The workflow execution this information is about.</p>
     */
    inline const WorkflowExecution& GetExecution() const { return m_execution; }
    inline bool ExecutionHasBeenSet() const { return m_executionHasBeenSet; }
    template<typename ExecutionT = WorkflowExecution>
    void SetExecution(ExecutionT&& value) { m_executionHasBeenSet = true; m_execution = std::forward<ExecutionT>(value); }
    template<typename ExecutionT = WorkflowExecution>
    WorkflowExecutionInfo& WithExecution(ExecutionT&& value) { SetExecution(std::forward<ExecutionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the workflow execution.</p>
     */
    inline const WorkflowType& GetWorkflowType() const { return m_workflowType; }
    inline bool WorkflowTypeHasBeenSet() const { return m_workflowTypeHasBeenSet; }
    template<typename WorkflowTypeT = WorkflowType>
    void SetWorkflowType(WorkflowTypeT&& value) { m_workflowTypeHasBeenSet = true; m_workflowType = std::forward<WorkflowTypeT>(value); }
    template<typename WorkflowTypeT = WorkflowType>
    WorkflowExecutionInfo& WithWorkflowType(WorkflowTypeT&& value) { SetWorkflowType(std::forward<WorkflowTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the execution was started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTimestamp() const { return m_startTimestamp; }
    inline bool StartTimestampHasBeenSet() const { return m_startTimestampHasBeenSet; }
    template<typename StartTimestampT = Aws::Utils::DateTime>
    void SetStartTimestamp(StartTimestampT&& value) { m_startTimestampHasBeenSet = true; m_startTimestamp = std::forward<StartTimestampT>(value); }
    template<typename StartTimestampT = Aws::Utils::DateTime>
    WorkflowExecutionInfo& WithStartTimestamp(StartTimestampT&& value) { SetStartTimestamp(std::forward<StartTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the workflow execution was closed. Set only if the execution
     * status is CLOSED.</p>
     */
    inline const Aws::Utils::DateTime& GetCloseTimestamp() const { return m_closeTimestamp; }
    inline bool CloseTimestampHasBeenSet() const { return m_closeTimestampHasBeenSet; }
    template<typename CloseTimestampT = Aws::Utils::DateTime>
    void SetCloseTimestamp(CloseTimestampT&& value) { m_closeTimestampHasBeenSet = true; m_closeTimestamp = std::forward<CloseTimestampT>(value); }
    template<typename CloseTimestampT = Aws::Utils::DateTime>
    WorkflowExecutionInfo& WithCloseTimestamp(CloseTimestampT&& value) { SetCloseTimestamp(std::forward<CloseTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the execution.</p>
     */
    inline ExecutionStatus GetExecutionStatus() const { return m_executionStatus; }
    inline bool ExecutionStatusHasBeenSet() const { return m_executionStatusHasBeenSet; }
    inline void SetExecutionStatus(ExecutionStatus value) { m_executionStatusHasBeenSet = true; m_executionStatus = value; }
    inline WorkflowExecutionInfo& WithExecutionStatus(ExecutionStatus value) { SetExecutionStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the execution status is closed then this specifies how the execution was
     * closed:</p> <ul> <li> <p> <code>COMPLETED</code> – the execution was
     * successfully completed.</p> </li> <li> <p> <code>CANCELED</code> – the execution
     * was canceled.Cancellation allows the implementation to gracefully clean up
     * before the execution is closed.</p> </li> <li> <p> <code>TERMINATED</code> – the
     * execution was force terminated.</p> </li> <li> <p> <code>FAILED</code> – the
     * execution failed to complete.</p> </li> <li> <p> <code>TIMED_OUT</code> – the
     * execution did not complete in the alloted time and was automatically timed
     * out.</p> </li> <li> <p> <code>CONTINUED_AS_NEW</code> – the execution is
     * logically continued. This means the current execution was completed and a new
     * execution was started to carry on the workflow.</p> </li> </ul>
     */
    inline CloseStatus GetCloseStatus() const { return m_closeStatus; }
    inline bool CloseStatusHasBeenSet() const { return m_closeStatusHasBeenSet; }
    inline void SetCloseStatus(CloseStatus value) { m_closeStatusHasBeenSet = true; m_closeStatus = value; }
    inline WorkflowExecutionInfo& WithCloseStatus(CloseStatus value) { SetCloseStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If this workflow execution is a child of another execution then contains the
     * workflow execution that started this execution.</p>
     */
    inline const WorkflowExecution& GetParent() const { return m_parent; }
    inline bool ParentHasBeenSet() const { return m_parentHasBeenSet; }
    template<typename ParentT = WorkflowExecution>
    void SetParent(ParentT&& value) { m_parentHasBeenSet = true; m_parent = std::forward<ParentT>(value); }
    template<typename ParentT = WorkflowExecution>
    WorkflowExecutionInfo& WithParent(ParentT&& value) { SetParent(std::forward<ParentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of tags associated with the workflow execution. Tags can be used to
     * identify and list workflow executions of interest through the visibility APIs. A
     * workflow execution can have a maximum of 5 tags.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTagList() const { return m_tagList; }
    inline bool TagListHasBeenSet() const { return m_tagListHasBeenSet; }
    template<typename TagListT = Aws::Vector<Aws::String>>
    void SetTagList(TagListT&& value) { m_tagListHasBeenSet = true; m_tagList = std::forward<TagListT>(value); }
    template<typename TagListT = Aws::Vector<Aws::String>>
    WorkflowExecutionInfo& WithTagList(TagListT&& value) { SetTagList(std::forward<TagListT>(value)); return *this;}
    template<typename TagListT = Aws::String>
    WorkflowExecutionInfo& AddTagList(TagListT&& value) { m_tagListHasBeenSet = true; m_tagList.emplace_back(std::forward<TagListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Set to true if a cancellation is requested for this workflow execution.</p>
     */
    inline bool GetCancelRequested() const { return m_cancelRequested; }
    inline bool CancelRequestedHasBeenSet() const { return m_cancelRequestedHasBeenSet; }
    inline void SetCancelRequested(bool value) { m_cancelRequestedHasBeenSet = true; m_cancelRequested = value; }
    inline WorkflowExecutionInfo& WithCancelRequested(bool value) { SetCancelRequested(value); return *this;}
    ///@}
  private:

    WorkflowExecution m_execution;
    bool m_executionHasBeenSet = false;

    WorkflowType m_workflowType;
    bool m_workflowTypeHasBeenSet = false;

    Aws::Utils::DateTime m_startTimestamp{};
    bool m_startTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_closeTimestamp{};
    bool m_closeTimestampHasBeenSet = false;

    ExecutionStatus m_executionStatus{ExecutionStatus::NOT_SET};
    bool m_executionStatusHasBeenSet = false;

    CloseStatus m_closeStatus{CloseStatus::NOT_SET};
    bool m_closeStatusHasBeenSet = false;

    WorkflowExecution m_parent;
    bool m_parentHasBeenSet = false;

    Aws::Vector<Aws::String> m_tagList;
    bool m_tagListHasBeenSet = false;

    bool m_cancelRequested{false};
    bool m_cancelRequestedHasBeenSet = false;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
