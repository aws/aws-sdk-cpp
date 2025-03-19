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
   * <p>Provides the details of the <code>SignalExternalWorkflowExecution</code>
   * decision.</p> <p> <b>Access Control</b> </p> <p>You can use IAM policies to
   * control this decision's access to Amazon SWF resources as follows:</p> <ul> <li>
   * <p>Use a <code>Resource</code> element with the domain name to limit the action
   * to only specified domains.</p> </li> <li> <p>Use an <code>Action</code> element
   * to allow or deny permission to call this action.</p> </li> <li> <p>You cannot
   * use an IAM policy to constrain this action's parameters.</p> </li> </ul> <p>If
   * the caller doesn't have sufficient permissions to invoke the action, or the
   * parameter values fall outside the specified constraints, the action fails. The
   * associated event attribute's <code>cause</code> parameter is set to
   * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
   * <a
   * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
   * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/SignalExternalWorkflowExecutionDecisionAttributes">AWS
   * API Reference</a></p>
   */
  class SignalExternalWorkflowExecutionDecisionAttributes
  {
  public:
    AWS_SWF_API SignalExternalWorkflowExecutionDecisionAttributes() = default;
    AWS_SWF_API SignalExternalWorkflowExecutionDecisionAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API SignalExternalWorkflowExecutionDecisionAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The <code>workflowId</code> of the workflow execution to be signaled.</p>
     */
    inline const Aws::String& GetWorkflowId() const { return m_workflowId; }
    inline bool WorkflowIdHasBeenSet() const { return m_workflowIdHasBeenSet; }
    template<typename WorkflowIdT = Aws::String>
    void SetWorkflowId(WorkflowIdT&& value) { m_workflowIdHasBeenSet = true; m_workflowId = std::forward<WorkflowIdT>(value); }
    template<typename WorkflowIdT = Aws::String>
    SignalExternalWorkflowExecutionDecisionAttributes& WithWorkflowId(WorkflowIdT&& value) { SetWorkflowId(std::forward<WorkflowIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>runId</code> of the workflow execution to be signaled.</p>
     */
    inline const Aws::String& GetRunId() const { return m_runId; }
    inline bool RunIdHasBeenSet() const { return m_runIdHasBeenSet; }
    template<typename RunIdT = Aws::String>
    void SetRunId(RunIdT&& value) { m_runIdHasBeenSet = true; m_runId = std::forward<RunIdT>(value); }
    template<typename RunIdT = Aws::String>
    SignalExternalWorkflowExecutionDecisionAttributes& WithRunId(RunIdT&& value) { SetRunId(std::forward<RunIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the signal.The target workflow execution uses the signal name
     * and input to process the signal.</p>
     */
    inline const Aws::String& GetSignalName() const { return m_signalName; }
    inline bool SignalNameHasBeenSet() const { return m_signalNameHasBeenSet; }
    template<typename SignalNameT = Aws::String>
    void SetSignalName(SignalNameT&& value) { m_signalNameHasBeenSet = true; m_signalName = std::forward<SignalNameT>(value); }
    template<typename SignalNameT = Aws::String>
    SignalExternalWorkflowExecutionDecisionAttributes& WithSignalName(SignalNameT&& value) { SetSignalName(std::forward<SignalNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The input data to be provided with the signal. The target workflow execution
     * uses the signal name and input data to process the signal.</p>
     */
    inline const Aws::String& GetInput() const { return m_input; }
    inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }
    template<typename InputT = Aws::String>
    void SetInput(InputT&& value) { m_inputHasBeenSet = true; m_input = std::forward<InputT>(value); }
    template<typename InputT = Aws::String>
    SignalExternalWorkflowExecutionDecisionAttributes& WithInput(InputT&& value) { SetInput(std::forward<InputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data attached to the event that can be used by the decider in subsequent
     * decision tasks.</p>
     */
    inline const Aws::String& GetControl() const { return m_control; }
    inline bool ControlHasBeenSet() const { return m_controlHasBeenSet; }
    template<typename ControlT = Aws::String>
    void SetControl(ControlT&& value) { m_controlHasBeenSet = true; m_control = std::forward<ControlT>(value); }
    template<typename ControlT = Aws::String>
    SignalExternalWorkflowExecutionDecisionAttributes& WithControl(ControlT&& value) { SetControl(std::forward<ControlT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_workflowId;
    bool m_workflowIdHasBeenSet = false;

    Aws::String m_runId;
    bool m_runIdHasBeenSet = false;

    Aws::String m_signalName;
    bool m_signalNameHasBeenSet = false;

    Aws::String m_input;
    bool m_inputHasBeenSet = false;

    Aws::String m_control;
    bool m_controlHasBeenSet = false;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
