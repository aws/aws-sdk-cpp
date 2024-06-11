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
   * <p>Represents a workflow execution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/WorkflowExecution">AWS
   * API Reference</a></p>
   */
  class WorkflowExecution
  {
  public:
    AWS_SWF_API WorkflowExecution();
    AWS_SWF_API WorkflowExecution(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API WorkflowExecution& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The user defined identifier associated with the workflow execution.</p>
     */
    inline const Aws::String& GetWorkflowId() const{ return m_workflowId; }
    inline bool WorkflowIdHasBeenSet() const { return m_workflowIdHasBeenSet; }
    inline void SetWorkflowId(const Aws::String& value) { m_workflowIdHasBeenSet = true; m_workflowId = value; }
    inline void SetWorkflowId(Aws::String&& value) { m_workflowIdHasBeenSet = true; m_workflowId = std::move(value); }
    inline void SetWorkflowId(const char* value) { m_workflowIdHasBeenSet = true; m_workflowId.assign(value); }
    inline WorkflowExecution& WithWorkflowId(const Aws::String& value) { SetWorkflowId(value); return *this;}
    inline WorkflowExecution& WithWorkflowId(Aws::String&& value) { SetWorkflowId(std::move(value)); return *this;}
    inline WorkflowExecution& WithWorkflowId(const char* value) { SetWorkflowId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A system-generated unique identifier for the workflow execution.</p>
     */
    inline const Aws::String& GetRunId() const{ return m_runId; }
    inline bool RunIdHasBeenSet() const { return m_runIdHasBeenSet; }
    inline void SetRunId(const Aws::String& value) { m_runIdHasBeenSet = true; m_runId = value; }
    inline void SetRunId(Aws::String&& value) { m_runIdHasBeenSet = true; m_runId = std::move(value); }
    inline void SetRunId(const char* value) { m_runIdHasBeenSet = true; m_runId.assign(value); }
    inline WorkflowExecution& WithRunId(const Aws::String& value) { SetRunId(value); return *this;}
    inline WorkflowExecution& WithRunId(Aws::String&& value) { SetRunId(std::move(value)); return *this;}
    inline WorkflowExecution& WithRunId(const char* value) { SetRunId(value); return *this;}
    ///@}
  private:

    Aws::String m_workflowId;
    bool m_workflowIdHasBeenSet = false;

    Aws::String m_runId;
    bool m_runIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
