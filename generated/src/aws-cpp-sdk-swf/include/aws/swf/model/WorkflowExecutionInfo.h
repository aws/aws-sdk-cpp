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
    AWS_SWF_API WorkflowExecutionInfo();
    AWS_SWF_API WorkflowExecutionInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API WorkflowExecutionInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The workflow execution this information is about.</p>
     */
    inline const WorkflowExecution& GetExecution() const{ return m_execution; }
    inline bool ExecutionHasBeenSet() const { return m_executionHasBeenSet; }
    inline void SetExecution(const WorkflowExecution& value) { m_executionHasBeenSet = true; m_execution = value; }
    inline void SetExecution(WorkflowExecution&& value) { m_executionHasBeenSet = true; m_execution = std::move(value); }
    inline WorkflowExecutionInfo& WithExecution(const WorkflowExecution& value) { SetExecution(value); return *this;}
    inline WorkflowExecutionInfo& WithExecution(WorkflowExecution&& value) { SetExecution(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the workflow execution.</p>
     */
    inline const WorkflowType& GetWorkflowType() const{ return m_workflowType; }
    inline bool WorkflowTypeHasBeenSet() const { return m_workflowTypeHasBeenSet; }
    inline void SetWorkflowType(const WorkflowType& value) { m_workflowTypeHasBeenSet = true; m_workflowType = value; }
    inline void SetWorkflowType(WorkflowType&& value) { m_workflowTypeHasBeenSet = true; m_workflowType = std::move(value); }
    inline WorkflowExecutionInfo& WithWorkflowType(const WorkflowType& value) { SetWorkflowType(value); return *this;}
    inline WorkflowExecutionInfo& WithWorkflowType(WorkflowType&& value) { SetWorkflowType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the execution was started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTimestamp() const{ return m_startTimestamp; }
    inline bool StartTimestampHasBeenSet() const { return m_startTimestampHasBeenSet; }
    inline void SetStartTimestamp(const Aws::Utils::DateTime& value) { m_startTimestampHasBeenSet = true; m_startTimestamp = value; }
    inline void SetStartTimestamp(Aws::Utils::DateTime&& value) { m_startTimestampHasBeenSet = true; m_startTimestamp = std::move(value); }
    inline WorkflowExecutionInfo& WithStartTimestamp(const Aws::Utils::DateTime& value) { SetStartTimestamp(value); return *this;}
    inline WorkflowExecutionInfo& WithStartTimestamp(Aws::Utils::DateTime&& value) { SetStartTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the workflow execution was closed. Set only if the execution
     * status is CLOSED.</p>
     */
    inline const Aws::Utils::DateTime& GetCloseTimestamp() const{ return m_closeTimestamp; }
    inline bool CloseTimestampHasBeenSet() const { return m_closeTimestampHasBeenSet; }
    inline void SetCloseTimestamp(const Aws::Utils::DateTime& value) { m_closeTimestampHasBeenSet = true; m_closeTimestamp = value; }
    inline void SetCloseTimestamp(Aws::Utils::DateTime&& value) { m_closeTimestampHasBeenSet = true; m_closeTimestamp = std::move(value); }
    inline WorkflowExecutionInfo& WithCloseTimestamp(const Aws::Utils::DateTime& value) { SetCloseTimestamp(value); return *this;}
    inline WorkflowExecutionInfo& WithCloseTimestamp(Aws::Utils::DateTime&& value) { SetCloseTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the execution.</p>
     */
    inline const ExecutionStatus& GetExecutionStatus() const{ return m_executionStatus; }
    inline bool ExecutionStatusHasBeenSet() const { return m_executionStatusHasBeenSet; }
    inline void SetExecutionStatus(const ExecutionStatus& value) { m_executionStatusHasBeenSet = true; m_executionStatus = value; }
    inline void SetExecutionStatus(ExecutionStatus&& value) { m_executionStatusHasBeenSet = true; m_executionStatus = std::move(value); }
    inline WorkflowExecutionInfo& WithExecutionStatus(const ExecutionStatus& value) { SetExecutionStatus(value); return *this;}
    inline WorkflowExecutionInfo& WithExecutionStatus(ExecutionStatus&& value) { SetExecutionStatus(std::move(value)); return *this;}
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
    inline const CloseStatus& GetCloseStatus() const{ return m_closeStatus; }
    inline bool CloseStatusHasBeenSet() const { return m_closeStatusHasBeenSet; }
    inline void SetCloseStatus(const CloseStatus& value) { m_closeStatusHasBeenSet = true; m_closeStatus = value; }
    inline void SetCloseStatus(CloseStatus&& value) { m_closeStatusHasBeenSet = true; m_closeStatus = std::move(value); }
    inline WorkflowExecutionInfo& WithCloseStatus(const CloseStatus& value) { SetCloseStatus(value); return *this;}
    inline WorkflowExecutionInfo& WithCloseStatus(CloseStatus&& value) { SetCloseStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If this workflow execution is a child of another execution then contains the
     * workflow execution that started this execution.</p>
     */
    inline const WorkflowExecution& GetParent() const{ return m_parent; }
    inline bool ParentHasBeenSet() const { return m_parentHasBeenSet; }
    inline void SetParent(const WorkflowExecution& value) { m_parentHasBeenSet = true; m_parent = value; }
    inline void SetParent(WorkflowExecution&& value) { m_parentHasBeenSet = true; m_parent = std::move(value); }
    inline WorkflowExecutionInfo& WithParent(const WorkflowExecution& value) { SetParent(value); return *this;}
    inline WorkflowExecutionInfo& WithParent(WorkflowExecution&& value) { SetParent(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of tags associated with the workflow execution. Tags can be used to
     * identify and list workflow executions of interest through the visibility APIs. A
     * workflow execution can have a maximum of 5 tags.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTagList() const{ return m_tagList; }
    inline bool TagListHasBeenSet() const { return m_tagListHasBeenSet; }
    inline void SetTagList(const Aws::Vector<Aws::String>& value) { m_tagListHasBeenSet = true; m_tagList = value; }
    inline void SetTagList(Aws::Vector<Aws::String>&& value) { m_tagListHasBeenSet = true; m_tagList = std::move(value); }
    inline WorkflowExecutionInfo& WithTagList(const Aws::Vector<Aws::String>& value) { SetTagList(value); return *this;}
    inline WorkflowExecutionInfo& WithTagList(Aws::Vector<Aws::String>&& value) { SetTagList(std::move(value)); return *this;}
    inline WorkflowExecutionInfo& AddTagList(const Aws::String& value) { m_tagListHasBeenSet = true; m_tagList.push_back(value); return *this; }
    inline WorkflowExecutionInfo& AddTagList(Aws::String&& value) { m_tagListHasBeenSet = true; m_tagList.push_back(std::move(value)); return *this; }
    inline WorkflowExecutionInfo& AddTagList(const char* value) { m_tagListHasBeenSet = true; m_tagList.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Set to true if a cancellation is requested for this workflow execution.</p>
     */
    inline bool GetCancelRequested() const{ return m_cancelRequested; }
    inline bool CancelRequestedHasBeenSet() const { return m_cancelRequestedHasBeenSet; }
    inline void SetCancelRequested(bool value) { m_cancelRequestedHasBeenSet = true; m_cancelRequested = value; }
    inline WorkflowExecutionInfo& WithCancelRequested(bool value) { SetCancelRequested(value); return *this;}
    ///@}
  private:

    WorkflowExecution m_execution;
    bool m_executionHasBeenSet = false;

    WorkflowType m_workflowType;
    bool m_workflowTypeHasBeenSet = false;

    Aws::Utils::DateTime m_startTimestamp;
    bool m_startTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_closeTimestamp;
    bool m_closeTimestampHasBeenSet = false;

    ExecutionStatus m_executionStatus;
    bool m_executionStatusHasBeenSet = false;

    CloseStatus m_closeStatus;
    bool m_closeStatusHasBeenSet = false;

    WorkflowExecution m_parent;
    bool m_parentHasBeenSet = false;

    Aws::Vector<Aws::String> m_tagList;
    bool m_tagListHasBeenSet = false;

    bool m_cancelRequested;
    bool m_cancelRequestedHasBeenSet = false;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
