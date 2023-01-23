/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/swf/SWF_EXPORTS.h>
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
   * <p>Used to filter the workflow executions in visibility APIs by their
   * <code>workflowId</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/WorkflowExecutionFilter">AWS
   * API Reference</a></p>
   */
  class WorkflowExecutionFilter
  {
  public:
    AWS_SWF_API WorkflowExecutionFilter();
    AWS_SWF_API WorkflowExecutionFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API WorkflowExecutionFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The workflowId to pass of match the criteria of this filter.</p>
     */
    inline const Aws::String& GetWorkflowId() const{ return m_workflowId; }

    /**
     * <p>The workflowId to pass of match the criteria of this filter.</p>
     */
    inline bool WorkflowIdHasBeenSet() const { return m_workflowIdHasBeenSet; }

    /**
     * <p>The workflowId to pass of match the criteria of this filter.</p>
     */
    inline void SetWorkflowId(const Aws::String& value) { m_workflowIdHasBeenSet = true; m_workflowId = value; }

    /**
     * <p>The workflowId to pass of match the criteria of this filter.</p>
     */
    inline void SetWorkflowId(Aws::String&& value) { m_workflowIdHasBeenSet = true; m_workflowId = std::move(value); }

    /**
     * <p>The workflowId to pass of match the criteria of this filter.</p>
     */
    inline void SetWorkflowId(const char* value) { m_workflowIdHasBeenSet = true; m_workflowId.assign(value); }

    /**
     * <p>The workflowId to pass of match the criteria of this filter.</p>
     */
    inline WorkflowExecutionFilter& WithWorkflowId(const Aws::String& value) { SetWorkflowId(value); return *this;}

    /**
     * <p>The workflowId to pass of match the criteria of this filter.</p>
     */
    inline WorkflowExecutionFilter& WithWorkflowId(Aws::String&& value) { SetWorkflowId(std::move(value)); return *this;}

    /**
     * <p>The workflowId to pass of match the criteria of this filter.</p>
     */
    inline WorkflowExecutionFilter& WithWorkflowId(const char* value) { SetWorkflowId(value); return *this;}

  private:

    Aws::String m_workflowId;
    bool m_workflowIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
