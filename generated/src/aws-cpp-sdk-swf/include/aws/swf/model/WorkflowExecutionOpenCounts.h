/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/swf/SWF_EXPORTS.h>

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
   * <p>Contains the counts of open tasks, child workflow executions and timers for a
   * workflow execution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/WorkflowExecutionOpenCounts">AWS
   * API Reference</a></p>
   */
  class WorkflowExecutionOpenCounts
  {
  public:
    AWS_SWF_API WorkflowExecutionOpenCounts() = default;
    AWS_SWF_API WorkflowExecutionOpenCounts(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API WorkflowExecutionOpenCounts& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The count of activity tasks whose status is <code>OPEN</code>.</p>
     */
    inline int GetOpenActivityTasks() const { return m_openActivityTasks; }
    inline bool OpenActivityTasksHasBeenSet() const { return m_openActivityTasksHasBeenSet; }
    inline void SetOpenActivityTasks(int value) { m_openActivityTasksHasBeenSet = true; m_openActivityTasks = value; }
    inline WorkflowExecutionOpenCounts& WithOpenActivityTasks(int value) { SetOpenActivityTasks(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The count of decision tasks whose status is OPEN. A workflow execution can
     * have at most one open decision task.</p>
     */
    inline int GetOpenDecisionTasks() const { return m_openDecisionTasks; }
    inline bool OpenDecisionTasksHasBeenSet() const { return m_openDecisionTasksHasBeenSet; }
    inline void SetOpenDecisionTasks(int value) { m_openDecisionTasksHasBeenSet = true; m_openDecisionTasks = value; }
    inline WorkflowExecutionOpenCounts& WithOpenDecisionTasks(int value) { SetOpenDecisionTasks(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The count of timers started by this workflow execution that have not fired
     * yet.</p>
     */
    inline int GetOpenTimers() const { return m_openTimers; }
    inline bool OpenTimersHasBeenSet() const { return m_openTimersHasBeenSet; }
    inline void SetOpenTimers(int value) { m_openTimersHasBeenSet = true; m_openTimers = value; }
    inline WorkflowExecutionOpenCounts& WithOpenTimers(int value) { SetOpenTimers(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The count of child workflow executions whose status is <code>OPEN</code>.</p>
     */
    inline int GetOpenChildWorkflowExecutions() const { return m_openChildWorkflowExecutions; }
    inline bool OpenChildWorkflowExecutionsHasBeenSet() const { return m_openChildWorkflowExecutionsHasBeenSet; }
    inline void SetOpenChildWorkflowExecutions(int value) { m_openChildWorkflowExecutionsHasBeenSet = true; m_openChildWorkflowExecutions = value; }
    inline WorkflowExecutionOpenCounts& WithOpenChildWorkflowExecutions(int value) { SetOpenChildWorkflowExecutions(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The count of Lambda tasks whose status is <code>OPEN</code>.</p>
     */
    inline int GetOpenLambdaFunctions() const { return m_openLambdaFunctions; }
    inline bool OpenLambdaFunctionsHasBeenSet() const { return m_openLambdaFunctionsHasBeenSet; }
    inline void SetOpenLambdaFunctions(int value) { m_openLambdaFunctionsHasBeenSet = true; m_openLambdaFunctions = value; }
    inline WorkflowExecutionOpenCounts& WithOpenLambdaFunctions(int value) { SetOpenLambdaFunctions(value); return *this;}
    ///@}
  private:

    int m_openActivityTasks{0};
    bool m_openActivityTasksHasBeenSet = false;

    int m_openDecisionTasks{0};
    bool m_openDecisionTasksHasBeenSet = false;

    int m_openTimers{0};
    bool m_openTimersHasBeenSet = false;

    int m_openChildWorkflowExecutions{0};
    bool m_openChildWorkflowExecutionsHasBeenSet = false;

    int m_openLambdaFunctions{0};
    bool m_openLambdaFunctionsHasBeenSet = false;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
