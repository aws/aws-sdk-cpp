/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/swf/SWF_EXPORTS.h>
#include <aws/swf/SWFRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SWF
{
namespace Model
{

  /**
   */
  class SignalWorkflowExecutionRequest : public SWFRequest
  {
  public:
    AWS_SWF_API SignalWorkflowExecutionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SignalWorkflowExecution"; }

    AWS_SWF_API Aws::String SerializePayload() const override;

    AWS_SWF_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the domain containing the workflow execution to signal.</p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }
    inline SignalWorkflowExecutionRequest& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}
    inline SignalWorkflowExecutionRequest& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}
    inline SignalWorkflowExecutionRequest& WithDomain(const char* value) { SetDomain(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The workflowId of the workflow execution to signal.</p>
     */
    inline const Aws::String& GetWorkflowId() const{ return m_workflowId; }
    inline bool WorkflowIdHasBeenSet() const { return m_workflowIdHasBeenSet; }
    inline void SetWorkflowId(const Aws::String& value) { m_workflowIdHasBeenSet = true; m_workflowId = value; }
    inline void SetWorkflowId(Aws::String&& value) { m_workflowIdHasBeenSet = true; m_workflowId = std::move(value); }
    inline void SetWorkflowId(const char* value) { m_workflowIdHasBeenSet = true; m_workflowId.assign(value); }
    inline SignalWorkflowExecutionRequest& WithWorkflowId(const Aws::String& value) { SetWorkflowId(value); return *this;}
    inline SignalWorkflowExecutionRequest& WithWorkflowId(Aws::String&& value) { SetWorkflowId(std::move(value)); return *this;}
    inline SignalWorkflowExecutionRequest& WithWorkflowId(const char* value) { SetWorkflowId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The runId of the workflow execution to signal.</p>
     */
    inline const Aws::String& GetRunId() const{ return m_runId; }
    inline bool RunIdHasBeenSet() const { return m_runIdHasBeenSet; }
    inline void SetRunId(const Aws::String& value) { m_runIdHasBeenSet = true; m_runId = value; }
    inline void SetRunId(Aws::String&& value) { m_runIdHasBeenSet = true; m_runId = std::move(value); }
    inline void SetRunId(const char* value) { m_runIdHasBeenSet = true; m_runId.assign(value); }
    inline SignalWorkflowExecutionRequest& WithRunId(const Aws::String& value) { SetRunId(value); return *this;}
    inline SignalWorkflowExecutionRequest& WithRunId(Aws::String&& value) { SetRunId(std::move(value)); return *this;}
    inline SignalWorkflowExecutionRequest& WithRunId(const char* value) { SetRunId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the signal. This name must be meaningful to the target
     * workflow.</p>
     */
    inline const Aws::String& GetSignalName() const{ return m_signalName; }
    inline bool SignalNameHasBeenSet() const { return m_signalNameHasBeenSet; }
    inline void SetSignalName(const Aws::String& value) { m_signalNameHasBeenSet = true; m_signalName = value; }
    inline void SetSignalName(Aws::String&& value) { m_signalNameHasBeenSet = true; m_signalName = std::move(value); }
    inline void SetSignalName(const char* value) { m_signalNameHasBeenSet = true; m_signalName.assign(value); }
    inline SignalWorkflowExecutionRequest& WithSignalName(const Aws::String& value) { SetSignalName(value); return *this;}
    inline SignalWorkflowExecutionRequest& WithSignalName(Aws::String&& value) { SetSignalName(std::move(value)); return *this;}
    inline SignalWorkflowExecutionRequest& WithSignalName(const char* value) { SetSignalName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Data to attach to the <code>WorkflowExecutionSignaled</code> event in the
     * target workflow execution's history.</p>
     */
    inline const Aws::String& GetInput() const{ return m_input; }
    inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }
    inline void SetInput(const Aws::String& value) { m_inputHasBeenSet = true; m_input = value; }
    inline void SetInput(Aws::String&& value) { m_inputHasBeenSet = true; m_input = std::move(value); }
    inline void SetInput(const char* value) { m_inputHasBeenSet = true; m_input.assign(value); }
    inline SignalWorkflowExecutionRequest& WithInput(const Aws::String& value) { SetInput(value); return *this;}
    inline SignalWorkflowExecutionRequest& WithInput(Aws::String&& value) { SetInput(std::move(value)); return *this;}
    inline SignalWorkflowExecutionRequest& WithInput(const char* value) { SetInput(value); return *this;}
    ///@}
  private:

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;

    Aws::String m_workflowId;
    bool m_workflowIdHasBeenSet = false;

    Aws::String m_runId;
    bool m_runIdHasBeenSet = false;

    Aws::String m_signalName;
    bool m_signalNameHasBeenSet = false;

    Aws::String m_input;
    bool m_inputHasBeenSet = false;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
