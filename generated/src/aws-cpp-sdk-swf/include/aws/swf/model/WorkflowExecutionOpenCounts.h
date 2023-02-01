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
    AWS_SWF_API WorkflowExecutionOpenCounts();
    AWS_SWF_API WorkflowExecutionOpenCounts(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API WorkflowExecutionOpenCounts& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The count of activity tasks whose status is <code>OPEN</code>.</p>
     */
    inline int GetOpenActivityTasks() const{ return m_openActivityTasks; }

    /**
     * <p>The count of activity tasks whose status is <code>OPEN</code>.</p>
     */
    inline bool OpenActivityTasksHasBeenSet() const { return m_openActivityTasksHasBeenSet; }

    /**
     * <p>The count of activity tasks whose status is <code>OPEN</code>.</p>
     */
    inline void SetOpenActivityTasks(int value) { m_openActivityTasksHasBeenSet = true; m_openActivityTasks = value; }

    /**
     * <p>The count of activity tasks whose status is <code>OPEN</code>.</p>
     */
    inline WorkflowExecutionOpenCounts& WithOpenActivityTasks(int value) { SetOpenActivityTasks(value); return *this;}


    /**
     * <p>The count of decision tasks whose status is OPEN. A workflow execution can
     * have at most one open decision task.</p>
     */
    inline int GetOpenDecisionTasks() const{ return m_openDecisionTasks; }

    /**
     * <p>The count of decision tasks whose status is OPEN. A workflow execution can
     * have at most one open decision task.</p>
     */
    inline bool OpenDecisionTasksHasBeenSet() const { return m_openDecisionTasksHasBeenSet; }

    /**
     * <p>The count of decision tasks whose status is OPEN. A workflow execution can
     * have at most one open decision task.</p>
     */
    inline void SetOpenDecisionTasks(int value) { m_openDecisionTasksHasBeenSet = true; m_openDecisionTasks = value; }

    /**
     * <p>The count of decision tasks whose status is OPEN. A workflow execution can
     * have at most one open decision task.</p>
     */
    inline WorkflowExecutionOpenCounts& WithOpenDecisionTasks(int value) { SetOpenDecisionTasks(value); return *this;}


    /**
     * <p>The count of timers started by this workflow execution that have not fired
     * yet.</p>
     */
    inline int GetOpenTimers() const{ return m_openTimers; }

    /**
     * <p>The count of timers started by this workflow execution that have not fired
     * yet.</p>
     */
    inline bool OpenTimersHasBeenSet() const { return m_openTimersHasBeenSet; }

    /**
     * <p>The count of timers started by this workflow execution that have not fired
     * yet.</p>
     */
    inline void SetOpenTimers(int value) { m_openTimersHasBeenSet = true; m_openTimers = value; }

    /**
     * <p>The count of timers started by this workflow execution that have not fired
     * yet.</p>
     */
    inline WorkflowExecutionOpenCounts& WithOpenTimers(int value) { SetOpenTimers(value); return *this;}


    /**
     * <p>The count of child workflow executions whose status is <code>OPEN</code>.</p>
     */
    inline int GetOpenChildWorkflowExecutions() const{ return m_openChildWorkflowExecutions; }

    /**
     * <p>The count of child workflow executions whose status is <code>OPEN</code>.</p>
     */
    inline bool OpenChildWorkflowExecutionsHasBeenSet() const { return m_openChildWorkflowExecutionsHasBeenSet; }

    /**
     * <p>The count of child workflow executions whose status is <code>OPEN</code>.</p>
     */
    inline void SetOpenChildWorkflowExecutions(int value) { m_openChildWorkflowExecutionsHasBeenSet = true; m_openChildWorkflowExecutions = value; }

    /**
     * <p>The count of child workflow executions whose status is <code>OPEN</code>.</p>
     */
    inline WorkflowExecutionOpenCounts& WithOpenChildWorkflowExecutions(int value) { SetOpenChildWorkflowExecutions(value); return *this;}


    /**
     * <p>The count of Lambda tasks whose status is <code>OPEN</code>.</p>
     */
    inline int GetOpenLambdaFunctions() const{ return m_openLambdaFunctions; }

    /**
     * <p>The count of Lambda tasks whose status is <code>OPEN</code>.</p>
     */
    inline bool OpenLambdaFunctionsHasBeenSet() const { return m_openLambdaFunctionsHasBeenSet; }

    /**
     * <p>The count of Lambda tasks whose status is <code>OPEN</code>.</p>
     */
    inline void SetOpenLambdaFunctions(int value) { m_openLambdaFunctionsHasBeenSet = true; m_openLambdaFunctions = value; }

    /**
     * <p>The count of Lambda tasks whose status is <code>OPEN</code>.</p>
     */
    inline WorkflowExecutionOpenCounts& WithOpenLambdaFunctions(int value) { SetOpenLambdaFunctions(value); return *this;}

  private:

    int m_openActivityTasks;
    bool m_openActivityTasksHasBeenSet = false;

    int m_openDecisionTasks;
    bool m_openDecisionTasksHasBeenSet = false;

    int m_openTimers;
    bool m_openTimersHasBeenSet = false;

    int m_openChildWorkflowExecutions;
    bool m_openChildWorkflowExecutionsHasBeenSet = false;

    int m_openLambdaFunctions;
    bool m_openLambdaFunctionsHasBeenSet = false;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
